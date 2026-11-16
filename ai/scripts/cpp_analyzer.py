#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
cpp_analyzer.py — iwant (C++ library) 源码静态分析器
从 src/<module>/ 下每个源文件提取四类信息：
  - class / struct / union  类（含继承、命名空间、行号、访问级别、嵌套父类、typedef 别名）
  - function                成员函数 + 文件级自由函数（含签名、virtual/static、定义/声明、owner 类）
  - 变量                    成员变量 + 全局/extern/static 变量 + 枚举常量
  - #define                 宏（含值、行号，支持续行）
  - 附加                    枚举、typedef/using 别名（用于 MyFunc 等回调约定溯源）

用法:
  python cpp_analyzer.py --src E:\\github\\iwant\\src --modules object,class \\
      --json-out ai\\shards\\s01.json
可选:
  --offset N --limit M   仅分析模块内排序后的第 N 个文件起共 M 个（用于 instruction 拆分）
  --print-md             将每模块简化树直接打印到 stdout（调试用）

输出: 单个 JSON 文件，结构:
{
  "shard": "s01",
  "generated": "...",
  "src_root": "E:/github/iwant/src",
  "modules": {
     "object": {
        "files": { "object/object.h": { ...per-file record... } },
        "stats": { files, lines, classes, methods, free_functions, members, globals, defines, typedefs, enums, errors }
     }
  },
  "total_stats": {...}
}
"""
import argparse
import json
import os
import re
import sys
import datetime

SRC_EXTS = {'.cpp', '.h', '.hpp', '.c', '.cc', '.cxx', '.hxx'}

try:
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')
except Exception:
    pass


# ---------------------------------------------------------------- text utils

def read_text(path):
    with open(path, 'rb') as f:
        raw = f.read()
    for enc in ('utf-8-sig', 'utf-8', 'gb18030'):
        try:
            return raw.decode(enc)
        except UnicodeDecodeError:
            continue
    return raw.decode('latin-1', errors='replace')


def scrub(text):
    """单遍扫描：字符串/字符字面量内容 -> 空格（保留定界符与转义），
    // 与 /* */ 注释内容 -> 空格。保留全部换行与行长（行号/列号不漂移）。"""
    out = []
    i, n = 0, len(text)
    while i < n:
        c = text[i]
        if c == '"' or c == "'":
            q = c
            out.append(c)
            i += 1
            while i < n:
                ch = text[i]
                if ch == '\\':
                    out.append(ch)
                    i += 1
                    if i < n:
                        out.append(text[i])
                        i += 1
                    continue
                if ch == q:
                    out.append(ch)
                    i += 1
                    break
                out.append(' ')
                i += 1
            continue
        if c == '/' and i + 1 < n and text[i + 1] == '/':
            while i < n and text[i] != '\n':
                out.append(' ')
                i += 1
            continue
        if c == '/' and i + 1 < n and text[i + 1] == '*':
            out.append(' ')
            out.append(' ')
            i += 2
            while i < n:
                if text[i] == '*' and i + 1 < n and text[i + 1] == '/':
                    out.append(' ')
                    out.append(' ')
                    i += 2
                    break
                out.append('\n' if text[i] == '\n' else ' ')
                i += 1
            continue
        out.append(c)
        i += 1
    return ''.join(out)


def strip_value_trailing_comment(value):
    """字符串感知地去掉宏值末尾注释"""
    out = []
    i, n = 0, len(value)
    in_str = None
    while i < n:
        c = value[i]
        if in_str:
            out.append(c)
            if c == '\\':
                i += 1
                if i < n:
                    out.append(value[i])
                i += 1
                continue
            if c == in_str:
                in_str = None
            i += 1
            continue
        if c == '"' or c == "'":
            in_str = c
            out.append(c)
            i += 1
            continue
        if c == '/' and i + 1 < n and value[i + 1] == '/':
            break
        if c == '/' and i + 1 < n and value[i + 1] == '*':
            # 去掉 /* ... */ 块注释（值中出现罕见，直接截断）
            j = value.find('*/', i + 2)
            i = n if j == -1 else j + 2
            break
        out.append(c)
        i += 1
    return ''.join(out).strip()


