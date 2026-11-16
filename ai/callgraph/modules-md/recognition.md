# 模块 `recognition` 调用图

| 指标 | 数值 |
|---|---|
| functions | 17 |
| intra | 3 |
| out | 0 |
| in | 0 |
| unresolved | 0 |
| external | 1 |
| indirect | 0 |
| macro | 0 |
| callsites | 3 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Crecognition::my_init` | Crecognition | 1 |
| `Crecognition_tab::my_init` | Crecognition_tab | 1 |
| `Crecognition_intel_gpio::my_init` | Crecognition_intel_gpio | 1 |
| `Crecognition::~Crecognition` | Crecognition | 0 |
| `Crecognition::my_size` | Crecognition | 0 |
| `Crecognition::Crecognition` | Crecognition | 0 |
| `Crecognition_tab::~Crecognition_tab` | Crecognition_tab | 0 |
| `Crecognition_tab::my_size` | Crecognition_tab | 0 |
| `Crecognition_tab::Crecognition_tab` | Crecognition_tab | 0 |
| `Crecognition_intel_gpio::~Crecognition_intel_gpio` | Crecognition_intel_gpio | 0 |
| `Crecognition_intel_gpio::my_size` | Crecognition_intel_gpio | 0 |
| `Crecognition_intel_gpio::analysis` | Crecognition_intel_gpio | 0 |
| `Crecognition_intel_gpio::Crecognition_intel_gpio` | Crecognition_intel_gpio | 0 |
| `Cdata_information::Cdata_information` | Cdata_information | 0 |
| `main` | - | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Crecognition::Crecognition` | Crecognition | 1 |
| `Crecognition_tab::Crecognition_tab` | Crecognition_tab | 1 |
| `Crecognition_intel_gpio::Crecognition_intel_gpio` | Crecognition_intel_gpio | 1 |
| `Crecognition::~Crecognition` | Crecognition | 0 |
| `Crecognition::my_size` | Crecognition | 0 |
| `Crecognition::my_init` | Crecognition | 0 |
| `Crecognition_tab::~Crecognition_tab` | Crecognition_tab | 0 |
| `Crecognition_tab::my_size` | Crecognition_tab | 0 |
| `Crecognition_tab::my_init` | Crecognition_tab | 0 |
| `Crecognition_intel_gpio::~Crecognition_intel_gpio` | Crecognition_intel_gpio | 0 |
| `Crecognition_intel_gpio::my_size` | Crecognition_intel_gpio | 0 |
| `Crecognition_intel_gpio::my_init` | Crecognition_intel_gpio | 0 |
| `Crecognition_intel_gpio::analysis` | Crecognition_intel_gpio | 0 |
| `Cdata_information::Cdata_information` | Cdata_information | 0 |
| `main` | - | 0 |

## 跨模块出边 TOP

（无）


## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cdata_information | 1 | 0 | 0 |
| Crecognition | 4 | 1 | 1 |
| Crecognition_intel_gpio | 5 | 1 | 1 |
| Crecognition_tab | 4 | 1 | 1 |
| 自由函数 | 3 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 1 | 间接(函数指针)调用点: 0
