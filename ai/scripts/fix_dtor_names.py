#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fix_dtor_names.py — 修正类限定析构的解析命名
问题：Object::~Object() 定义被解析为 name='Object'（与构造重名），
修复后 name='~Object'，使析构定义/调用正确归入 ~Object 方法节点。
同时保证解析器脚本与原始数据一致。
用法: python fix_dtor_names.py <raw_dir> [<file>...]
"""
import io
import json
import os
import re
import sys

DTOR_RE = re.compile(r'::~\s*([A-Za-z_]\w*)\s*\(')


def fix_one(path):
    with io.open(path, 'r', encoding='utf-8') as f:
        data = json.load(f)
    changed = 0
    for mod, mrec in data.get('modules', {}).items():
        for f, rec in mrec.get('files', {}).items():
            for fn in rec.get('functions', []):
                m = DTOR_RE.search(fn.get('sig', ''))
                if m and fn.get('name') != '~' + m.group(1):
                    fn['name'] = '~' + m.group(1)
                    changed += 1
            for c in rec.get('calls', []):
                m = DTOR_RE.search(c.get('sig', ''))
                if m and c.get('name') != '~' + m.group(1):
                    c['name'] = '~' + m.group(1)
                    changed += 1
    with io.open(path, 'w', encoding='utf-8') as f:
        json.dump(data, f, ensure_ascii=False, separators=(',', ':'))
    return changed


if __name__ == '__main__':
    raw_dir = sys.argv[1]
    files = sys.argv[2:] or [f for f in os.listdir(raw_dir)
                             if f.endswith('.json') and not f.startswith('test_')]
    total = 0
    for fn in files:
        p = os.path.join(raw_dir, fn)
        n = fix_one(p)
        total += n
        print('%s: fixed %d' % (fn, n))
    print('TOTAL fixed:', total)
