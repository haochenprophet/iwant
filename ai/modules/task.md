# src/task

> 统计: 2 文件 / 142 行 / 1 类 / 11 方法 / 12 自由函数 / 2 成员变量 / 0 全局变量 / 2 宏 / 1 typedef / 1 枚举

## task/task.cpp (100 行)

### 宏 #define (1)
- `TASK_TEST` = 0  `L85`

### 函数 (12)
- `Ctask::Ctask()` — 定义  `L3`
- `Ctask::Ctask()` — 定义  `L10`
- `Ctask::t_break()` — 定义  `L16`
- `Ctask::t_continue()` — 定义  `L22`
- `Ctask::t_stop()` — 定义  `L28`
- `Ctask::t_run()` — 定义  `L34`
- `Ctask::t_pend()` — 定义  `L40`
- `Ctask::t_complete()` — 定义  `L46`
- `Ctask::add_depend()` — 定义  `L52`
- `Ctask::create()` — 定义  `L58`
- `Ctask::free_task_list()` — 定义  `L73`
- `main()` — 定义  `L90`

> 完整签名见 JSON。

## task/task.h (42 行)

### 宏 #define (1)
- `IWANT_TASK_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum TaskStatus   `L6`
- TaskPlanning、TaskStopping、TaskRunning、TaskPending、TaskComplete、TaskContinue、TaskBreak

### typedef / using (1)
- `typedef std::list<Ctask *> LIST_DEPEND`  `L39`

### 类 (1)
#### n_task::Ctask  `L17`  `class`
- 继承: `Object`
- 成员变量 (2): `std::list<Ctask *> depend`、`std::list<Ctask *> task_list`
- 方法 (11):
  - `Ctask()` （声明） `L22`
  - `~Ctask()` （声明） `L24`
  - `int t_break(Object *t)` （声明） `L25`
  - `int t_continue(Object *t)` （声明） `L26`
  - `int t_stop(Object *t)` （声明） `L27`
  - `int t_run(Object *t)` （声明） `L28`
  - `int t_pend(Object *t)` （声明） `L29`
  - `int t_complete(Object *t)` （声明） `L30`
  - `int add_depend(Ctask * t)` （声明） `L31`
  - `Ctask *create(Ctask *depend=nullptr,char *name=nullptr,char *desp=nullptr,int task_count=…` （声明） `L32`
  - `void free_task_list()` （声明） `L33`