def extract_defines(text):
    """从原始文本提取 #define 宏（支持 \\ 续行、注释剥离），返回 [{name, value, line}]"""
    defs = []
    lines = text.split('\n')
    i, n = 0, len(lines)
    while i < n:
        ls = lines[i].strip()
        m = re.match(r'#\s*define\s+([A-Za-z_]\w*)', ls)
        if m:
            name = m.group(1)
            rest = ls[m.end():]
            parts = []
            while True:
                cont = rest.rstrip().endswith('\\')
                r = rest.rstrip()
                if r.endswith('\\'):
                    r = r[:-1]
                parts.append(strip_value_trailing_comment(r))
                if not cont:
                    break
                i += 1
                if i >= n:
                    break
                rest = lines[i].strip()
            value = ' '.join(p for p in parts if p).strip()
            defs.append({'name': name, 'value': value, 'line': i + 1})
        i += 1
    return defs


def blank_preprocessor_lines(text):
    """将预处理行（#开头）内容替换为空格；处理 #if 0..#endif 与多行 #define \\ 续行"""
    lines = text.split('\n')
    out = []
    in_if0 = False
    i, n = 0, len(lines)
    while i < n:
        line = lines[i]
        stripped = line.strip()
        if in_if0:
            if re.match(r'#\s*endif\b', stripped):
                in_if0 = False
            out.append(' ' * len(line))
            i += 1
            continue
        if re.match(r'#\s*if\s*0\b', stripped):
            in_if0 = True
            out.append(' ' * len(line))
            i += 1
            continue
        if stripped.startswith('#'):
            if re.match(r'#\s*define\b', stripped) and line.rstrip().endswith('\\'):
                out.append(' ' * len(line))
                i += 1
                while i < n and lines[i].rstrip().endswith('\\'):
                    out.append(' ' * len(lines[i]))
                    i += 1
                if i < n:
                    out.append(' ' * len(lines[i]))
                    i += 1
                continue
            out.append(' ' * len(line))
            i += 1
            continue
        out.append(line)
        i += 1
    return '\n'.join(out)


# ---------------------------------------------------------------- tokenizer

SCOPE_OPEN_RE = re.compile(
    r'^\s*(?P<tmpl>template\s*<.*?>\s*)?'
    r'(?P<kw>namespace|class|struct|union|enum)\b'
)

TYPEDEF_SCOPE_RE = re.compile(
    r'^\s*typedef\s+(?P<kind>enum|struct|union|class)\s+'
    r'(?P<name>[A-Za-z_]\w*)?'
)

CLASS_RE = re.compile(
    r'^\s*(?P<tmpl>template\s*<.*?>\s*)?'
    r'(?P<kind>class|struct|union)\s+'
    r'(?P<name>[A-Za-z_]\w*)\s*'
    r'(?P<final>final\s*)?'
    r'(?::\s*(?P<bases>.*?))?\s*$'
)

ENUM_RE = re.compile(
    r'^\s*(?P<tmpl>template\s*<.*?>\s*)?'
    r'enum\s+(?P<cls>class\s+)?(?P<name>[A-Za-z_]\w*)?'
    r'(?:\s*:\s*(?P<under>[\w:]+))?\s*$'
)

NAMESPACE_RE = re.compile(r'^\s*(?:inline\s+)?namespace\s+(?P<name>[A-Za-z_][\w:]*)')
EXTERN_C_RE = re.compile(r'^\s*extern\s*"C"\s*$')


def has_assignment(text):
    """判断文本中是否存在真正的赋值 '='（排除 == != <= >= += -= *= /= %= &= |= ^= <<= >>=）"""
    for m in re.finditer(r'=', text):
        i = m.start()
        prev = text[i - 1] if i > 0 else ''
        nxt = text[i + 1] if i + 1 < len(text) else ''
        if prev in '=!<>+-*/%&|^':
            continue
        if nxt == '=':
            continue
        return True
    return False


