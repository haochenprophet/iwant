# 05 模块地图（101 个包）

> 实测口径：`.h/.cpp/.c` 文件数、行数、`class` 声明数（`src/**/*.h`）。合计 **6201 文件 / 122,667 行 / 3117 类**。
> **“词条型”** = 只有 `my_init()` 设 name/alias + 空析构 + 关闭的测试 main，不含算法。

## 全量表

| 包 | 文件 | 行 | 类 | 说明 |
| --- | ---: | ---: | ---: | --- |
| `action` | 3 | 66 | 3 | 动作表与位运算语义：`Action`/`ACTION_T`/`EatcionRelation` 定义（命令解析的地基） |
| `airplane` | 48 | 960 | 24 | 飞机子系统词条：机翼/襟翼/座舱/发动机/起落架…（24 类） |
| `algorithm` | 18 | 1526 | 13 | 算法域词条（排序/搜索等命名占位） |
| `all` | 1 | 3070 | 0 | **单一巨型头文件** `all_h_include.h`（3070 行，由 `code build create_all_h` 生成） |
| `bit` | 3 | 229 | 1 | `BIT0..BIT63` 位常量（`bits_def.h`），action 掩码的原子 |
| `block` | 2 | 35 | 1 | 代码块语法对象（`{...}`） |
| `build` | 5 | 141 | 3 | 构建域：`create_all_h` 动作 + `Cbuild_makefile` 的 Makefile 块模型 |
| `but` | 2 | 39 | 1 | 语法连词词条 |
| `car` | 326 | 6509 | 163 | 汽车子系统词条（发动机/车门/雷达/胎压/空调…163 类），域建模的最大样板 |
| `class` | 2 | 136 | 1 | **元类** `Cclass`：读 `CLASS_H_TEMP`/`CLASS_CPP_TEMP` 生成 `.h`/`.cpp` |
| `code` | 134 | 2951 | 67 | **生成器主力**（67 类）：`code_class`/`code_function`/`code_file`/`code_makefile`… 构成“代码即数据”的词汇表 |
| `collect` | 4 | 152 | 2 | 采集器基类 |
| `command` | 10 | 129 | 5 | 命令域词条（命令/参数/执行） |
| `company` | 2 | 28 | 1 | 公司组织词条 |
| `control` | 2 | 39 | 1 | 控制域词条 |
| `cstdio` | 102 | 2298 | 50 | `printf/fopen/fgets` 等 **50 个 libc IO 函数对象**（已全局注册） |
| `cstdlib` | 76 | 1711 | 37 | `malloc/atoi/exit` 等 **37 个 libc 函数对象**（已全局注册） |
| `ctime` | 20 | 423 | 9 | `time/localtime/strftime` 等 9 个时间函数对象（已全局注册） |
| `ctype` | 68 | 1329 | 33 | `isalpha/toupper` 等 33 个字符分类函数对象（已全局注册） |
| `data` | 3 | 1655 | 3 | `Udata` union + `data_buffer`（1655 行）：全库的“任意类型槽位” |
| `database` | 2 | 39 | 1 | 数据库域词条 |
| `debug` | 2 | 39 | 1 | 调试辅助 |
| `deploy` | 80 | 1600 | 40 | 部署域（40 类：打包/发布/环境） |
| `dictionary` | 4 | 56 | 2 | 字典容器（含 `hello.cpp` 示例） |
| `die` | 2 | 24 | 1 | 进程终止对象 |
| `earth` | 100 | 2000 | 50 | 地球地理域（50 类：大陆/海洋/气候…） |
| `engine` | 2 | 40 | 1 | 引擎词条 |
| `error` | 2 | 39 | 1 | 错误对象 |
| `ex_func` | 3 | 79 | 1 | 外部函数注册（`ex_func` 链表） |
| `field` | 2 | 39 | 1 | 字段/列对象 |
| `file` | 5 | 1053 | 3 | **`Cfile`**：文件读写/追加/存在性判断（1053 行），生成器的落盘出口 |
| `ftp` | 2 | 24 | 1 | FTP 客户端对象 |
| `func` | 2 | 28 | 1 | 函数对象的元类型 |
| `global` | 3 | 45 | 1 | **全局注册三件套** `g_code.h/.i/_func.i`：把全局实例挂进 Object 家族 |
| `gui` | 4 | 80 | 2 | 界面域词条 |
| `hardware` | 49 | 2166 | 28 | 硬件域（28 类：CPU/内存/总线/传感器接口） |
| `home` | 108 | 2138 | 54 | 智能家居域（54 类：空调/灯光/厨房/门锁…） |
| `http` | 3 | 133 | 1 | HTTP 请求对象（133 行） |
| `input` | 3 | 95 | 2 | `Oinput` 输入抽象（读入点/缓冲） |
| `instruction` | 1902 | 26628 | 951 | **x86/AVX 指令词条 951 个**（26,628 行）：`AAA/ADC/VMOVDQA32…`，每个一条类 |
| `iwant` | 2 | 118 | 1 | `Ciwant` 应用外壳：`who()` 自我介绍，是“程序人格”的落点 |
| `keywords` | 524 | 6330 | 262 | **262 个多语言关键字对象**：C++/PHP/Python/Java/SQL 关键字各一类 |
| `key_value` | 2 | 86 | 2 | 键值对 |
| `life` | 54 | 1080 | 27 | 生命域（27 类：生老病死/繁衍/进化） |
| `locate` | 2 | 71 | 1 | 定位对象 |
| `main` | 3 | 118 | 1 | **`Cmain`**：给已存在的类文件补 `#if TAG_TEST` 测试 `main` |
| `make` | 4 | 54 | 2 | `make`/`Makefile` 对象（配合 `build`） |
| `mars` | 32 | 640 | 16 | 火星基地域（16 类） |
| `materiel` | 76 | 1520 | 38 | 物资/装备域（38 类） |
| `math` | 136 | 5055 | 67 | **67 个数学函数对象** + `math_g_code.i`（5055 行，已全局注册） |
| `memory` | 2 | 125 | 1 | 内存域（分配/读写） |
| `message` | 120 | 2376 | 59 | **59 类消息对象**（`*_message`：动作/地址/天气…，已全局注册） |
| `money` | 44 | 880 | 22 | 货币/金融域（22 类） |
| `my_sql` | 3 | 650 | 1 | **`Cmy_sql`**：MySQL 连接/查询/建库建表/UUID 校验（650 行） |
| `net` | 2 | 18 | 1 | 网络域词条 |
| `node` | 2 | 35 | 1 | 节点对象 |
| `object` | 6 | 2106 | 16 | **内核**（16 类 / 2106 行）：`Object`/`Osetting`/家族/action/内存/模板替换 |
| `ocean` | 192 | 3840 | 96 | 海洋与船舶域（96 类：洋流/潮汐/船舶/港口） |
| `openssl` | 4 | 80 | 2 | 加解密对象（RSA/SHA 等，配合 `sample-code/rsa`） |
| `operator` | 156 | 3307 | 77 | **77 个 C++ 运算符对象**（`+`/`->`/`<<`…，已全局注册） |
| `organization` | 4 | 78 | 2 | 组织树对象（与 `database/organization.sql` 对应） |
| `os` | 2 | 77 | 1 | 平台宏与系统头：`WINDOWS_OS`/`LINUX_OS`，Windows 下带 `mysql.h` |
| `output` | 6 | 221 | 3 | 输出对象（控制台/流） |
| `path` | 2 | 287 | 1 | **`Cpath`**：URL/路径解析（287 行），生成器遍历文件列表的入口 |
| `plan` | 2 | 28 | 1 | 计划对象 |
| `power` | 2 | 40 | 1 | 能源域词条 |
| `public` | 4 | 78 | 2 | 公共基类：`Csql`（SQL 操作枚举）与 `Cinstruction` |
| `radar` | 116 | 2320 | 58 | 雷达域（58 类：相控阵/多普勒/回波…） |
| `recognition` | 6 | 214 | 4 | 识别域（人脸/语音/图像命名占位） |
| `register` | 2 | 39 | 1 | 寄存器对象 |
| `relation` | 3 | 85 | 2 | `Orelation`：对象间关系 |
| `rocket` | 38 | 760 | 19 | 火箭域（19 类：箭体/推进/分离） |
| `satellite` | 336 | 6709 | 168 | 卫星域（168 类：星务/载荷/姿态/电源/测控） |
| `security` | 362 | 7240 | 181 | 安全域（181 类：`security_*` 细分：加密/入侵/策略/权限…） |
| `sensor` | 180 | 3546 | 87 | 传感器域（87 类：温湿度/压力/加速度/血氧…） |
| `size` | 2 | 40 | 1 | 尺寸对象 |
| `smtp` | 2 | 24 | 1 | 邮件发送对象 |
| `socket` | 2 | 379 | 1 | socket 跨平台封装（379 行：`SOCKET`/`socklen_t` 归一化） |
| `source` | 2 | 28 | 1 | 源码对象 |
| `spaceport` | 114 | 2280 | 57 | 航天港/发射场域（57 类：塔架/燃料/测控/舱室） |
| `sql` | 370 | 4440 | 185 | **185 个 SQL 关键字对象**（`sql_SELECT`/`sql_JOIN`…） |
| `status` | 2 | 40 | 1 | 状态对象 |
| `step` | 2 | 24 | 1 | 步骤对象 |
| `stock` | 7 | 1612 | 3 | 股票/行情（3 类 / 1612 行，含数据抓取尝试） |
| `stratagem` | 2 | 28 | 1 | 策略对象 |
| `string` | 44 | 858 | 22 | 字符串工具（22 类：截取/替换/编码） |
| `symbol` | 6 | 285 | 3 | 符号表（3 类） |
| `syntax` | 3 | 31 | 1 | 语法常量：`CLASS_SYNTAX`/`MAKE_SYNTAX`/`TAG_SYNTAX` 等 |
| `system` | 2 | 18 | 1 | 系统对象 |
| `tag` | 2 | 24 | 1 | `CtagItem`：tag/temp/replace 三元组 |
| `task` | 2 | 118 | 1 | 任务对象 |
| `template` | 5 | 69 | 2 | 模板包：`temp_def.h` 母版宏 + `template_object` |
| `test` | 2 | 45 | 1 | 测试对象 |
| `text` | 16 | 576 | 10 | 文本处理（10 类：`text_line`/`text_split`/`text_encode`/`text_type`） |
| `time` | 8 | 368 | 5 | 时间域（5 类：时间点/区间/时间树） |
| `tree` | 8 | 248 | 5 | 树结构（`Ctree`/`tree_node`/`tree_func`） |
| `uri` | 5 | 86 | 2 | URI 解析（schema/host/path/query） |
| `uuid` | 3 | 97 | 2 | UUID 生成（`GUID_LEN=64`，Linux 用 `uuid/uuid.h`，Windows 用 `objbase.h`） |
| `wait` | 2 | 48 | 1 | 等待对象 |
| `warning` | 2 | 39 | 1 | 警告对象 |
| `warship` | 44 | 880 | 22 | 军舰域（22 类：舰体/雷达/声呐/武备） |

