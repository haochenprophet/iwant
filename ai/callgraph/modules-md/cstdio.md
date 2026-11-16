# 模块 `cstdio` 调用图

| 指标 | 数值 |
|---|---|
| functions | 256 |
| intra | 51 |
| out | 0 |
| in | 0 |
| unresolved | 5 |
| external | 54 |
| indirect | 0 |
| macro | 0 |
| callsites | 51 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cvsscanf::my_init` | Cvsscanf | 1 |
| `Cvsprintf::my_init` | Cvsprintf | 1 |
| `Cvsnprintf::my_init` | Cvsnprintf | 1 |
| `Cvscanf::my_init` | Cvscanf | 1 |
| `Cvprintf::my_init` | Cvprintf | 1 |
| `Cvfscanf::my_init` | Cvfscanf | 1 |
| `Cvfprintf::my_init` | Cvfprintf | 1 |
| `Cungetc::my_init` | Cungetc | 1 |
| `Ctmpnam::my_init` | Ctmpnam | 1 |
| `Ctmpfile::my_init` | Ctmpfile | 1 |
| `Cstdout::my_init` | Cstdout | 1 |
| `Cstdin::my_init` | Cstdin | 1 |
| `Cstderr::my_init` | Cstderr | 1 |
| `Csscanf::my_init` | Csscanf | 1 |
| `Csprintf::my_init` | Csprintf | 1 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cvsscanf::Cvsscanf` | Cvsscanf | 1 |
| `Cvsprintf::Cvsprintf` | Cvsprintf | 1 |
| `Cvsnprintf::Cvsnprintf` | Cvsnprintf | 1 |
| `Cvscanf::Cvscanf` | Cvscanf | 1 |
| `Cvprintf::Cvprintf` | Cvprintf | 1 |
| `Cvfscanf::Cvfscanf` | Cvfscanf | 1 |
| `Cvfprintf::Cvfprintf` | Cvfprintf | 1 |
| `Cungetc::Cungetc` | Cungetc | 1 |
| `Ctmpnam::Ctmpnam` | Ctmpnam | 1 |
| `Ctmpfile::Ctmpfile` | Ctmpfile | 1 |
| `Cstdout::Cstdout` | Cstdout | 1 |
| `Cstdin::Cstdin` | Cstdin | 1 |
| `Cstderr::Cstderr` | Cstderr | 1 |
| `Csscanf::Csscanf` | Csscanf | 1 |
| `Csprintf::Csprintf` | Csprintf | 1 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cclearerr | 5 | 1 | 1 |
| Ccstdio | 5 | 2 | 1 |
| Cfclose | 5 | 1 | 1 |
| Cfeof | 5 | 1 | 1 |
| Cferror | 5 | 1 | 1 |
| Cfflush | 5 | 1 | 1 |
| Cfgetc | 5 | 1 | 1 |
| Cfgetpos | 5 | 1 | 1 |
| Cfgets | 5 | 1 | 1 |
| Cfopen | 5 | 1 | 1 |
| Cfprintf | 5 | 1 | 1 |
| Cfputc | 5 | 1 | 1 |
| Cfputs | 5 | 1 | 1 |
| Cfread | 5 | 1 | 1 |
| Cfreopen | 5 | 1 | 1 |
| Cfscanf | 5 | 1 | 1 |
| Cfseek | 5 | 1 | 1 |
| Cfsetpos | 5 | 1 | 1 |
| Cftell | 5 | 1 | 1 |
| Cfwrite | 5 | 1 | 1 |
| Cgetc | 5 | 1 | 1 |
| Cgetchar | 5 | 1 | 1 |
| Cgets | 5 | 1 | 1 |
| Cperror | 5 | 1 | 1 |
| Cprintf | 5 | 1 | 1 |
| Cputc | 5 | 1 | 1 |
| Cputchar | 5 | 1 | 1 |
| Cputs | 5 | 1 | 1 |
| Cremove | 5 | 1 | 1 |
| Crename | 5 | 1 | 1 |
| Crewind | 5 | 1 | 1 |
| Cscanf | 5 | 1 | 1 |
| Csetbuf | 5 | 1 | 1 |
| Csetvbuf | 5 | 1 | 1 |
| Csnprintf | 5 | 1 | 1 |
| Csprintf | 5 | 1 | 1 |
| Csscanf | 5 | 1 | 1 |
| Cstderr | 4 | 1 | 1 |
| Cstdin | 4 | 1 | 1 |
| Cstdout | 4 | 1 | 1 |
| Ctmpfile | 5 | 1 | 1 |
| Ctmpnam | 5 | 1 | 1 |
| Cungetc | 5 | 1 | 1 |
| Cvfprintf | 5 | 1 | 1 |
| Cvfscanf | 5 | 1 | 1 |
| Cvprintf | 5 | 1 | 1 |
| Cvscanf | 5 | 1 | 1 |
| Cvsnprintf | 5 | 1 | 1 |
| Cvsprintf | 5 | 1 | 1 |
| Cvsscanf | 5 | 1 | 1 |
| 自由函数 | 9 | 0 | 1 |

未解析调用点: 5 | 外部(容器/库)调用点: 54 | 间接(函数指针)调用点: 0