def tokenize(masked):
    """状态机切分逻辑语句。产出 token 列表:
        ('stmt', line, text)  普通语句（; 结尾）
        ('open', line, text)  作用域开启（namespace/class/struct/union/enum/typedef 作用域）
        ('close', line)       作用域关闭 }
        ('func', line, sig, body_text, body_line)  函数定义（{ 后函数体文本已捕获，body_line 为 { 所在行）
    """
    toks = []
    i, n = 0, len(masked)
    line = 1
    cur = []
    cur_line = 1
    paren = 0
    mode = 'normal'       # normal | func_skip | init_skip
    skip_brace = 0        # func_skip / init_skip 的括号深度
    scope_brace = 0       # normal 模式下打开的作用域括号深度
    has_paren = False
    eq_before_paren = False
    in_funcptr = False
    pending_func = None   # (token_idx, body_start_offset, brace_line)

    def cur_text():
        return ''.join(cur).strip()

    def reset_start():
        nonlocal cur_line
        if not ''.join(cur).strip():
            cur_line = line

    while i < n:
        ch = masked[i]
        if ch == '\n':
            line += 1
        if mode == 'func_skip':
            if ch == '{':
                skip_brace += 1
            elif ch == '}':
                skip_brace -= 1
                if skip_brace == 0:
                    mode = 'normal'
                    if pending_func is not None:
                        idx, bs, bl = pending_func
                        toks[idx] = (toks[idx][0], toks[idx][1], toks[idx][2],
                                     masked[bs:i], bl)
                        pending_func = None
            i += 1
            continue
        if mode == 'init_skip':
            if ch == '{':
                skip_brace += 1
            elif ch == '}':
                skip_brace -= 1
                if skip_brace == 0:
                    mode = 'normal'
            i += 1
            continue

        # mode == normal
        if ch == '(':
            if not has_paren:
                ctxt = ''.join(cur)
                if has_assignment(ctxt) and not re.search(r'\boperator\b', ctxt):
                    eq_before_paren = True
                if i + 1 < n and masked[i + 1] == '*':
                    in_funcptr = True
            has_paren = True
            paren += 1
            cur.append(ch)
        elif ch == ')':
            paren -= 1
            if paren < 0:
                paren = 0
            cur.append(ch)
        elif ch == ';' and paren == 0:
            t = cur_text()
            if t:
                toks.append(('stmt', cur_line, t))
            cur = []
            has_paren = False
            eq_before_paren = False
            in_funcptr = False
            reset_start()
        elif ch == '{' and paren == 0:
            t = cur_text()
            if t and SCOPE_OPEN_RE.match(t):
                toks.append(('open', cur_line, t))
                scope_brace += 1
                cur = []
                has_paren = False
                eq_before_paren = False
                in_funcptr = False
                reset_start()
            elif t and TYPEDEF_SCOPE_RE.match(t):
                toks.append(('open', cur_line, t))
                scope_brace += 1
                cur = []
                has_paren = False
                eq_before_paren = False
                in_funcptr = False
                reset_start()
            elif t and has_paren and not eq_before_paren and not in_funcptr:
                toks.append(('func', cur_line, t))
                pending_func = (len(toks) - 1, i + 1, line)
                mode = 'func_skip'
                skip_brace = 1
                cur = []
                has_paren = False
                eq_before_paren = False
                in_funcptr = False
                reset_start()
            else:
                mode = 'init_skip'
                skip_brace = 1
        elif ch == '}' and paren == 0:
            t = cur_text()
            if t:
                toks.append(('stmt', cur_line, t))
            toks.append(('close', line, ''))
            cur = []
            has_paren = False
            eq_before_paren = False
            in_funcptr = False
            if scope_brace > 0:
                scope_brace -= 1
            reset_start()
        else:
            if ch not in ' \t':
                reset_start()
            cur.append(ch)
        i += 1
    if pending_func is not None:
        idx, bs, bl = pending_func
        toks[idx] = (toks[idx][0], toks[idx][1], toks[idx][2], masked[bs:], bl)
    t = cur_text()
    if t:
        toks.append(('stmt', cur_line, t))
    return toks


# ---------------------------------------------------------------- classification

