# 02 架构

## 分层视图

```
┌──────────────────────────────────────────────────────────────┐
│ L4 工具链/生成器   code · class · main · build · make · deploy│
├──────────────────────────────────────────────────────────────┤
│ L3 领域建模（词条为主）                                        │
│    car · satellite · airplane · warship · rocket · mars       │
│    ocean · home · spaceport · materiel · life · money        │
│    organization · sensor · radar · security · recognition     │
│    hardware · gui · algorithm · stock · deploy                │
├──────────────────────────────────────────────────────────────┤
│ L2 系统与基础设施                                             │
│    file · path · text · string · tree · time · uuid · bit     │
│    memory · socket · http · smtp · ftp · openssl · os         │
│    message · action · syntax · template · symbol · data       │
│    my_sql(public/sql) · error · debug · test · task           │
├──────────────────────────────────────────────────────────────┤
│ L1 语言基元（把"语言"本身对象化）                              │
│    keywords(262) · instruction(951) · operator(77)            │
│    cstdio(50) · cstdlib(37) · ctime(9) · ctype(33) · math(67) │
│    sql(185) · code(67)                                        │
├──────────────────────────────────────────────────────────────┤
│ L0 内核                                                       │
│    object/Object · Osetting · Ouuid · Otime · Orange          │
│    action/Action 表 · global/g_code.i 全局注册                │
└──────────────────────────────────────────────────────────────┘
```

**依赖方向**：一律向上依赖（L3→L0），通过 `#include "object/object.h"` 单点引入；`src/Makefile` 用 `-I./ -I../` 让 `"object/object.h"` 从 `src/` 根解析。包之间**没有头文件守卫以外的隔离机制**，也没有命名空间冲突防护（每个包独占 `n_<pkg>` 命名空间）。

## 三条核心机制

### 机制一：家族树 + 递归派发（对象怎么被找到）

```
Object
 ├─ family: std::list<void*>          ← 子对象/成员对象登记处
 └─ dispatch_cmd(argc, argv)
      1) argv[1] == "runme"  → dispatch_runme(argv[2])     // 魔法入口
      2) isMe(argv[1])       → deal_cmd(argc-1, &argv[1]) // 命中：自己处理
      3) 否则遍历 family，递归 dispatch_cmd 直到有人认领
```

实现在 `src/object/object.cpp:1437` `Object::dispatch_cmd`。**"谁认识这个词，谁就执行"** —— 这是整个框架的寻址模型：没有中心路由表，靠对象树的递归匹配。

### 机制二：全局注册（对象宇宙怎么被装配）

三个文件构成一条注册链：

```
src/all/all_h_include.h      (3070 行，include 了全部 3000+ 个头文件)
        ↓
src/global/g_code.i          (定义全局实例：Caction g_action; Cbits g_bits; ...)
        ↓
src/global/g_code_func.i     (void add_objects(Object *p) { p->addMe(g_action.where()); ... })
        ↓
Object::add_global_objects() → 把所有全局对象挂到当前对象家族下
```

只有 **7 个包** 拥有 `<pkg>_g_code.i` 这一级注册（实测）：

`cstdio`、`cstdlib`、`ctime`、`ctype`、`math`、`message`、`operator`

其余包（`car`、`satellite`……）**没有全局注册**，其对象需要业务代码手工 `new` + `addMe`。这一点决定了"为什么 3117 个类里只有几百个真正会被实例化"。

### 机制三：位掩码 action + 类型化命令（命令怎么被解释）

- `ACTION_T` = `unsigned long long`（64 位），每个动作占一位（`BIT0..BIT63`，见 `src/bit/bits_def.h`）。
- 动作表是 `Action[]`，以全 0 项结尾：`{action_class, t, r, action, name, help}`（`src/action/action_type.h`）。
- `EatcionRelation` 提供 `equal/large/and_/or_/bit_and/bit_or/bit_xor/...` 等比较语义，让"动作是否命中"可配置。
- 标准六步 `deal_cmd(argc, argv, action, count, min_input)`（`object.cpp:1470`）：**查输入 → 存 cmd → 读 `silent` → 取 action → 设参数 → 执行 `do_action`**。

## 包之间真实的数据流（生成一条新类）

```
batch/car.bat:  code class car_door
   │
   ├─ code.exe → dispatch_cmd: argv[1]="class" → isMe 命中 Cclass
   ├─ Cclass::deal_cmd → Cclass::create("car_door")
   │     ├─ replace_temp(1)            // [tag]→car_door, [TAG]→CAR_DOOR
   │     ├─ s_replace(cpp_temp, ...)   // 生成 .cpp 内容
   │     ├─ f_append("car_door.h")     // 若不存在则按 CLASS_H_TEMP 生成
   │     └─ f_append("car_door.cpp")   // 若不存在则按 CLASS_CPP_TEMP 生成
   └─ 产出 src/car/car_door.{h,cpp}
```

再由 `code <src_path> <pack_name> <action>`（`Ccode::deal_cmd`）把这批类登记进 `car_g_code.h/.i/_func.i`，最后 `code build create_all_h` 重建 `all/all_h_include.h`。

## 关键不变量（改代码前必须知道）

1. 类的 `name` 必须是 `C` + 文件名（`Ccar` in `car.*`），`alias` 是去前缀小写名（`car`）。
2. 每个 `.cpp` 末尾都有 `#if <TAG>_TEST` 的独立 `main`，默认 0；这是它唯一的"测试"。
3. `Object` 构造函数自动 `id = ++object_id`，并 `register_all_signal()`；**所有类继承 Object 就自动获得信号注册**。
4. 返回值语义贯穿全库：`<0` 无事可做 / `==0` 成功 / `>0` 失败（见 08-conventions C1）。
