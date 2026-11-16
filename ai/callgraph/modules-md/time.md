# 模块 `time` 调用图

| 指标 | 数值 |
|---|---|
| functions | 36 |
| intra | 5 |
| out | 4 |
| in | 0 |
| unresolved | 0 |
| external | 23 |
| indirect | 0 |
| macro | 0 |
| callsites | 9 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `TimePoint::adjust_status` | TimePoint | 1 |
| `Ctimetree::my_init` | Ctimetree | 1 |
| `Ctimepoint::my_init` | Ctimepoint | 1 |
| `Ctimeline::my_init` | Ctimeline | 1 |
| `Ctimeline::adjust_status` | Ctimeline | 1 |
| `TimePoint::~TimePoint` | TimePoint | 0 |
| `TimePoint::now` | TimePoint | 0 |
| `TimePoint::add` | TimePoint | 0 |
| `TimePoint::TimePoint` | TimePoint | 0 |
| `Ctimetree::~Ctimetree` | Ctimetree | 0 |
| `Ctimetree::my_size` | Ctimetree | 0 |
| `Ctimetree::Ctimetree` | Ctimetree | 0 |
| `Ctimer::t_time` | Ctimer | 0 |
| `Ctimer::t_strftime` | Ctimer | 0 |
| `Ctimer::t_mktime` | Ctimer | 0 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `TimePoint::adjust_status` | TimePoint | 1 |
| `TimePoint::add` | TimePoint | 1 |
| `Ctimetree::Ctimetree` | Ctimetree | 1 |
| `Ctimer::func` | Ctimer | 1 |
| `Ctimer::Ctimer` | Ctimer | 1 |
| `Ctimepoint::Ctimepoint` | Ctimepoint | 1 |
| `Ctimeline::adjust_status` | Ctimeline | 1 |
| `Ctimeline::add` | Ctimeline | 1 |
| `Ctimeline::Ctimeline` | Ctimeline | 1 |
| `TimePoint::~TimePoint` | TimePoint | 0 |
| `TimePoint::now` | TimePoint | 0 |
| `TimePoint::TimePoint` | TimePoint | 0 |
| `Ctimetree::~Ctimetree` | Ctimetree | 0 |
| `Ctimetree::my_size` | Ctimetree | 0 |
| `Ctimetree::my_init` | Ctimetree | 0 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| path | 2 |
| object | 1 |
| ex_func | 1 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Ctimeline | 6 | 3 | 2 |
| Ctimepoint | 4 | 1 | 1 |
| Ctimer | 11 | 2 | 0 |
| Ctimetree | 4 | 1 | 1 |
| TimePoint | 5 | 2 | 1 |
| 自由函数 | 6 | 0 | 0 |

未解析调用点: 0 | 外部(容器/库)调用点: 23 | 间接(函数指针)调用点: 0