def split_top_level(s, seps=','):
    parts = []
    cur = []
    depth = 0
    for ch in s:
        if ch in '<([':
            depth += 1
        elif ch in '>)]':
            depth -= 1
            if depth < 0:
                depth = 0
        if ch in seps and depth == 0:
            parts.append(''.join(cur))
            cur = []
        else:
            cur.append(ch)
    if cur:
        parts.append(''.join(cur))
    return parts


def parse_bases(s):
    out = []
    for b in split_top_level(s or ''):
        b = b.strip()
        b = re.sub(r'^(public|protected|private|virtual)\s+', '', b)
        b = re.sub(r'\s*(public|protected|private|virtual)\s*$', '', b)
        b = b.strip()
        if b:
            out.append(b)
    return out


def func_name(head):
    m = re.search(r'::~\s*([A-Za-z_]\w*)\s*\(', head)
    if m:
        return '~' + m.group(1)
    m = re.search(r'\boperator\s*(\S*?)\s*\(', head)
    if m:
        op = m.group(1).strip()
        return 'operator ' + (op if op else '()')
    m = re.search(r'([A-Za-z_]\w*)\s*\(', head)
    if m:
        matches = list(re.finditer(r'([A-Za-z_]\w*)\s*\(', head))
        return matches[-1].group(1)
    return '?'


def is_funcptr(s):
    return bool(re.search(r'\(\s*\*\s*[A-Za-z_]\w*\s*\)\s*\(', s)) or \
           bool(re.search(r'\(\s*&?\s*[A-Za-z_]\w*\s*\)\s*\(', s))


def parse_var_decl(decl):
    """解析 '类型 名字[=init]' 或 '类型 a, b' 或 '类型 a, *b'，返回 [{name, type}]"""
    d = decl.strip()
    d = re.sub(r'^(static|const|constexpr|volatile|mutable|register|extern|inline|unsigned|signed)\s+', '', d)
    parts = split_top_level(d)
    vars_ = []
    first_type = None
    for idx, p in enumerate(parts):
        p = p.strip()
        if not p:
            continue
        if idx > 0:
            p = re.sub(r'^[*&]+', '', p).strip()
        fp = re.search(r'\(\s*\*\s*([A-Za-z_]\w*)\s*\)', p)
        if fp and '(' in p and ')' in p:
            name = fp.group(1)
            type_ = p[:fp.start()].strip()
            vars_.append({'name': name, 'type': type_})
            if first_type is None:
                first_type = type_
            continue
        p0 = p
        eq = p0.find('=')
        if eq != -1:
            p0 = p0[:eq]
        p0 = p0.strip()
        m = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])*$', p0)
        if not m:
            continue
        name = m.group(1)
        type_ = p0[:m.start()].strip()
        if not type_ and first_type:
            type_ = first_type
        if first_type is None and type_:
            first_type = type_
        vars_.append({'name': name, 'type': type_})
    return vars_


def enum_entries(s):
    out = []
    for part in split_top_level(s):
        part = part.strip()
        if not part:
            continue
        m = re.match(r'([A-Za-z_]\w*)\s*(?:=\s*(.*))?$', part, re.S)
        if m:
            out.append({'name': m.group(1), 'value': (m.group(2) or '').strip()})
    return out


def owner_of(s):
    """从函数签名中提取类限定名（取最后一个 Class::method( 匹配，避免返回类型误判）"""
    matches = list(re.finditer(r'([A-Za-z_]\w*(?:::\w+)*)::(~?[A-Za-z_]\w*)\s*\(', s))
    if matches:
        return matches[-1].group(1)
    return None


# ---------------------------------------------------------------- call extraction

CALL_KEYWORDS = set('''if for while switch do return sizeof delete new catch throw
    static_cast dynamic_cast const_cast reinterpret_cast alignof alignas typeid
    decltype noexcept assert requires concept co_await co_yield co_return'''.split())

TYPE_KEYWORDS = set('''int char float double void bool long short unsigned signed
    const volatile auto register struct union enum class wchar_t int8_t int16_t
    int32_t int64_t uint8_t uint16_t uint32_t uint64_t size_t ssize_t time_t clock_t'''.split())

_CALL_RE = None


