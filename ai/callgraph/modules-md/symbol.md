# 模块 `symbol` 调用图

| 指标 | 数值 |
|---|---|
| functions | 17 |
| intra | 9 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 6 |
| indirect | 0 |
| macro | 0 |
| callsites | 9 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cbrackets::detectL` | Cbrackets | 3 |
| `Csymbol::my_init` | Csymbol | 1 |
| `Ccomment::my_init` | Ccomment | 1 |
| `Cbrackets::my_init` | Cbrackets | 1 |
| `Cbrackets::isHalf` | Cbrackets | 1 |
| `Cbrackets::getblock` | Cbrackets | 1 |
| `Cbrackets::detectR` | Cbrackets | 1 |
| `Csymbol::Csymbol` | Csymbol | 0 |
| `Ccomment::isMe` | Ccomment | 0 |
| `Ccomment::Ccomment` | Ccomment | 0 |
| `Cbrackets::~Cbrackets` | Cbrackets | 0 |
| `Cbrackets::getstart` | Cbrackets | 0 |
| `Cbrackets::getend` | Cbrackets | 0 |
| `Cbrackets::detect` | Cbrackets | 0 |
| `Cbrackets::Cbrackets` | Cbrackets | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cbrackets::getend` | Cbrackets | 3 |
| `Cbrackets::detect` | Cbrackets | 2 |
| `Csymbol::Csymbol` | Csymbol | 1 |
| `Ccomment::Ccomment` | Ccomment | 1 |
| `Cbrackets::getblock` | Cbrackets | 1 |
| `Cbrackets::Cbrackets` | Cbrackets | 1 |
| `Csymbol::my_init` | Csymbol | 0 |
| `Ccomment::my_init` | Ccomment | 0 |
| `Ccomment::isMe` | Ccomment | 0 |
| `Cbrackets::~Cbrackets` | Cbrackets | 0 |
| `Cbrackets::my_init` | Cbrackets | 0 |
| `Cbrackets::isHalf` | Cbrackets | 0 |
| `Cbrackets::getstart` | Cbrackets | 0 |
| `Cbrackets::detectR` | Cbrackets | 0 |
| `Cbrackets::detectL` | Cbrackets | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cbrackets | 10 | 7 | 7 |
| Ccomment | 3 | 1 | 1 |
| Csymbol | 2 | 1 | 1 |
| 自由函数 | 2 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 6 | 间接(函数指针)调用点: 0
