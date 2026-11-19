# 采集与生成工具

本目录保存把 CSDN 博客整理成本知识库的脚本，**可以完全复现**当前内容：重新抓取一次，生成的 Markdown 与现在交付的文件逐字节一致。

## 环境

- Python 3.9+
- 第三方依赖：`lxml`（解析 HTML）

```bash
pip install lxml
```

## 一键构建

```bash
python build.py                 # 抓取 + 解析 + 落盘 + 生成索引
python build.py --skip-fetch    # 只用本地缓存重建（离线）
python build.py --force         # 强制重新抓取全部文章
```

缓存默认放在 `../.cache/`，可用环境变量 `KB_CACHE` 指定到别处：

```bash
KB_CACHE=D:/tmp/kb-cache python build.py
```

## 各脚本职责

| 脚本 | 输入 | 输出 |
| --- | --- | --- |
| `fetch.py` | CSDN 博客 | `../.cache/ids.txt`、`../.cache/html/<文章ID>.html` |
| `convert.py` | 缓存的 HTML | `build.json`（标题、日期、链接、Markdown 正文） |
| `finalize.py` | `build.json` | 各系列目录下的文章 `.md`、`../articles.json` |
| `index_gen.py` | 已落盘的文章 | `../../INDEX.md`、`../../TOPICS.md` |
| `kbconfig.py` | — | 路径、系列映射、中文数字表等公共常量 |

`build.py` 依次调用前四个。

## 处理规则（改脚本前请先看）

1. **抓取**：CSDN 对文章详情页有风控，必须先访问一次列表页拿到 Cookie，并带上完整的浏览器请求头，否则返回 HTTP 521。`fetch.py` 已经这样做，并在失败时重试 4 次。
2. **正文定位**：只取 `<div id="content_views">`，然后剔除其中的推荐位、打赏、"阅读更多"等节点。
3. **结构转换**：标题层级、段落、`<pre>` → 围栏代码块、`<table>` → Markdown 表格、引用块、列表、分隔线。原文大量使用 ASCII 示意图，因此代码块内容一律不做重排。
4. **代码块语言**：CSDN 匿名访问时 `<pre>` 上没有语言标记，`guess_lang()` 用保守的启发式猜 `c` / `bash`，识别到制表符画线就当作示意图、不加语言标记。
5. **文件名**：去掉系列前缀，非法字符替换为 `-`，空格替换为 `-`，保证 Markdown 相对链接可用。
6. **篇号**：取标题里的中文序号（一、二……）。原文有两篇都编号「六」，重复序号按发布时间追加 `a`/`b` 后缀，因此有 `06` 与 `06a`。
7. **幂等**：`finalize.py` 只写文章 `.md` 和 `articles.json`，**不会覆盖各系列的 `README.md`**（那是人工维护的导读）。
8. **正文不改写**：只做格式转换，不改句子、不删段落、不总结。校验方式是比较原文 HTML 与生成 Markdown 的中文字符数——46 篇全部 1:1 相等。

## 目录约定

```
_meta/
├── articles.json     ← 文章元数据（标题/系列/篇号/日期/原文链接/字数）
├── .cache/           ← 抓取缓存，可安全删除（已 gitignore）
└── tools/            ← 本目录脚本 + build.json 中间产物
```