def _call_re():
    global _CALL_RE
    if _CALL_RE is None:
        _CALL_RE = re.compile(
            r'(?:(?P<qual>[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)\s*::\s*|'
            r'(?P<recv>[A-Za-z_]\w*)\s*(?:->|\.)\s*)?'
            r'(?P<name>[A-Za-z_]\w*)\s*\('
        )
    return _CALL_RE


def extract_calls(body, base_line):
    """从函数体（已掩码文本）提取调用点。
    返回 [{name, recv, qual, line, kind}]，kind: call|indirect|paren"""
    calls = []
    if not body:
        return calls
    nl = [i for i, ch in enumerate(body) if ch == '\n']
    import bisect

    def ln(off):
        return base_line + bisect.bisect_left(nl, off)

    # 函数指针调用 (*p)( ... ) / (*this->p)( ... )
    for m in re.finditer(r'\(\s*\*\s*([A-Za-z_]\w*)\s*\)\s*\(', body):
        calls.append({'name': m.group(1), 'recv': None, 'qual': None,
                      'line': ln(m.start()), 'kind': 'indirect'})
    # (p)( ... ) 形式 —— 可能是函数指针调用或类型转换，交由解析层用类型判定
    for m in re.finditer(r'\(\s*([A-Za-z_]\w*)\s*\)\s*\(', body):
        calls.append({'name': m.group(1), 'recv': None, 'qual': None,
                      'line': ln(m.start()), 'kind': 'paren'})
    # 常规调用：qual::name( / recv->name( / recv.name( / name(
    for m in _call_re().finditer(body):
        name = m.group('name')
        if name in CALL_KEYWORDS or name in TYPE_KEYWORDS:
            continue
        calls.append({'name': name,
                      'recv': m.group('recv'),
                      'qual': m.group('qual'),
                      'line': ln(m.start()),
                      'kind': 'call'})
    return calls


# ---------------------------------------------------------------- walker

