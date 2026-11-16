# 模块 `gui` 调用图

| 指标 | 数值 |
|---|---|
| functions | 10 |
| intra | 2 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 0 |
| indirect | 0 |
| macro | 0 |
| callsites | 2 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cgui::my_init` | Cgui | 1 |
| `Cgui_qt::my_init` | Cgui_qt | 1 |
| `Cgui::~Cgui` | Cgui | 0 |
| `Cgui::my_size` | Cgui | 0 |
| `Cgui::Cgui` | Cgui | 0 |
| `Cgui_qt::~Cgui_qt` | Cgui_qt | 0 |
| `Cgui_qt::my_size` | Cgui_qt | 0 |
| `Cgui_qt::Cgui_qt` | Cgui_qt | 0 |
| `main` | - | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cgui::Cgui` | Cgui | 1 |
| `Cgui_qt::Cgui_qt` | Cgui_qt | 1 |
| `Cgui::~Cgui` | Cgui | 0 |
| `Cgui::my_size` | Cgui | 0 |
| `Cgui::my_init` | Cgui | 0 |
| `Cgui_qt::~Cgui_qt` | Cgui_qt | 0 |
| `Cgui_qt::my_size` | Cgui_qt | 0 |
| `Cgui_qt::my_init` | Cgui_qt | 0 |
| `main` | - | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cgui | 4 | 1 | 1 |
| Cgui_qt | 4 | 1 | 1 |
| 自由函数 | 2 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 0 | 间接(函数指针)调用点: 0
