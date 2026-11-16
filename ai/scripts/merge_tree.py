#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
merge_tree.py — 合并 ai/shards/s*.json 分片产物，生成:
  1. ai/code-tree.md          全量代码知识树（人可读主交付）
  2. ai/code-tree-index.json  汇总索引（模块/文件/类/函数/变量/宏 统计 + 类注册表）
  3. ai/modules/<module>.md   每模块详情树（完整签名）

用法: python merge_tree.py --ai E:\\github\\iwant\\ai
"""
import argparse
import glob
import json
import os
import re
import sys
import datetime

try:
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')
except Exception:
    pass

CONVENTION_NOTES = [
    '所有类以 Object 为根（直接或间接继承）；子类构造函数设置 this->name 与 alias。',
    '函数返回码约定: <0 无事可做 / ==0 成功 / >0 失败（README Coding rule 1）。',
    '回调/extern/execute/thread 统一回调签名: typedef int(*MyFunc)(void *p)（README Coding rule 2）。',
    '类命名规则: 文件主类名 = 文件名 + C 前缀；Object 体系类用 O 前缀（Ouuid/Oinput…）；命名空间 n_ 前缀。',
]


def load_shards(ai_dir):
    shards = []
    for p in sorted(glob.glob(os.path.join(ai_dir, 'shards', 's*.json'))):
        with open(p, encoding='utf-8') as f:
            shards.append(json.load(f))
    return shards


def merge_modules(shards):
    """按模块名合并（instruction 由两个分片各半产出）"""
    merged = {}
    for sh in shards:
        for mod, mrec in sh.get('modules', {}).items():
            target = merged.setdefault(mod, {'files': {}, 'stats': {}})
            for rel, rec in mrec.get('files', {}).items():
                target['files'][rel] = rec
    return merged


def compute_stats(files):
    s = {'files': len(files), 'lines': 0, 'classes': 0, 'methods': 0,
         'free_functions': 0, 'members': 0, 'globals': 0, 'defines': 0,
         'typedefs': 0, 'enums': 0, 'errors': 0}
    for r in files.values():
        s['lines'] += r.get('lines', 0)
        s['classes'] += len(r.get('classes', []))
        s['methods'] += sum(len(c.get('methods', [])) for c in r.get('classes', []))
        s['free_functions'] += len(r.get('functions', []))
        s['members'] += sum(len(c.get('members', [])) for c in r.get('classes', []))
        s['globals'] += len(r.get('globals', []))
        s['defines'] += len(r.get('defines', []))
        s['typedefs'] += len(r.get('typedefs', []))
        s['enums'] += len(r.get('enums', []))
        if r.get('parse_error'):
            s['errors'] += 1
    return s


def fmt_sig(sig, maxlen=90):
    sig = re.sub(r'\s+', ' ', sig).strip()
    return sig if len(sig) <= maxlen else sig[:maxlen - 1] + '…'


def class_key(c):
    return (c['namespace'] or '', c['name'])


def render_module_md(module, mrec, stats):
    L = []
    L.append('# src/%s' % module)
    L.append('')
    L.append('> 统计: %d 文件 / %d 行 / %d 类 / %d 方法 / %d 自由函数 / %d 成员变量 / %d 全局变量 / %d 宏 / %d typedef / %d 枚举'
             % (stats['files'], stats['lines'], stats['classes'], stats['methods'],
                stats['free_functions'], stats['members'], stats['globals'],
                stats['defines'], stats['typedefs'], stats['enums']))
    L.append('')
    for rel in sorted(mrec['files']):
        r = mrec['files'][rel]
        L.append('## %s (%d 行)' % (rel, r['lines']))
        L.append('')
        if r.get('parse_error'):
            L.append('> 解析失败: %s' % r['parse_error'])
            L.append('')
            continue
        # 宏
        if r['defines']:
            L.append('### 宏 #define (%d)' % len(r['defines']))
            for d in r['defines']:
                val = d['value']
                if len(val) > 70:
                    val = val[:67] + '…'
                L.append('- `%s`%s  `L%d`' % (d['name'], (' = %s' % val) if val else '（无值，通常为头文件守卫）', d['line']))
            L.append('')
        # 枚举
        for en in r['enums']:
            L.append('### 枚举 %s%s %s  `L%d`%s'
                     % ('enum class ' if en.get('class_enum') else 'enum ',
                        en['name'],
                        (' : ' + en['underlying']) if en.get('underlying') else '',
                        en['line'],
                        ('，typedef 别名 `%s`' % en['typedef_alias']) if en.get('typedef_alias') else ''))
            vals = en.get('values', [])
            if len(vals) <= 30:
                L.append('- ' + '、'.join('%s%s' % (v['name'], ('=' + v['value']) if v.get('value') else '') for v in vals))
            else:
                L.append('- 共 %d 个枚举常量（详情见 JSON）' % len(vals))
            L.append('')
        # typedef
        if r['typedefs']:
            L.append('### typedef / using (%d)' % len(r['typedefs']))
            for t in r['typedefs']:
                note = '  ⭐ 回调约定 MyFunc' if 'MyFunc' in t['text'] else ''
                L.append('- `%s`  `L%d`%s' % (t['text'], t['line'], note))
            L.append('')
        # 自由函数（含类限定实现）
        if r['functions']:
            L.append('### 函数 (%d)' % len(r['functions']))
            by_ns = {}
            for f in r['functions']:
                by_ns.setdefault(f.get('namespace') or '', []).append(f)
            for ns, fl in sorted(by_ns.items()):
                if ns:
                    L.append('#### namespace %s' % ns)
                for f in fl:
                    q = '%s::' % f['owner'] if f.get('owner') else ''
                    kind = '定义' if f.get('defined') else '声明'
                    L.append('- `%s%s(%s)` — %s  `L%d`'
                             % (q, f['name'], '', kind, f['line']))
                L.append('')
            L.append('> 完整签名见 JSON: %s' % '、'.join('`%s`' % fmt_sig(f['sig'], 60) for f in r['functions'][:6])
                      if len(r['functions']) <= 6 else '> 完整签名见 JSON。')
            L.append('')
        # 全局变量
        if r['globals']:
            L.append('### 全局变量 (%d)' % len(r['globals']))
            for g in r['globals']:
                tag = ('extern' if g.get('extern') else '') + ('static' if g.get('static') else '')
                L.append('- `%s %s`%s  `L%d`' % (g['type'], g['name'], (' [' + tag + ']') if tag else '', g['line']))
            L.append('')
        # 类
        if r['classes']:
            L.append('### 类 (%d)' % len(r['classes']))
            for c in r['classes']:
                nm = c['name']
                if c.get('typedef_alias'):
                    nm = '%s (typedef 别名 `%s`)' % (nm, c['typedef_alias'])
                bases = ', '.join(c['base']) if c['base'] else '—'
                ns = c['namespace'] or '全局'
                L.append('#### %s::%s  `L%d`  `%s`'
                         % (ns, nm, c['line'], c['kind']))
                if c['base']:
                    L.append('- 继承: `%s`' % bases)
                if c['members']:
                    L.append('- 成员变量 (%d): %s'
                             % (len(c['members']),
                                '、'.join('`%s %s`%s' % (m['type'], m['name'],
                                        (' [%s]' % m['access']) if m['access'] != 'public' else '')
                                        for m in c['members'])))
                if c['methods']:
                    L.append('- 方法 (%d):' % len(c['methods']))
                    for m in c['methods']:
                        sig = fmt_sig(m['sig'])
                        prefix = ''
                        if m.get('virtual') and not sig.startswith('virtual '):
                            prefix += 'virtual '
                        if m.get('static') and not sig.startswith('static '):
                            prefix += 'static '
                        dtag = '（定义）' if m.get('defined') else '（声明）'
                        L.append('  - %s`%s` %s `L%d`' % (prefix, sig, dtag, m['line']))
                L.append('')
    return '\n'.join(L)


def render_master_tree(modules, all_stats):
    L = []
    L.append('# iwant — src/ 代码知识树 (code-tree)')
    L.append('')
    L.append('> 生成时间: %s' % datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))
    L.append('> 来源: `E:\\github\\iwant\\src`（共 %d 个模块目录）' % len(modules))
    L.append('> 结构遵循 README: `main|root/package/files/namespace/class/command/action/function/coding…`')
    L.append('')
    L.append('## 项目编码约定（README [Coding rule]）')
    for i, note in enumerate(CONVENTION_NOTES, 1):
        L.append('%d. %s' % (i, note))
    L.append('')
    L.append('## 总览统计')
    L.append('')
    s = all_stats
    L.append('| 指标 | 数量 |')
    L.append('| --- | ---: |')
    L.append('| 源文件 | %d |' % s['files'])
    L.append('| 代码行 | %d |' % s['lines'])
    L.append('| 类/结构体/联合体 | %d |' % s['classes'])
    L.append('| 类方法（含运算符重载） | %d |' % s['methods'])
    L.append('| 自由函数/类限定实现 | %d |' % s['free_functions'])
    L.append('| 成员变量 | %d |' % s['members'])
    L.append('| 全局/文件级变量 | %d |' % s['globals'])
    L.append('| #define 宏 | %d |' % s['defines'])
    L.append('| typedef/using 别名 | %d |' % s['typedefs'])
    L.append('| 枚举 | %d |' % s['enums'])
    L.append('')
    # 模块表
    L.append('## 模块一览')
    L.append('')
    L.append('| 模块 | 文件 | 行 | 类 | 方法 | 自由函数 | 成员 | 全局 | 宏 | typedef | 枚举 |')
    L.append('| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |')
    for mod in sorted(modules):
        st = modules[mod]['stats']
        L.append('| %s | %d | %d | %d | %d | %d | %d | %d | %d | %d | %d |'
                 % (mod, st['files'], st['lines'], st['classes'], st['methods'],
                    st['free_functions'], st['members'], st['globals'], st['defines'],
                    st['typedefs'], st['enums']))
    L.append('')
    # 每个模块的树
    L.append('## 代码树')
    L.append('')
    for mod in sorted(modules):
        mrec = modules[mod]
        st = mrec['stats']
        L.append('### src/%s  (%d 文件, %d 行, %d 类)' % (mod, st['files'], st['lines'], st['classes']))
        L.append('')
        for rel in sorted(mrec['files']):
            r = mrec['files'][rel]
            L.append('#### %s (%d 行)' % (rel, r['lines']))
            if r.get('parse_error'):
                L.append('- ⚠ 解析失败: %s' % r['parse_error'])
                continue
            # 宏
            for d in r['defines']:
                val = d['value']
                if val and len(val) <= 50:
                    L.append('- `#define %s = %s` `L%d`' % (d['name'], val, d['line']))
                else:
                    L.append('- `#define %s`%s `L%d`' % (d['name'], ('（%d 字符，见 JSON）' % len(val)) if val else '（头文件守卫）', d['line']))
            # 全局
            for g in r['globals']:
                tag = ('extern' if g.get('extern') else '') + ('static' if g.get('static') else '')
                L.append('- 变量 `%s %s`%s `L%d`' % (g['type'], g['name'], (' [' + tag + ']') if tag else '', g['line']))
            # 枚举
            for en in r['enums']:
                L.append('- 枚举 `%s%s` `L%d`，%d 个常量%s'
                         % ('enum class ' if en.get('class_enum') else 'enum ', en['name'],
                            en['line'], len(en.get('values', [])),
                            ('，别名 `%s`' % en['typedef_alias']) if en.get('typedef_alias') else ''))
            # 自由函数（精简）
            for f in r['functions'][:40]:
                q = '%s::' % f['owner'] if f.get('owner') else ''
                L.append('- 函数 `%s%s()` %s `L%d`' % (q, f['name'], '定义' if f.get('defined') else '声明', f['line']))
            if len(r['functions']) > 40:
                L.append('- …等共 %d 个函数（详见 ai/modules/%s.md / JSON）' % (len(r['functions']), mod))
            # 类（含方法名列表）
            for c in r['classes']:
                ns = c['namespace'] or ''
                nm = c['name']
                if c.get('typedef_alias'):
                    nm = '%s (别名 %s)' % (nm, c['typedef_alias'])
                bases = ': ' + ', '.join(c['base']) if c['base'] else ''
                mnames = '、'.join(m['name'] for m in c['methods'][:60]) + ('…' if len(c['methods']) > 60 else '')
                vnames = '、'.join(m['name'] for m in c['members'][:40]) + ('…' if len(c['members']) > 40 else '')
                if c['members']:
                    tail = '；成员(%d): %s' % (len(c['members']), vnames)
                else:
                    tail = ''
                L.append('- **%s%s%s** `L%d` — 方法(%d): %s%s'
                         % (('`' + ns + '`::' if ns else ''), nm, bases, c['line'],
                            len(c['methods']), mnames, tail))
            L.append('')
    L.append('---')
    L.append('生成脚本: `ai/scripts/cpp_analyzer.py`（解析）+ `ai/scripts/merge_tree.py`（合并渲染）')
    return '\n'.join(L)


def build_index(modules, all_stats, src_root):
    idx = {
        'generated': datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
        'src_root': src_root,
        'totals': all_stats,
        'modules': {},
        'class_registry': [],
    }
    for mod in sorted(modules):
        mrec = modules[mod]
        files = {}
        for rel in sorted(mrec['files']):
            r = mrec['files'][rel]
            files[rel] = {
                'lines': r['lines'],
                'classes': [c['name'] for c in r['classes']],
                'functions': [f['name'] for f in r['functions']],
                'globals': [g['name'] for g in r['globals']],
                'defines': [d['name'] for d in r['defines']],
                'typedefs': [t['text'] for t in r['typedefs']],
                'enums': [e['name'] for e in r['enums']],
                'parse_error': r['parse_error'],
            }
            for c in r['classes']:
                idx['class_registry'].append({
                    'module': mod, 'file': rel, 'name': c['name'],
                    'kind': c['kind'], 'base': c['base'],
                    'namespace': c['namespace'], 'line': c['line'],
                    'methods': len(c['methods']), 'members': len(c['members']),
                })
        idx['modules'][mod] = {'stats': mrec['stats'], 'files': files}
    return idx


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--ai', required=True)
    args = ap.parse_args()
    ai_dir = args.ai.rstrip('\\/')
    shards = load_shards(ai_dir)
    if not shards:
        print('no shards found under %s' % os.path.join(ai_dir, 'shards'))
        sys.exit(1)
    src_root = shards[0].get('src_root', '')
    modules = merge_modules(shards)
    for mod, mrec in modules.items():
        mrec['stats'] = compute_stats(mrec['files'])
    all_stats = compute_stats({rel: r for m in modules.values() for rel, r in m['files'].items()})
    # 写模块详情
    mod_dir = os.path.join(ai_dir, 'modules')
    os.makedirs(mod_dir, exist_ok=True)
    for mod, mrec in modules.items():
        with open(os.path.join(mod_dir, '%s.md' % mod), 'w', encoding='utf-8') as f:
            f.write(render_module_md(mod, mrec, mrec['stats']))
    # 写主树
    with open(os.path.join(ai_dir, 'code-tree.md'), 'w', encoding='utf-8') as f:
        f.write(render_master_tree(modules, all_stats))
    # 写索引
    with open(os.path.join(ai_dir, 'code-tree-index.json'), 'w', encoding='utf-8') as f:
        json.dump(build_index(modules, all_stats, src_root), f, ensure_ascii=False, indent=1)
    print('modules: %d' % len(modules))
    print('TOTAL %s' % json.dumps(all_stats, ensure_ascii=False))
    print('output: %s' % os.path.join(ai_dir, 'code-tree.md'))
    print('output: %s' % os.path.join(ai_dir, 'code-tree-index.json'))
    print('output: %s/*.md (%d module files)' % (mod_dir, len(modules)))


if __name__ == '__main__':
    main()
