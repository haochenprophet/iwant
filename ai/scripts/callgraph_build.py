#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""callgraph_build.py — 全项目函数调用关系构建（数据层 + 可读层）
输入: ai/callgraph/raw/s*.json （扩展解析器输出，含每文件 calls 列表）
输出: ai/callgraph/
    functions.json        函数节点注册表（方法声明/定义合并、owner 归并、重载合并）
    edges.json            解析成功的调用边（含类型：this/cross_class/free/operator/macro/indirect/recursive）
    unresolved.json       未解析调用（unresolved/external/indirect 明细，可审计）
    stats.json            全局+每模块统计、跨模块矩阵、枢纽 TOP
    modules/<mod>.json    每模块函数+边（供可视化局部图）
    modules-md/<mod>.md   每模块可读表格
    report.md             可读层总报告
用法:
    python callgraph_build.py [--raw-dir DIR] [--out DIR] [--shards s01.json s02.json ...]
默认 raw-dir 下 s*.json 全量处理。
"""
import argparse
import bisect
import io
import json
import os
import re
import sys
from collections import Counter, defaultdict

RAW_DIR = r'E:\github\iwant\ai\callgraph\raw'
OUT_DIR = r'E:\github\iwant\ai\callgraph'

TYPE_KEYWORDS = set('''int char float double void bool long short unsigned signed
    const volatile auto register struct union enum class wchar_t int8_t int16_t
    int32_t int64_t uint8_t uint16_t uint32_t uint64_t size_t ssize_t time_t clock_t
    uintptr_t intptr_t ptrdiff_t wint_t pid_t off_t mode_t'''.split())

FUNCLIKE_RE = re.compile(r'^\(\s*[\w,\s*&]+\)')
CALL_KEYWORDS = set('''if for while switch do return sizeof delete new catch throw
    static_cast dynamic_cast const_cast reinterpret_cast alignof alignas typeid
    decltype noexcept assert requires concept'''.split())

LIBC_NAMES = set('''printf sprintf fprintf snprintf vsnprintf vprintf vfprintf sscanf
    scanf puts putchar getchar gets fputs fgets getc putc ungetc perror
    strlen strcmp strncmp strcpy strncpy strcat strncat strstr strchr strrchr strtok
    strtol strtoll strtoul strtoull atoi atol atoll atof strtof strtod strspn strcspn
    memcpy memset memcmp memmove memchr malloc calloc realloc free alloca
    fopen fopen_s fclose fread fwrite fflush fseek ftell rewind feof ferror fgetc fputc
    exit abort atexit qsort bsearch rand srand time clock localtime localtime_s gmtime
    mktime difftime strftime asctime ctime sleep usleep system getenv setenv putenv
    isprint isspace isdigit isalpha isalnum isupper islower iscntrl ispunct isxdigit
    toupper tolower isgraph isblank iswprint iswspace iswdigit iswalpha
    va_start va_end va_arg va_copy _tprintf _stprintf _snprintf _vsnprintf _strtoui64
    wcslen wcscpy wcscmp wcscat wcsstr wcschr wsprintf wsprintfW wsprintfA wprintf
    sprintf_s sscanf_s printf_s strcpy_s strcat_s strncpy_s memcpy_s memset_s
    strerror errno setjmp longjmp signal raise abs labs llabs div ldiv
    sqrt sqrtf sqrtl pow powf powl sin cos tan exp log log10 floor ceil fabs fmod
    rand_r strdup strndup asprintf strcasecmp strncasecmp strverscmp getline
    iopl outb inb inl outl insb insw insl outsw outsl ioperm
    trunc truncf truncl clearerr vfscanf vscanf vsprintf vsscanf
    _Exit at_quick_exit _tcslen _tcsicmp _tcsncmp _tcsnicmp _tcscpy _tcscat _tcsstr
    _stricmp _strnicmp _strupr _strlwr _chdir _mkdir _rmdir _getcwd _chmod _access
    mysql_init mysql_close mysql_query mysql_real_query mysql_store_result
    mysql_num_fields mysql_fetch_row mysql_free_result mysql_error mysql_connect
    mysql_select_db mysql_ping mysql_num_rows mysql_fetch_field mysql_field_count
    mysql_affected_rows mysql_escape_string mysql_real_escape_string mysql_insert_id
    open close read write lseek stat fstat access chmod chdir getcwd mkdir rmdir unlink
    remove rename tmpfile tmpnam socket bind listen accept connect send recv htons htonl
    ntohs ntohl inet_addr inet_ntoa gethostbyname getaddrinfo freeaddrinfo closesocket
    WSAStartup WSACleanup shutdown select ioctlsocket setsockopt getsockopt
    CreateThread CloseHandle GetCurrentThreadId ExitThread SetEvent WaitForSingleObject
    CreateMutex OpenMutex ReleaseMutex CreateEvent OpenEvent Sleep SetConsoleOutputCP
    GetConsoleOutputCP SetConsoleTitle GetTickCount GetTickCount64 QueryPerformanceCounter
    TEXT _T UNICODE_STRING RtlCopyMemory RtlZeroMemory zeroMemory ZeroMemory
    assert static_assert __assert_fail printf_c printf_f stdout stderr stdin'''.split())

def load_json(p):
    with io.open(p, 'r', encoding='utf-8-sig') as f:
        return json.load(f)


def save_json(obj, p):
    with io.open(p, 'w', encoding='utf-8') as f:
        json.dump(obj, f, ensure_ascii=False, separators=(',', ':'))
    return p


def norm_sig(s):
    return re.sub(r'\s+', ' ', s).strip()


# ---------------------------------------------------------------- 类型与签名解析

def class_of_type(t):
    """从 C++ 类型串提取类名（去 const/引用/指针/模板/命名空间前缀）；非类名返回 None"""
    if not t:
        return None
    s = re.sub(r'\b(const|volatile|static|register|inline|unsigned|signed|long|short)\b', ' ', t)
    s = s.replace('&', ' ').replace('*', ' ')
    s = re.split(r'<', s, maxsplit=1)[0]
    s = re.sub(r'\b(?:std|n_\w+)\s*::\s*', ' ', s)
    m = re.findall(r'[A-Za-z_]\w*', s)
    if not m:
        return None
    name = m[-1]
    if name in TYPE_KEYWORDS or name in ('nullptr', 'true', 'false', 'this'):
        return None
    return name


def split_top(s, sep):
    """按顶层分隔符切分（考虑 ()<>[] 嵌套）"""
    parts = []
    depth = 0
    cur = []
    for ch in s:
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        if ch == sep and depth == 0:
            parts.append(''.join(cur))
            cur = []
        else:
            cur.append(ch)
    if ''.join(cur).strip():
        parts.append(''.join(cur))
    return parts


def parse_params(sig):
    """从函数签名提取 参数名 -> 类型串 映射"""
    i = sig.find('(')
    if i < 0:
        return {}
    depth = 0
    end = None
    for j in range(i, len(sig)):
        c = sig[j]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                end = j
                break
    if end is None:
        return {}
    inner = sig[i + 1:end]
    if inner.strip() in ('', 'void'):
        return {}
    params = {}
    for p in split_top(inner, ','):
        p = p.strip()
        if not p or p.startswith('...'):
            continue
        eq = split_top(p, '=')
        decl = eq[0].strip()
        m = re.findall(r'[A-Za-z_]\w*', decl)
        if not m:
            continue
        pname = m[-1]
        if pname in TYPE_KEYWORDS:
            continue
        ptype = decl[:decl.rfind(pname)].strip()
        params[pname] = ptype
    return params


def is_funcptr_type(t):
    if not t:
        return False
    return 'MyFunc' in t or '(' in t or '*' in t and 'void*' in t


# ---------------------------------------------------------------- 索引构建

class Index(object):
    def __init__(self):
        self.classes = {}          # (module, name) -> cls
        self.class_by_name = defaultdict(list)   # name -> [(module, ns)]
        self.typedefs = set()
        self.macros = {}           # (module, name) -> value
        self.globals = defaultdict(dict)         # module -> {name: type}
        self.enums = set()


def build_index(raw_modules):
    idx = Index()
    for module, mrec in raw_modules.items():
        for f, rec in mrec.get('files', {}).items():
            for cls in rec.get('classes', []):
                key = (module, cls['name'])
                if key in idx.classes:
                    continue
                idx.classes[key] = {
                    'namespace': cls.get('namespace', ''),
                    'file': f,
                    'line': cls.get('line'),
                    'base': cls.get('base', []),
                    'methods': cls.get('methods', []),
                    'members': cls.get('members', []),
                }
                idx.class_by_name[cls['name']].append((module, cls['name']))
            for td in rec.get('typedefs', []):
                n = td.get('name') or td.get('alias') or ''
                if n:
                    idx.typedefs.add(n)
            for e in rec.get('enums', []):
                idx.enums.add(e.get('name', ''))
            for d in rec.get('defines', []):
                idx.macros[(module, d['name'])] = d.get('value', '')
            for g in rec.get('globals', []):
                if g.get('name') and not g.get('static'):
                    idx.globals[module][g['name']] = g.get('type', '')
    return idx


def resolve_class_key(idx, module, clsname):
    """(module, clsname) 定位：先模块内，再全局唯一"""
    key = (module, clsname)
    if key in idx.classes:
        return key
    cands = idx.class_by_name.get(clsname, [])
    if len(cands) == 1:
        return cands[0]
    return None


def ancestors_of(idx, module, clsname):
    """传递基类链，返回 [(module, base), ...] 不含自身"""
    out = []
    seen = set()

    def walk(m, c):
        key = resolve_class_key(idx, m, c)
        if key is None or key in seen:
            return
        seen.add(key)
        out.append(key)
        for b in idx.classes[key]['base']:
            walk(key[0], b)

    walk(module, clsname)
    return out[1:] if out and out[0] == resolve_class_key(idx, module, clsname) else out


def find_method(idx, module, clsname, name):
    """在类及其基类中查找方法（自身优先，模拟虚派生的静态近似）。
    返回 (module, clsname) 或 None"""
    root = resolve_class_key(idx, module, clsname)
    order = [root] if root else []
    order += ancestors_of(idx, module, clsname)
    for key in order:
        if key is None:
            continue
        for m in idx.classes[key]['methods']:
            if m['name'] == name:
                return key
    return None


# ---------------------------------------------------------------- 节点构建

def method_node_key(module, clsname, name):
    return 'M|%s|%s|%s' % (module, clsname, name)


def build_nodes(idx, raw_modules):
    nodes = {}

    # 1) 类方法节点（声明侧，重载合并）
    for (module, clsname), cls in idx.classes.items():
        byname = {}
        for m in cls['methods']:
            e = byname.setdefault(m['name'], {
                'name': m['name'], 'sigs': [], 'overloads': 0, 'defined': False,
            })
            e['sigs'].append(norm_sig(m['sig']))
            e['overloads'] += 1
            if m.get('defined'):
                e['defined'] = True
        for name, e in byname.items():
            nid = method_node_key(module, clsname, name)
            kind = 'method'
            if name.startswith('~'):
                kind = 'dtor'
            elif name == clsname:
                kind = 'ctor'
            elif name.startswith('operator'):
                kind = 'operator'
            nodes[nid] = {
                'id': nid, 'name': name, 'class': clsname, 'module': module,
                'namespace': cls['namespace'], 'file': cls['file'], 'line': cls['line'],
                'kind': kind, 'sigs': e['sigs'], 'overloads': e['overloads'],
                'defined': e['defined'], 'file_def': None, 'line_def': None,
                'readable': '%s::%s' % (clsname, name),
            }

    # 2) owner 类限定定义 -> 归并到方法节点（补充定义位置）；无 owner 的自由函数 -> 独立节点
    for module, mrec in raw_modules.items():
        for f, rec in mrec.get('files', {}).items():
            for fn in rec.get('functions', []):
                if fn.get('owner'):
                    owner = fn['owner'].split('::')[-1]
                    key = resolve_class_key(idx, module, owner)
                    if key is not None:
                        nid = method_node_key(key[0], key[1], fn['name'])
                        if nid in nodes:
                            nodes[nid]['defined'] = True
                            nodes[nid]['file_def'] = f
                            nodes[nid]['line_def'] = fn['line']
                            if norm_sig(fn['sig']) not in nodes[nid]['sigs']:
                                nodes[nid]['sigs'].append(norm_sig(fn['sig']))
                                nodes[nid]['overloads'] += 1
                        else:
                            # 方法仅在 .cpp 中定义（如隐式析构），为其创建节点
                            name = fn['name']
                            kind = 'method'
                            if name.startswith('~'):
                                kind = 'dtor'
                            elif name == key[1]:
                                kind = 'ctor'
                            elif name.startswith('operator'):
                                kind = 'operator'
                            nodes[nid] = {
                                'id': nid, 'name': name, 'class': key[1],
                                'module': key[0],
                                'namespace': idx.classes[key].get('namespace', ''),
                                'file': idx.classes[key].get('file'),
                                'line': idx.classes[key].get('line'),
                                'kind': kind, 'sigs': [norm_sig(fn['sig'])],
                                'overloads': 1, 'defined': True,
                                'file_def': f, 'line_def': fn['line'],
                                'readable': '%s::%s' % (key[1], name),
                            }
                    continue
                nid = 'F|%s|%s|%s' % (module, f, fn['name'])
                if nid not in nodes:
                    nodes[nid] = {
                        'id': nid, 'name': fn['name'], 'class': None, 'module': module,
                        'namespace': fn.get('namespace', ''), 'file': f, 'line': fn['line'],
                        'kind': 'free', 'sigs': [norm_sig(fn['sig'])], 'overloads': 1,
                        'defined': True, 'file_def': f, 'line_def': fn['line'],
                        'readable': fn['name'],
                    }
                else:
                    nodes[nid]['sigs'].append(norm_sig(fn['sig']))
                    nodes[nid]['overloads'] += 1

    # 3) 函数式宏节点（被调用目标）
    for (module, name), value in idx.macros.items():
        if FUNCLIKE_RE.match(value.strip()):
            nid = 'D|%s|%s' % (module, name)
            nodes[nid] = {
                'id': nid, 'name': name, 'class': None, 'module': module,
                'namespace': '', 'file': None, 'line': None,
                'kind': 'macro', 'sigs': [], 'overloads': 0,
                'defined': True, 'file_def': None, 'line_def': None,
                'readable': '#' + name,
            }

    # 4) 同名自由函数合并：头文件内联定义 + .cpp 外置定义为同一逻辑函数。
    #    仅当组内含 .h 节点时合并（per-file main 等仅 .cpp 的同名函数不合并）。
    #    规范节点取 .cpp 定义节点；其余（.h 内联）删除；别名表返回供 run() 重定向 src。
    alias = {}
    groups = defaultdict(list)
    for nid, nd in nodes.items():
        if nd['kind'] == 'free':
            groups[(nd['module'], nd['namespace'], nd['name'])].append(nid)
    for key, v in groups.items():
        if len(v) < 2:
            continue
        h_nodes = [nid for nid in v if nodes[nid]['file'] and nodes[nid]['file'].endswith('.h')]
        if not h_nodes:
            continue
        cpp_defs = [nid for nid in v if nodes[nid]['file'] and nodes[nid]['file'].endswith('.cpp')]
        if len(cpp_defs) == 1:
            canon = cpp_defs[0]
        else:
            canon = h_nodes[0]
        alias[key] = canon
        for nid in v:
            if nid != canon:
                del nodes[nid]
    return nodes, alias


# ---------------------------------------------------------------- 调用解析

class Resolver(object):
    def __init__(self, idx, nodes, raw_modules):
        self.idx = idx
        self.nodes = nodes
        self.raw_modules = raw_modules
        self.edges = {}          # (s,t) -> {'type', 'lines':[], 'n'}
        self.unresolved = defaultdict(list)   # s -> [{name, recv, qual, line}]
        self.externals = defaultdict(list)
        self.indirects = defaultdict(list)
        self.free_alias = {}     # (module, ns, name) -> canonical free node id

    def add_edge(self, s, t, etype, line, how=''):
        if s == t:
            etype = 'recursive'
        e = self.edges.setdefault((s, t), {'type': etype, 'lines': [], 'n': 0, 'how': how})
        e['lines'].append(line)
        e['n'] += 1
        if not e['how']:
            e['how'] = how

    # ---- 类型判定
    def is_type_name(self, name, module):
        if name in TYPE_KEYWORDS or name in self.idx.typedefs or name in self.idx.enums:
            return True
        return bool(self.idx.class_by_name.get(name))

    def is_funcptr_var(self, module, ctx_class, params, name):
        if name in params and is_funcptr_type(params[name]):
            return True
        if ctx_class:
            key = resolve_class_key(self.idx, module, ctx_class)
            if key:
                for m in self.idx.classes[key]['members']:
                    if m.get('name') == name and is_funcptr_type(m.get('type', '')):
                        return True
        g = self.global_type(module, name)
        if g and is_funcptr_type(g):
            return True
        return False

    def global_type(self, module, name):
        if name in self.idx.globals[module]:
            return self.idx.globals[module][name]
        found = []
        for mod, gs in self.idx.globals.items():
            if name in gs:
                found.append(gs[name])
        if len(found) == 1:
            return found[0]
        return None

    def unique_name_target(self, module, ctx_ns, name, src):
        """全库唯一函数名回退；有歧义返回 None"""
        hits = [nid for nid, nd in self.nodes.items() if nd['name'] == name and nid != src]
        if len(hits) == 1:
            return hits[0]
        return None

    def find_free(self, module, ctx_ns, name):
        """自由函数：同命名空间唯一 -> 命中；否则全库唯一 -> 命中"""
        same_ns = [nid for nid, nd in self.nodes.items()
                   if nd['kind'] == 'free' and nd['name'] == name and nd['namespace'] == ctx_ns]
        if len(same_ns) == 1:
            return same_ns[0]
        allf = [nid for nid, nd in self.nodes.items()
                if nd['kind'] == 'free' and nd['name'] == name]
        if len(allf) == 1:
            return allf[0]
        return None

    def find_macro(self, module, name):
        hits = [nid for nid, nd in self.nodes.items()
                if nd['kind'] == 'macro' and nd['name'] == name and nd['module'] == module]
        if len(hits) == 1:
            return hits[0]
        allm = [nid for nid, nd in self.nodes.items()
                if nd['kind'] == 'macro' and nd['name'] == name]
        if len(allm) == 1:
            return allm[0]
        return None

    def find_ctor(self, module, ctx_ns, clsname):
        key = resolve_class_key(self.idx, module, clsname)
        if key is None:
            return None
        nid = method_node_key(key[0], key[1], clsname)
        if nid in self.nodes:
            return nid
        return None

    def resolve_qualified(self, module, ctx_ns, qual, name):
        """限定调用 A::B::name( —— 返回 (target_id, etype) 或 None（外部/未知）"""
        segs = [s for s in qual.split('::') if s]
        if not segs:
            return None
        if segs[0] == 'std' or segs[0] in ('::', 'boost'):
            return None
        last = segs[-1]
        # 形式1: 最后一段是类名 -> 类方法（含继承）
        if self.idx.class_by_name.get(last):
            key = resolve_class_key(self.idx, module, last)
            if key is not None:
                t = find_method(self.idx, key[0], key[1], name)
                if t:
                    return method_node_key(t[0], t[1], name), 'cross_class'
        # 形式2: 最后一段是命名空间或模块（n_xxx::func）-> 自由函数
        f = self.find_free(module, last if last.startswith('n_') else ctx_ns, name)
        if f:
            return f, 'free'
        # 形式3: 构造调用 Class::Class(
        if name == last:
            c = self.find_ctor(module, ctx_ns, last)
            if c:
                return c, 'cross_class'
        return None

    def process_item(self, src, ctx_class, ctx_ns, module, file, params, it):
        name = it['name']
        recv = it['recv']
        qual = it['qual']
        line = it['line']
        kind = it['kind']

        if kind == 'paren':
            if self.is_type_name(name, module):
                return
            if self.is_funcptr_var(module, ctx_class, params, name):
                self.indirects[src].append({'name': name, 'line': line})
            return
        if kind == 'indirect':
            self.indirects[src].append({'name': name, 'line': line})
            return

        # ---- 限定调用
        if qual:
            r = self.resolve_qualified(module, ctx_ns, qual, name)
            if r is None:
                self.externals[src].append({'name': name, 'qual': qual, 'line': line})
            else:
                target, etype = r
                self.add_edge(src, target, etype, line, 'qualified')
            return

        # ---- 接收者调用
        if recv:
            if recv == 'this':
                if ctx_class:
                    t = find_method(self.idx, module, ctx_class, name)
                    if t:
                        self.add_edge(src, method_node_key(t[0], t[1], name), 'this', line, 'this')
                        return
                    if self.is_funcptr_var(module, ctx_class, {}, name) and \
                            self.is_member(ctx_class, name, module):
                        self.indirects[src].append({'name': name, 'line': line})
                        return
                self.externals[src].append({'name': name, 'recv': 'this', 'line': line})
                return
            ptype = params.get(recv)
            if ptype:
                cls = class_of_type(ptype)
                if cls:
                    t = find_method(self.idx, module, cls, name)
                    if t:
                        self.add_edge(src, method_node_key(t[0], t[1], name), 'cross_class', line, 'param')
                        return
            gtype = self.global_type(module, recv)
            if gtype:
                cls = class_of_type(gtype)
                if cls:
                    t = find_method(self.idx, module, cls, name)
                    if t:
                        self.add_edge(src, method_node_key(t[0], t[1], name), 'cross_class', line, 'global')
                        return
            # 当前类成员接收者：this->file_h.create()（含继承成员）
            mtype = self.member_type(module, ctx_class, recv)
            if mtype:
                cls = class_of_type(mtype)
                if cls:
                    t = find_method(self.idx, module, cls, name)
                    if t:
                        self.add_edge(src, method_node_key(t[0], t[1], name), 'cross_class', line, 'member')
                        return
            u = self.unique_name_target(module, ctx_ns, name, src)
            if u:
                self.add_edge(src, u, 'cross_class', line, 'unique')
                return
            self.externals[src].append({'name': name, 'recv': recv, 'line': line})
            return

        # ---- 无接收者
        if ctx_class:
            t = find_method(self.idx, module, ctx_class, name)
            if t:
                self.add_edge(src, method_node_key(t[0], t[1], name), 'this', line, 'this')
                return
        # 隐式 this 的成员函数指针调用：p_func(p)（p_func 为 MyFunc 类型成员）
        if self.is_funcptr_var(module, ctx_class, params, name):
            self.indirects[src].append({'name': name, 'line': line})
            return
        f = self.find_free(module, ctx_ns, name)
        if f:
            self.add_edge(src, f, 'free', line, 'free')
            return
        if self.idx.class_by_name.get(name):
            c = self.find_ctor(module, ctx_ns, name)
            if c:
                self.add_edge(src, c, 'cross_class', line, 'ctor')
                return
        m = self.find_macro(module, name)
        if m:
            self.add_edge(src, m, 'macro', line, 'macro')
            return
        u = self.unique_name_target(module, ctx_ns, name, src)
        if u:
            self.add_edge(src, u, 'free', line, 'unique')
            return
        if name in LIBC_NAMES or name in ('_GNU_SOURCE',):
            self.externals[src].append({'name': name, 'recv': None, 'qual': 'libc', 'line': line})
            return
        self.unresolved[src].append({'name': name, 'recv': recv, 'qual': qual, 'line': line})

    def member_type(self, module, ctx_class, name):
        """当前类（含基类）成员变量类型；非成员返回 None"""
        if not ctx_class:
            return None
        root = resolve_class_key(self.idx, module, ctx_class)
        if root is None:
            return None
        order = [root] + ancestors_of(self.idx, module, ctx_class)
        for key in order:
            if key is None:
                continue
            for m in self.idx.classes[key]['members']:
                if m.get('name') == name:
                    return m.get('type', '')
        return None

    def is_member(self, clsname, name, module):
        key = resolve_class_key(self.idx, module, clsname)
        if key is None:
            return False
        for m in self.idx.classes[key]['members']:
            if m.get('name') == name:
                return True
        return False

    def run(self):
        for module, mrec in self.raw_modules.items():
            for f, rec in mrec.get('files', {}).items():
                for c in rec.get('calls', []):
                    if c.get('class'):
                        src = method_node_key(module, c['class'], c['name'])
                        ctx_class = c['class']
                    elif c.get('owner'):
                        owner = c['owner'].split('::')[-1]
                        key = resolve_class_key(self.idx, module, owner)
                        if key is None:
                            continue
                        src = method_node_key(key[0], key[1], c['name'])
                        ctx_class = key[1]
                    else:
                        src = 'F|%s|%s|%s' % (module, f, c['name'])
                        ctx_class = None
                        src = self.free_alias.get((module, c.get('ns', ''), c['name']), src)
                    if src not in self.nodes:
                        continue
                    params = parse_params(c.get('sig', '')) if c.get('sig') else {}
                    for it in c.get('items', []):
                        self.process_item(src, ctx_class, c.get('ns', ''),
                                          module, f, params, it)


# ---------------------------------------------------------------- 聚合与输出

def module_of(nid):
    # M|mod|cls|name  /  F|mod|file|name  /  D|mod|name
    return nid.split('|')[1]


def aggregate(rslv, raw_modules):
    idx, nodes, edges = rslv.idx, rslv.nodes, rslv.edges
    mods = sorted(set(raw_modules.keys()) | set(module_of(n) for n in nodes))
    mod_stats = {}
    cross = Counter()
    node_in = Counter()     # (sites, callers)
    node_out = Counter()
    for (s, t), e in edges.items():
        sm, tm = module_of(s), module_of(t)
        st = mod_stats.setdefault(sm, {'functions': 0, 'intra': 0, 'out': 0,
                                       'in': 0, 'unresolved': 0, 'external': 0,
                                       'indirect': 0, 'macro': 0, 'callsites': 0})
        node_in[t] += e['n']
        node_out[s] += e['n']
        st['callsites'] += e['n']
        if e['type'] == 'macro':
            st['macro'] += e['n']
        if sm == tm:
            st['intra'] += e['n']
        else:
            st['out'] += e['n']
            cross[(sm, tm)] += e['n']
            mod_stats.setdefault(tm, {'functions': 0, 'intra': 0, 'out': 0,
                                      'in': 0, 'unresolved': 0, 'external': 0,
                                      'indirect': 0, 'macro': 0, 'callsites': 0})
            mod_stats[tm]['in'] += e['n']
    for mod in mods:
        st = mod_stats.setdefault(mod, {'functions': 0, 'intra': 0, 'out': 0,
                                        'in': 0, 'unresolved': 0, 'external': 0,
                                        'indirect': 0, 'macro': 0, 'callsites': 0})
        st['functions'] = sum(1 for n in nodes if module_of(n) == mod)
    for s, lst in rslv.unresolved.items():
        mod_stats[module_of(s)]['unresolved'] += len(lst)
    for s, lst in rslv.externals.items():
        mod_stats[module_of(s)]['external'] += len(lst)
    for s, lst in rslv.indirects.items():
        mod_stats[module_of(s)]['indirect'] += len(lst)

    # 节点 callers/callees 计数
    callees_of = defaultdict(set)
    callers_of = defaultdict(set)
    for (s, t), e in edges.items():
        callees_of[s].add(t)
        callers_of[t].add(s)
    hub_in = [(n, callers_of.get(n, set()), node_in[n]) for n in nodes]
    hub_out = [(n, callees_of.get(n, set()), node_out[n]) for n in nodes]
    return mods, mod_stats, cross, hub_in, hub_out, callers_of, callees_of


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--raw-dir', default=RAW_DIR)
    ap.add_argument('--out', default=OUT_DIR)
    ap.add_argument('--shards', nargs='*', default=None)
    a = ap.parse_args()

    if a.shards:
        shard_files = [os.path.join(a.raw_dir, s) for s in a.shards]
    else:
        shard_files = sorted(
            os.path.join(a.raw_dir, f) for f in os.listdir(a.raw_dir)
            if re.match(r's\d+\.json$', f))
    os.makedirs(a.out, exist_ok=True)
    print('shards:', [os.path.basename(p) for p in shard_files])

    raw_modules = {}
    raw_stats = {'files': 0, 'lines': 0, 'classes': 0, 'methods': 0,
                 'free_functions': 0, 'members': 0, 'globals': 0, 'defines': 0,
                 'typedefs': 0, 'enums': 0, 'calls': 0, 'errors': 0}
    for p in shard_files:
        d = load_json(p)
        for mod, mrec in d.get('modules', {}).items():
            if mod in raw_modules:
                print('WARN duplicate module in shards:', mod)
            raw_modules[mod] = mrec
            for k in raw_stats:
                raw_stats[k] += mrec.get('stats', {}).get(k, 0)
    print('raw totals:', raw_stats)
    print('modules:', len(raw_modules))

    idx = build_index(raw_modules)
    nodes, free_alias = build_nodes(idx, raw_modules)
    print('nodes: methods=%d free=%d macro=%d total=%d' % (
        sum(1 for n in nodes.values() if n['kind'] in ('method', 'ctor', 'dtor', 'operator')),
        sum(1 for n in nodes.values() if n['kind'] == 'free'),
        sum(1 for n in nodes.values() if n['kind'] == 'macro'),
        len(nodes)))

    rslv = Resolver(idx, nodes, raw_modules)
    rslv.free_alias = free_alias
    rslv.run()
    print('resolved edges:', len(rslv.edges),
          ' unresolved sites:', sum(len(v) for v in rslv.unresolved.values()),
          ' external sites:', sum(len(v) for v in rslv.externals.values()),
          ' indirect sites:', sum(len(v) for v in rslv.indirects.values()))

    mods, mod_stats, cross, hub_in, hub_out, callers_of, callees_of = aggregate(rslv, raw_modules)

    # ---- 输出: functions.json
    func_json = {
        'meta': {
            'raw': raw_stats,
            'nodes_total': len(nodes),
            'generated': 'callgraph_build.py',
        },
        'nodes': {nid: {k: v for k, v in nd.items() if k != 'sigs' or not nd['sigs'] or True}
                  for nid, nd in nodes.items()},
    }
    # 保留 sigs 但压缩（每个节点最多保留全部）
    func_json['nodes'] = nodes
    save_json(func_json, os.path.join(a.out, 'functions.json'))

    # ---- 输出: edges.json
    edges_list = [{'s': s, 't': t, 'type': e['type'], 'how': e.get('how', ''),
                   'lines': e['lines'], 'n': e['n']}
                  for (s, t), e in sorted(rslv.edges.items())]
    save_json({'edges': edges_list}, os.path.join(a.out, 'edges.json'))

    # ---- 输出: unresolved.json
    save_json({
        'unresolved': {s: lst for s, lst in rslv.unresolved.items()},
        'external': {s: lst for s, lst in rslv.externals.items()},
        'indirect': {s: lst for s, lst in rslv.indirects.items()},
    }, os.path.join(a.out, 'unresolved.json'))

    # ---- 输出: stats.json
    type_dist = Counter(e['type'] for e in edges_list)
    how_dist = Counter(e.get('how', '') for e in edges_list)
    stats_json = {
        'raw': raw_stats,
        'nodes': {'total': len(nodes),
                  'methods': sum(1 for n in nodes.values() if n['kind'] in ('method', 'ctor', 'dtor', 'operator')),
                  'free': sum(1 for n in nodes.values() if n['kind'] == 'free'),
                  'macro': sum(1 for n in nodes.values() if n['kind'] == 'macro'),
                  'with_calls': sum(1 for nid in nodes
                                    if nid in rslv.edges or nid in rslv.unresolved
                                    or nid in rslv.externals or nid in rslv.indirects)},
        'edges': {'total': len(edges_list),
                  'callsites': sum(e['n'] for e in edges_list),
                  'types': dict(type_dist),
                  'how': dict(how_dist),
                  'unresolved_sites': sum(len(v) for v in rslv.unresolved.values()),
                  'external_sites': sum(len(v) for v in rslv.externals.values()),
                  'indirect_sites': sum(len(v) for v in rslv.indirects.values())},
        'modules': {m: dict(s) for m, s in mod_stats.items()},
        'cross_module': {('%s->%s' % k): v for k, v in sorted(cross.items(), key=lambda x: -x[1])},
    }
    save_json(stats_json, os.path.join(a.out, 'stats.json'))
    print('cross module pairs:', len(cross))

    # ---- 输出: modules/<mod>.json（局部图数据）
    mod_dir = os.path.join(a.out, 'modules')
    os.makedirs(mod_dir, exist_ok=True)
    for mod in mods:
        fn_ids = [nid for nid in nodes if module_of(nid) == mod]
        local = {
            'module': mod,
            'stats': mod_stats.get(mod, {}),
            'functions': fn_ids,
            'edges': [{'s': s, 't': t, 'type': e['type'], 'n': e['n']}
                      for (s, t), e in rslv.edges.items()
                      if module_of(s) == mod or module_of(t) == mod],
            'cross_in': {'%s->%s' % k: v for k, v in cross.items() if k[1] == mod},
            'cross_out': {'%s->%s' % k: v for k, v in cross.items() if k[0] == mod},
            'unresolved_count': mod_stats.get(mod, {}).get('unresolved', 0),
            'external_count': mod_stats.get(mod, {}).get('external', 0),
            'indirect_count': mod_stats.get(mod, {}).get('indirect', 0),
        }
        save_json(local, os.path.join(mod_dir, mod + '.json'))

    # ---- 可读层
    write_modules_md(mods, mod_stats, cross, rslv, nodes, os.path.join(a.out, 'modules-md'))
    write_report(mods, mod_stats, cross, hub_in, hub_out, nodes, edges_list,
                 rslv, raw_stats, os.path.join(a.out, 'report.md'))
    print('DONE ->', a.out)


# ---------------------------------------------------------------- 可读层输出

def write_modules_md(mods, mod_stats, cross, rslv, nodes, out_dir):
    os.makedirs(out_dir, exist_ok=True)
    # 每模块被调用/调用方排序
    callee_sites = Counter()
    caller_sites = Counter()
    for (s, t), e in rslv.edges.items():
        callee_sites[t] += e['n']
        caller_sites[s] += e['n']
    for mod in sorted(mods):
        st = mod_stats.get(mod, {})
        fn_ids = [nid for nid in nodes if module_of(nid) == mod]
        # 模块内部 TOP
        top_called = sorted((callee_sites[nid], nid) for nid in fn_ids)[::-1][:15]
        top_callers = sorted((caller_sites[nid], nid) for nid in fn_ids)[::-1][:15]
        cross_out = [(k, v) for k, v in cross.items() if k[0] == mod]
        cross_in = [(k, v) for k, v in cross.items() if k[1] == mod]
        cross_out.sort(key=lambda x: -x[1])
        cross_in.sort(key=lambda x: -x[1])
        L = []
        L.append('# 模块 `%s` 调用图\n' % mod)
        L.append('| 指标 | 数值 |\n|---|---|')
        for k, v in st.items():
            L.append('| %s | %s |' % (k, v))
        L.append('\n## 模块内被调用 TOP（调用点次数）\n')
        L.append('| 函数 | 类 | 调用点数 |\n|---|---|---|')
        for n, nid in top_called:
            L.append('| `%s` | %s | %d |' % (nodes[nid]['readable'], nodes[nid]['class'] or '-', n))
        L.append('\n## 模块内调用方 TOP（调用点次数）\n')
        L.append('| 函数 | 类 | 调用点数 |\n|---|---|---|')
        for n, nid in top_callers:
            L.append('| `%s` | %s | %d |' % (nodes[nid]['readable'], nodes[nid]['class'] or '-', n))
        L.append('\n## 跨模块出边 TOP\n')
        if cross_out:
            L.append('| 目标模块 | 调用点数 |\n|---|---|')
            for (sm, tm), v in cross_out[:15]:
                L.append('| %s | %d |' % (tm, v))
        else:
            L.append('（无）\n')
        L.append('\n## 跨模块入边 TOP\n')
        if cross_in:
            L.append('| 来源模块 | 调用点数 |\n|---|---|')
            for (sm, tm), v in cross_in[:15]:
                L.append('| %s | %d |' % (sm, v))
        else:
            L.append('（无）\n')
        L.append('\n## 类级摘要\n')
        L.append('| 类 | 方法数 | 出边调用点数 | 入边调用点数 |\n|---|---|---|---|')
        cls_agg = defaultdict(lambda: [0, 0, 0])
        for nid in fn_ids:
            nd = nodes[nid]
            c = nd['class'] or '自由函数'
            cls_agg[c][0] += 1
            cls_agg[c][1] += caller_sites[nid]
            cls_agg[c][2] += callee_sites[nid]
        for c, (nm, out_n, in_n) in sorted(cls_agg.items()):
            L.append('| %s | %d | %d | %d |' % (c, nm, out_n, in_n))
        L.append('\n未解析调用点: %d | 外部(容器/库)调用点: %d | 间接(函数指针)调用点: %d\n'
                 % (st.get('unresolved', 0), st.get('external', 0), st.get('indirect', 0)))
        with io.open(os.path.join(out_dir, mod + '.md'), 'w', encoding='utf-8') as f:
            f.write('\n'.join(L))


def write_report(mods, mod_stats, cross, hub_in, hub_out, nodes, edges_list,
                 rslv, raw_stats, path):
    type_dist = Counter(e['type'] for e in edges_list)
    in_sorted = sorted(hub_in, key=lambda x: (-len(x[1]), -x[2]))
    out_sorted = sorted(hub_out, key=lambda x: (-len(x[0] if False else x[1]), -x[2]))
    # out_sorted 按出度（distinct callees）排
    out_sorted = sorted(hub_out, key=lambda x: (-len(x[1]), -x[2]))
    L = []
    L.append('# 全项目函数调用关系图（src/，6201 文件，101 模块）\n')
    L.append('## 一、总体规模\n')
    L.append('| 指标 | 数值 |\n|---|---|')
    L.append('| 源文件 | %d |' % raw_stats['files'])
    L.append('| 代码行 | %d |' % raw_stats['lines'])
    L.append('| 方法节点（类名::方法，重载合并） | %d |' % sum(
        1 for n in nodes.values() if n['kind'] in ('method', 'ctor', 'dtor', 'operator')))
    L.append('| 自由函数节点 | %d |' % sum(1 for n in nodes.values() if n['kind'] == 'free'))
    L.append('| 函数式宏节点 | %d |' % sum(1 for n in nodes.values() if n['kind'] == 'macro'))
    L.append('| 函数节点合计 | %d |' % len(nodes))
    L.append('| 解析成功的调用边（去重后的 函数对 数） | %d |' % len(edges_list))
    L.append('| 调用点总次数（含重复调用同一函数） | %d |' % sum(e['n'] for e in edges_list))
    L.append('| 未解析调用点 | %d |' % sum(len(v) for v in rslv.unresolved.values()))
    L.append('| 外部调用点（容器方法/库/std） | %d |' % sum(len(v) for v in rslv.externals.values()))
    L.append('| 间接调用点（函数指针） | %d |' % sum(len(v) for v in rslv.indirects.values()))
    L.append('')
    L.append('### 调用边类型分布\n')
    L.append('| 类型 | 边数 | 含义 |\n|---|---|---|')
    L.append('| this | %d | 类内方法调用（隐式 this / this->） |' % type_dist.get('this', 0))
    L.append('| cross_class | %d | 跨类调用（对象->方法 / Class::方法 / new 构造） |' % type_dist.get('cross_class', 0))
    L.append('| free | %d | 自由函数调用 |' % type_dist.get('free', 0))
    L.append('| macro | %d | 函数式宏调用 |' % type_dist.get('macro', 0))
    L.append('| recursive | %d | 递归（自身调用） |' % type_dist.get('recursive', 0))
    L.append('')
    L.append('## 二、枢纽函数 TOP 30（被调用最多，入度）\n')
    L.append('| # | 函数 | 模块 | 类 | 定义位置 | 调用方数 | 调用点次数 |\n|---|---|---|---|---|---|---|')
    for i, (nid, callers, sites) in enumerate(in_sorted[:30], 1):
        nd = nodes[nid]
        L.append('| %d | `%s` | %s | %s | %s:%s | %d | %d |' % (
            i, nd['readable'], nd['module'], nd['class'] or '-',
            nd['file'] or '-', nd['line'] or '-', len(callers), sites))
    L.append('\n## 三、枢纽函数 TOP 30（调用最多，出度）\n')
    L.append('| # | 函数 | 模块 | 类 | 定义位置 | 被调函数数 | 调用点次数 |\n|---|---|---|---|---|---|---|')
    for i, (nid, callees, sites) in enumerate(out_sorted[:30], 1):
        nd = nodes[nid]
        L.append('| %d | `%s` | %s | %s | %s:%s | %d | %d |' % (
            i, nd['readable'], nd['module'], nd['class'] or '-',
            nd['file'] or '-', nd['line'] or '-', len(callees), sites))
    L.append('\n## 四、跨模块调用 TOP 30 流\n')
    L.append('| 来源模块 | 目标模块 | 调用点次数 |\n|---|---|---|')
    for (sm, tm), v in sorted(cross.items(), key=lambda x: -x[1])[:30]:
        L.append('| %s | %s | %d |' % (sm, tm, v))
    L.append('\n## 五、每模块摘要\n')
    L.append('| 模块 | 函数节点 | 内部边 | 出边 | 入边 | 未解析 | 外部 | 间接 | 宏边 |\n|---|---|---|---|---|---|---|---|---|')
    for mod in sorted(mods):
        st = mod_stats.get(mod, {})
        L.append('| %s | %d | %d | %d | %d | %d | %d | %d | %d |' % (
            mod, st.get('functions', 0), st.get('intra', 0), st.get('out', 0),
            st.get('in', 0), st.get('unresolved', 0), st.get('external', 0),
            st.get('indirect', 0), st.get('macro', 0)))
    L.append('\n## 六、构建方法与符号消歧规则\n')
    L.append('''1. 解析：扩展 cpp_analyzer.py 捕获每个函数定义体文本（已掩码字符串/注释/预处理），
   用正则提取调用点：name( / recv->name( / recv.name( / qual::name( / (*fp)( / (fp)(。
2. 节点归并：类方法声明(.h) 与 类限定定义(.cpp, owner=Class) 合并为同一节点；重载按方法名合并；
   类限定定义并入方法节点（补充 file_def/line_def）。
3. 消歧优先级（调用点 → 目标）：
   - this-> / 类体内直接调用 → 当前类方法，未命中则沿 Object 继承链向上（Osetting/Ouuid/Otime/Orange…）查找；
   - 对象接收者 → 参数类型（函数签名解析）或全局变量类型（去 const/*/&/模板/n_::前缀）→ 目标类方法；
   - Class::method / n_x::Class::method → 直接按类+方法解析；
   - 无接收者 → 同命名空间自由函数唯一 → 全库唯一函数名回退；
   - 类名作为调用（new Cfoo( / Cfoo()）→ 构造函数节点；
   - 函数式宏（#define F(x) ...）→ 宏节点；
   - (*fp)( / (fp)( 且 fp 为 MyFunc/函数指针类型成员/参数/全局 → 间接调用；
   - 其余 → 未解析 / 外部（std::、容器方法、接收者未知）。
4. 调用边去重：(源函数, 目标函数) 唯一，lines 记录全部调用点行号，n 为调用点次数。''')
    L.append('\n## 七、局限性与说明（诚实声明）\n')
    L.append('''- 间接调用（函数指针/回调）只记录"调用了哪个函数指针变量"，不追蹤指针指向的真实函数；
- 运算符重载的符号形式（a + b）不提取，仅提取显式 operatorX( 调用与 operator 方法自身节点；
- #define 宏体内部不展开解析（预处理行已掩码）；宏节点只作为被调用目标；
- 局部变量类型不跟踪（仅参数/全局/this），接收者为未知局部对象时按唯一名回退或记为外部；
- 未解析调用点（函数名全库有歧义或不存在）保留在 unresolved.json 可审计；
- 重载函数按方法名合并为单节点（签名列表保留在 functions.json）。''')
    L.append('\n## 八、与 code-tree 对齐\n')
    L.append('''- code-tree 基线：3125 类 / 11681 类方法 / 11533 自由函数 / 5058 宏，errors=0；
- 本次方法节点（重载合并后）≤ 11681（同名方法合并），自由函数节点 ≤ 11533（owner 定义归并到方法）；
- 具体对齐数字见 functions.json / stats.json，可在 HTML 中按模块、按类核对源码行号。''')
    with io.open(path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(L))


if __name__ == '__main__':
    main()