def parse_file(abs_path, rel_path):
    try:
        text = read_text(abs_path)
    except Exception as e:
        return {'file': rel_path, 'lines': 0, 'parse_error': 'read: %s' % e,
                'classes': [], 'functions': [], 'globals': [], 'defines': [],
                'typedefs': [], 'enums': [], 'calls': []}
    defines = extract_defines(text)
    scrubbed = scrub(text)
    masked = blank_preprocessor_lines(scrubbed)
    toks = tokenize(masked)

    rec = {
        'file': rel_path,
        'lines': text.count('\n') + 1,
        'classes': [],
        'functions': [],
        'globals': [],
        'defines': defines,
        'typedefs': [],
        'enums': [],
        'calls': [],
        'parse_error': None,
    }

    stack = [{'kind': 'file', 'name': '', 'line': 0, 'access': 'public'}]
    pending_typedef = None  # ('kind', name, record_ref) 等待 } 后别名

    def ns_of():
        return '::'.join(c['name'] for c in stack if c['kind'] in ('namespace', 'extern'))

    def class_in_stack():
        for c in reversed(stack):
            if c['kind'] in ('class', 'struct', 'union'):
                return c
        return None

    def add_method(cls, name, sig, line, access, defined):
        sig = re.sub(r'\s+', ' ', sig).strip()
        cls['methods'].append({
            'name': name, 'sig': sig, 'line': line, 'access': access,
            'virtual': bool(re.search(r'\bvirtual\b', sig)),
            'static': bool(re.search(r'\bstatic\b', sig)),
            'defined': defined,
        })

    for tok in toks:
        kind = tok[0]
        if kind == 'close':
            if len(stack) > 1:
                stack.pop()
            if pending_typedef is not None:
                # 期待下一个语句给出 typedef 别名
                pending_typedef['waiting'] = True
            continue
        line = tok[1]
        s = tok[2]
        ctx = stack[-1]

        if kind == 'open':
            m = NAMESPACE_RE.match(s)
            if m:
                stack.append({'kind': 'namespace', 'name': m.group('name'), 'line': line, 'access': 'public'})
                continue
            m = EXTERN_C_RE.match(s)
            if m:
                stack.append({'kind': 'extern', 'name': 'extern"C"', 'line': line, 'access': 'public'})
                continue
            m = TYPEDEF_SCOPE_RE.match(s)
            if m:
                tkind = m.group('kind')
                tname = m.group('name') or '(anonymous)'
                if tkind == 'enum':
                    en = {
                        'name': tname, 'line': line, 'namespace': ns_of(),
                        'parent': ctx['name'] if ctx['kind'] in ('class', 'struct', 'union') else None,
                        'class_enum': False, 'underlying': '', 'values': [],
                        'typedef_alias': None,
                    }
                    rec['enums'].append(en)
                    stack.append({'kind': 'enum', 'name': tname, 'line': line,
                                  'access': 'public', 'record': en})
                    pending_typedef = {'record': en, 'waiting': False}
                else:
                    cls = {
                        'name': tname, 'kind': tkind, 'base': [],
                        'namespace': ns_of(),
                        'parent': ctx['name'] if ctx['kind'] in ('class', 'struct', 'union') else None,
                        'line': line, 'template': False,
                        'methods': [], 'members': [], 'access': 'public',
                        'typedef_alias': None,
                    }
                    rec['classes'].append(cls)
                    stack.append({'kind': tkind, 'name': tname, 'line': line, 'access': 'public'})
                    pending_typedef = {'record': cls, 'waiting': False}
                continue
            m = CLASS_RE.match(s)
            if m:
                name = m.group('name')
                bases = parse_bases(m.group('bases')) if m.group('bases') else []
                cls = {
                    'name': name,
                    'kind': m.group('kind'),
                    'base': bases,
                    'namespace': ns_of(),
                    'parent': ctx['name'] if ctx['kind'] in ('class', 'struct', 'union') else None,
                    'line': line,
                    'template': bool(m.group('tmpl')),
                    'methods': [],
                    'members': [],
                    'access': 'public',
                }
                rec['classes'].append(cls)
                stack.append({'kind': m.group('kind'), 'name': name, 'line': line, 'access': 'public'})
                continue
            m = ENUM_RE.match(s)
            if m:
                ename = m.group('name') or '(anonymous)'
                en = {
                    'name': ename,
                    'line': line,
                    'namespace': ns_of(),
                    'parent': ctx['name'] if ctx['kind'] in ('class', 'struct', 'union') else None,
                    'class_enum': bool(m.group('cls')),
                    'underlying': m.group('under') or '',
                    'values': [],
                }
                rec['enums'].append(en)
                stack.append({'kind': 'enum', 'name': ename, 'line': line, 'access': 'public', 'record': en})
                continue
            stack.append({'kind': 'blob', 'name': '', 'line': line, 'access': 'public'})
            continue

        # stmt / func
        if kind == 'func':
            name = func_name(s)
            if s.lstrip().startswith('~'):
                m0 = re.search(r'([A-Za-z_]\w*)\s*\(', s)
                name = '~' + (m0.group(1) if m0 else '')
            body_text = tok[3] if len(tok) > 3 else None
            body_line = tok[4] if len(tok) > 4 else line
            items = extract_calls(body_text, body_line) if body_text else []
            if ctx['kind'] in ('class', 'struct', 'union'):
                cls = rec['classes'][-1] if rec['classes'] else None
                if cls is not None:
                    add_method(cls, name, s, line, ctx['access'], True)
                    if items:
                        rec['calls'].append({
                            'class': cls['name'], 'name': name, 'owner': None,
                            'ns': ns_of(), 'sig': re.sub(r'\s+', ' ', s).strip(),
                            'line': line, 'items': items,
                        })
            else:
                owner = owner_of(s)
                rec['functions'].append({
                    'name': name, 'sig': re.sub(r'\s+', ' ', s).strip(), 'line': line,
                    'namespace': ns_of(), 'static': bool(re.search(r'\bstatic\b', s)),
                    'defined': True, 'owner': owner,
                })
                if owner:
                    for c in rec['classes']:
                        if c['name'] == owner and c['namespace'] == ns_of():
                            add_method(c, name, s, line, 'public', True)
                            break
                if items:
                    rec['calls'].append({
                        'class': None, 'name': name, 'owner': owner,
                        'ns': ns_of(), 'sig': re.sub(r'\s+', ' ', s).strip(),
                        'line': line, 'items': items,
                    })
            continue

        # stmt
        if not s or s in (';', '}', '{'):
            continue
        if ctx['kind'] == 'enum':
            ctx['record']['values'].extend(enum_entries(s))
            continue
        m_acc = re.match(r'^(public|private|protected)\s*:(.*)$', s, re.S)
        if m_acc:
            ctx['access'] = m_acc.group(1).strip()
            s = m_acc.group(2).strip()
            if not s:
                continue
            # 访问限定符同行还带语句（如 "public: int x;"）时，继续对剩余部分分类
        if pending_typedef is not None and pending_typedef.get('waiting'):
            # 类/枚举关闭后的别名语句，如 '} Cvelocity;'
            if re.match(r'^[A-Za-z_]\w*\s*;?$', s):
                rec_t = pending_typedef['record']
                rec_t['typedef_alias'] = s.rstrip(';').strip()
                rec['typedefs'].append({
                    'text': 'typedef %s %s;' % (rec_t.get('kind', 'enum'), rec_t['typedef_alias']),
                    'line': line, 'namespace': ns_of(), 'scope': '',
                })
                pending_typedef = None
                continue
            pending_typedef = None
        if s.startswith('using '):
            if re.match(r'^using\s+\w+\s*=\s*', s):
                rec['typedefs'].append({
                    'text': re.sub(r'\s+', ' ', s).strip(), 'line': line,
                    'namespace': ns_of(),
                    'scope': ctx['name'] if ctx['kind'] in ('class', 'struct', 'union') else '',
                })
            continue  # 跳过 using std::X; using namespace X;
        if s.startswith(('typedef ', 'friend ')):
            if s.startswith('typedef '):
                rec['typedefs'].append({
                    'text': re.sub(r'\s+', ' ', s).strip(), 'line': line,
                    'namespace': ns_of(),
                    'scope': ctx['name'] if ctx['kind'] in ('class', 'struct', 'union') else '',
                })
            continue
        if s.startswith(('template ', 'namespace ', '#', 'extern "C"')):
            continue
        if ctx['kind'] in ('class', 'struct', 'union'):
            cls = rec['classes'][-1] if rec['classes'] else None
            if cls is None:
                continue
            prefix = s[:s.index('(')] if '(' in s else s
            if '(' in s and not is_funcptr(s) and ('operator' in prefix or not has_assignment(prefix)):
                add_method(cls, func_name(s), s, line, ctx['access'], False)
            else:
                for v in parse_var_decl(s):
                    cls['members'].append({'name': v['name'], 'type': v['type'],
                                           'line': line, 'access': ctx['access']})
        else:
            prefix = s[:s.index('(')] if '(' in s else s
            if '(' in s and not is_funcptr(s) and ('operator' in prefix or not has_assignment(prefix)):
                owner = owner_of(s)
                rec['functions'].append({
                    'name': func_name(s), 'sig': re.sub(r'\s+', ' ', s).strip(), 'line': line,
                    'namespace': ns_of(), 'static': bool(re.search(r'\bstatic\b', s)),
                    'defined': False, 'owner': owner,
                })
                if owner:
                    for c in rec['classes']:
                        if c['name'] == owner and c['namespace'] == ns_of():
                            add_method(c, func_name(s), s, line, 'public', False)
                            break
            else:
                ext = bool(re.match(r'^extern\b', s))
                st = bool(re.match(r'^static\b', s))
                for v in parse_var_decl(s):
                    rec['globals'].append({'name': v['name'], 'type': v['type'],
                                           'line': line, 'extern': ext, 'static': st,
                                           'namespace': ns_of()})
    return rec


