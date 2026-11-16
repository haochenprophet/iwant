# 模块 `tree` 调用图

| 指标 | 数值 |
|---|---|
| functions | 29 |
| intra | 10 |
| out | 8 |
| in | 0 |
| unresolved | 0 |
| external | 3 |
| indirect | 0 |
| macro | 0 |
| callsites | 18 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ctree_func::runme` | Ctree_func | 2 |
| `tree_node::traversal` | tree_node | 1 |
| `tree_node::get_id` | tree_node | 1 |
| `tree_node::add_sub_node` | tree_node | 1 |
| `Ctree::my_init` | Ctree | 1 |
| `Ctree::add` | Ctree | 1 |
| `Ctree_node::my_init` | Ctree_node | 1 |
| `Ctree_func::my_init` | Ctree_func | 1 |
| `Ctree_db::my_init` | Ctree_db | 1 |
| `tree_node::tree_node` | tree_node | 0 |
| `tree_node::sub_node_count` | tree_node | 0 |
| `tree_node::operator +=` | tree_node | 0 |
| `Ctree::~Ctree` | Ctree | 0 |
| `Ctree::traversal` | Ctree | 0 |
| `Ctree::operator +=` | Ctree | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `tree_node::traversal` | tree_node | 4 |
| `Ctree::traversal` | Ctree | 3 |
| `tree_node::operator +=` | tree_node | 2 |
| `tree_node::add_sub_node` | tree_node | 1 |
| `Ctree::operator +=` | Ctree | 1 |
| `Ctree::add` | Ctree | 1 |
| `Ctree::Ctree` | Ctree | 1 |
| `Ctree_node::Ctree_node` | Ctree_node | 1 |
| `Ctree_func::runme` | Ctree_func | 1 |
| `Ctree_func::Ctree_func` | Ctree_func | 1 |
| `Ctree_db::Ctree_db` | Ctree_db | 1 |
| `main` | - | 1 |
| `tree_node::tree_node` | tree_node | 0 |
| `tree_node::sub_node_count` | tree_node | 0 |
| `tree_node::get_id` | tree_node | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| memory | 4 |
| path | 3 |
| object | 1 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ctree | 7 | 6 | 2 |
| Ctree_db | 3 | 1 | 1 |
| Ctree_func | 5 | 2 | 3 |
| Ctree_node | 4 | 1 | 1 |
| tree_node | 6 | 7 | 3 |
| 自由函数 | 4 | 1 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 3 | 间接(函数指针)调用点: 0
