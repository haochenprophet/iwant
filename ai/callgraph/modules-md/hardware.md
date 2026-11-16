# 模块 `hardware` 调用图

| 指标 | 数值 |
|---|---|
| functions | 176 |
| intra | 88 |
| out | 19 |
| in | 0 |
| unresolved | 7 |
| external | 26 |
| indirect | 0 |
| macro | 0 |
| callsites | 107 |

## 模块内被调用 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Cio::read` | Cio | 7 |
| `Cio::write` | Cio | 6 |
| `Ccmos::read` | Ccmos | 5 |
| `Cregister_hw::read` | Cregister_hw | 4 |
| `Cregister_hw::write` | Cregister_hw | 3 |
| `Cregister_hw::set` | Cregister_hw | 3 |
| `Cpcie_class_code::meaning` | Cpcie_class_code | 3 |
| `Ccmos::write` | Ccmos | 3 |
| `Ccmos::read_cmd` | Ccmos | 3 |
| `Cregister_hw::my_init` | Cregister_hw | 2 |
| `Cregister_hw::execute` | Cregister_hw | 2 |
| `Ccmos::write_cmd` | Ccmos | 2 |
| `Ccmos::or_cmd` | Ccmos | 2 |
| `Ccmos::dump_cmd` | Ccmos | 2 |
| `Ccmos::and_cmd` | Ccmos | 2 |

## 模块内调用方 TOP（调用点次数）

| 函数 | 类 | 调用点数 |
|---|---|---|
| `Ccmos::do_action` | Ccmos | 14 |
| `Cregister_hw::execute` | Cregister_hw | 8 |
| `Ccmos::set_action_parameter` | Ccmos | 6 |
| `Ccmos::deal_cmd` | Ccmos | 6 |
| `Cregister_hw::write` | Cregister_hw | 4 |
| `Cregister_hw::read` | Cregister_hw | 4 |
| `Ccmos::or_cmd` | Ccmos | 3 |
| `Ccmos::and_cmd` | Ccmos | 3 |
| `main` | - | 3 |
| `Cregister_hw::write_read` | Cregister_hw | 2 |
| `Cregister_hw::set` | Cregister_hw | 2 |
| `Cregister_hw::read_write` | Cregister_hw | 2 |
| `Cregister_hw::Cregister_hw` | Cregister_hw | 2 |
| `Ccmos::write` | Ccmos | 2 |
| `Ccmos::rw_cmd` | Ccmos | 2 |

## 跨模块出边 TOP

| 目标模块 | 调用点数 |
|---|---|
| object | 19 |

## 跨模块入边 TOP

（无）


## 类级摘要

| 类 | 方法数 | 出边调用点数 | 入边调用点数 |
|---|---|---|---|
| Cblock_dev | 3 | 1 | 1 |
| Cbus | 3 | 1 | 1 |
| Cclass_code | 1 | 0 | 0 |
| Cclock_tree | 4 | 1 | 1 |
| Ccmos | 16 | 45 | 24 |
| CcmosActionParameter | 1 | 0 | 0 |
| Ccpu | 3 | 1 | 1 |
| Cdevice | 3 | 1 | 1 |
| Cdriver | 3 | 1 | 1 |
| Cgpio | 25 | 1 | 1 |
| Chardware | 3 | 1 | 1 |
| Chardware_rw | 12 | 1 | 10 |
| Ci2c | 3 | 1 | 1 |
| Cio | 5 | 1 | 14 |
| CioHwRw | 12 | 10 | 1 |
| Cmemory | 3 | 1 | 1 |
| Cnetwork | 3 | 1 | 1 |
| Cpcie | 3 | 1 | 1 |
| Cpcie_class_code | 5 | 2 | 4 |
| Cpin | 3 | 1 | 1 |
| Cpower_tree | 4 | 1 | 1 |
| Cprotocol | 3 | 1 | 1 |
| Cregister_hw | 11 | 25 | 15 |
| Creset | 4 | 1 | 1 |
| Creset_tree | 4 | 1 | 1 |
| Cusb | 3 | 1 | 1 |
| Cvoltage | 4 | 1 | 1 |
| Cvoltage_tree | 4 | 1 | 1 |
| 自由函数 | 25 | 3 | 0 |

未解析调用点: 7 | 外部(容器/库)调用点: 26 | 间接(函数指针)调用点: 0