# ---------------------------------------------------------------- module scan

def collect_files(src_root, module, offset, limit):
    mdir = os.path.join(src_root, module)
    if not os.path.isdir(mdir):
        return []
    files = []
    for root, dirs, names in os.walk(mdir):
        for nm in names:
            if os.path.splitext(nm)[1].lower() in SRC_EXTS:
                full = os.path.join(root, nm)
                rel = os.path.relpath(full, src_root).replace('\\', '/')
                files.append((rel, full))
    files.sort(key=lambda x: x[0])
    if offset is not None:
        files = files[offset:]
    if limit is not None:
        files = files[:limit]
    return files


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', required=True)
    ap.add_argument('--modules', required=True)
    ap.add_argument('--json-out', required=True)
    ap.add_argument('--offset', type=int, default=None)
    ap.add_argument('--limit', type=int, default=None)
    ap.add_argument('--print-md', action='store_true')
    args = ap.parse_args()

    src_root = args.src.rstrip('\\/')
    modules = [m.strip() for m in args.modules.split(',') if m.strip()]
    result = {
        'shard': os.path.splitext(os.path.basename(args.json_out))[0],
        'generated': datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
        'src_root': src_root.replace('\\', '/'),
        'modules': {},
        'total_stats': {},
    }
    totals = {}

    def add_stat(t, k, v):
        t[k] = t.get(k, 0) + v

    for module in modules:
        files = collect_files(src_root, module, args.offset, args.limit)
        mrec = {'files': {}, 'stats': {}}
        mstats = mrec['stats']
        for rel, full in files:
            r = parse_file(full, rel)
            mrec['files'][rel] = r
            add_stat(mstats, 'files', 1)
            add_stat(mstats, 'lines', r['lines'])
            add_stat(mstats, 'classes', len(r['classes']))
            add_stat(mstats, 'methods', sum(len(c['methods']) for c in r['classes']))
            add_stat(mstats, 'free_functions', len(r['functions']))
            add_stat(mstats, 'members', sum(len(c['members']) for c in r['classes']))
            add_stat(mstats, 'globals', len(r['globals']))
            add_stat(mstats, 'defines', len(r['defines']))
            add_stat(mstats, 'typedefs', len(r['typedefs']))
            add_stat(mstats, 'enums', len(r['enums']))
            add_stat(mstats, 'calls', sum(len(c['items']) for c in r['calls']))
            if r['parse_error']:
                add_stat(mstats, 'errors', 1)
        result['modules'][module] = mrec
        for k, v in mstats.items():
            add_stat(totals, k, v)
        print('[%s] files=%d lines=%d classes=%d methods=%d free_funcs=%d members=%d globals=%d defines=%d typedefs=%d enums=%d calls=%d errors=%d'
              % (module, mstats.get('files', 0), mstats.get('lines', 0), mstats.get('classes', 0),
                 mstats.get('methods', 0), mstats.get('free_functions', 0), mstats.get('members', 0),
                 mstats.get('globals', 0), mstats.get('defines', 0), mstats.get('typedefs', 0),
                 mstats.get('enums', 0), mstats.get('calls', 0), mstats.get('errors', 0)))

    result['total_stats'] = totals
    os.makedirs(os.path.dirname(os.path.abspath(args.json_out)), exist_ok=True)
    with open(args.json_out, 'w', encoding='utf-8') as f:
        json.dump(result, f, ensure_ascii=False, indent=1)

    if args.print_md:
        for module, mrec in result['modules'].items():
            print('\n===== module: %s =====' % module)
            for rel in sorted(mrec['files']):
                r = mrec['files'][rel]
                print('-- %s (%d lines)' % (rel, r['lines']))
                for d in r['defines']:
                    print('   #define %s = %s' % (d['name'], d['value'][:60]))
                for en in r['enums']:
                    print('   enum %s (%d vals) alias=%s' % (en['name'], len(en['values']), en.get('typedef_alias')))
                for c in r['classes']:
                    print('   class %s : %s  L%d  (methods=%d members=%d) alias=%s'
                          % (c['name'], ','.join(c['base']) or '-', c['line'],
                             len(c['methods']), len(c['members']), c.get('typedef_alias')))
                for fn in r['functions']:
                    print('   fn %s L%d owner=%s' % (fn['name'], fn['line'], fn.get('owner')))
                for g in r['globals']:
                    print('   var %s : %s L%d' % (g['name'], g['type'], g['line']))

    print('TOTAL %s' % json.dumps(totals, ensure_ascii=False))


if __name__ == '__main__':
    main()