## 按职责分组（读懂这张表就读懂全库）

### 内核与元编程（6 个包，真正的引擎）
`object` · `class` · `code` · `main` · `build` · `make`
→ 合计约 5,400 行，承载“对象模型 + 代码生成 + 构建驱动”。**改动风险最高**。

### 语言基元（把语言本身变成数据）
`keywords`(262) · `instruction`(951) · `operator`(77) · `cstdio`(50) · `cstdlib`(37) · `ctime`(9) · `ctype`(33) · `math`(67) · `sql`(185) · `code`(67)
→ 共约 **1,738 类**，占全库 56%。它们是“词汇宇宙”的字典，等待被生成器/解释器消费。

### 系统与基础设施
`file` · `path` · `text` · `string` · `tree` · `time` · `uuid` · `bit` · `memory` · `os` · `data` · `action` · `syntax` · `template` · `symbol` · `global` · `message` · `socket` · `http` · `smtp` · `ftp` · `openssl` · `my_sql` · `public` · `error` · `debug` · `test` · `task` · `input` · `output`

### 领域建模（词条为主，规模最大）
`car`(163) · `satellite`(168) · `security`(181) · `ocean`(96) · `sensor`(87) · `spaceport`(57) · `radar`(58) · `home`(54) · `earth`(50) · `deploy`(40) · `materiel`(38) · `hardware`(28) · `life`(27) · `airplane`(24) · `money`(22) · `warship`(22) · `rocket`(19) · `mars`(16) · `algorithm`(13) · `company`/`organization`/`power`/`plan`/`status`/`size`/`step`/`wait`/`warning`/`die`/`locate`/`engine`/`control`/`command`/`collect`/`stratagem`/`recognition` 等

