import os, sys, re
sys.path.insert(0, r'E:\github\iwant\ai\scripts')
import cpp_analyzer as ca
drift_files = []
rawstr_files = []
for root, dirs, files in os.walk(r'E:\github\iwant\src'):
    for f in files:
        if not f.endswith(('.cpp', '.h', '.hpp', '.c', '.cc', '.cxx', '.hxx')):
            continue
        p = os.path.join(root, f)
        try:
            text = ca.read_text(p)
        except Exception:
            continue
        masked = ca.scrub(ca.blank_preprocessor_lines(text))
        if masked.count('\n') != text.count('\n'):
            drift_files.append((p[17:], text.count('\n') - masked.count('\n')))
        if re.search(r'R"[a-zA-Z0-9_]*\(', text):
            rawstr_files.append(p[17:])
print('行号漂移文件数:', len(drift_files))
for x in sorted(drift_files, key=lambda x: -x[1])[:25]:
    print(' ', x)
print('含原始字符串 R"( 文件数:', len(rawstr_files))
for x in rawstr_files[:15]:
    print(' ', x)
