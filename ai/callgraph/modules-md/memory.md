# 模块 `memory` 调用图

| 指标 | 数值 |
|---|---|
| functions | 9 |
| intra | 5 |
| out | 1 |
| in | 47 |
| unresolved | 0 |
| external | 1 |
| indirect | 0 |
| macro | 0 |
| callsites | 6 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `CmyMemory::end` | CmyMemory | 23 |
| `CmyMemory::begin` | CmyMemory | 23 |
| `CmyMemory::my_init` | CmyMemory | 2 |
| `CmyMemory::delete_me` | CmyMemory | 2 |
| `CmyMemory::allot` | CmyMemory | 2 |
| `CmyMemory::~CmyMemory` | CmyMemory | 0 |
| `CmyMemory::set_addr` | CmyMemory | 0 |
| `CmyMemory::isMe` | CmyMemory | 0 |
| `CmyMemory::CmyMemory` | CmyMemory | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `CmyMemory::CmyMemory` | CmyMemory | 3 |
| `CmyMemory::~CmyMemory` | CmyMemory | 1 |
| `CmyMemory::isMe` | CmyMemory | 1 |
| `CmyMemory::allot` | CmyMemory | 1 |
| `CmyMemory::set_addr` | CmyMemory | 0 |
| `CmyMemory::my_init` | CmyMemory | 0 |
| `CmyMemory::end` | CmyMemory | 0 |
| `CmyMemory::delete_me` | CmyMemory | 0 |
| `CmyMemory::begin` | CmyMemory | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 1 |

## 跨模块入边 TOP

| 来源模块 | 调用点数 |
|---|---|
| object | 22 |
| algorithm | 6 |
| text | 6 |
| tree | 4 |
| build | 4 |
| path | 4 |
| file | 1 |

## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| CmyMemory | 9 | 6 | 52 |

未解析调用点: 0 | 外部(容器/库)调用点: 1 | 间接(函数指针)调用点: 0