### 全局注册的 7 个包（决定“谁在宇宙里”）
`cstdio` · `cstdlib` · `ctime` · `ctype` · `math` · `message` · `operator`
→ 只有它们有 `<pkg>_g_code.i`/`_func.i`，会被 `Object::add_global_objects()` 挂进家族树。

## 哪些包真的被编译（关键）

`src/Makefile` 的 `source_code` 只列了：
`*.cpp math/*.cpp file/*.cpp code/*.cpp stock/*.cpp time/*.cpp symbol/*.cpp make/*.cpp build/*.cpp my_sql/*.cpp home/*.cpp syntax/*.cpp`

→ **默认主程序不含 `car`/`satellite`/`instruction`/`keywords` 等域包**。要编译某个域包，进它自己的目录 `make`（如 `src/car/Makefile`，其 `source_code` 在核心子集上再加 `*.cpp`，即该包全部类）。

## 包内文件命名法

以 `car` 为例（326 文件 / 163 类）：

| 模式 | 含义 |
| --- | --- |
| `car.h`/`car.cpp` | 包根类 `Ccar`（alias `car`） |
| `car_<名词>.h`/`.cpp` | 子类 `Ccar_<名词>`（alias `car_<名词>`） |
| `<pkg>_action.h`/`.i` | 包私有的动作枚举 + `Action[]` 表（仅部分包有） |
| `<pkg>_g_code.h`/`.i`/`_func.i` | 全局注册三件套（仅 7 个包有） |
| `Makefile` | 包级构建（仅部分包有，如 `car`） |

## 找功能的经验法则

1. 想在 C++ 里“造类/生成代码” → `class`、`code`、`template`
2. 想读写文件/路径 → `file`、`path`、`text`
3. 想碰数据库 → `my_sql`、`public/sql.h`、`database/`
4. 想看“对象怎么被路由执行” → `object`（`dispatch_cmd`）+ `action`
5. 想找某个实体的建模 → 按名词猜包名（`sensor_temperature` → `src/sensor/`）
6. 想确认某类是否存在 → `ai/modules/<pkg>.md` 或 `ai/callgraph/functions.json`
