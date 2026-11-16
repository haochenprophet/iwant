# src/memory

> 统计: 2 文件 / 146 行 / 1 类 / 11 方法 / 11 自由函数 / 4 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 1 枚举

## memory/myMemory.cpp (106 行)

### 函数 (11)
- `CmyMemory::my_init()` — 定义  `L3`
- `CmyMemory::CmyMemory()` — 定义  `L11`
- `CmyMemory::CmyMemory()` — 定义  `L19`
- `CmyMemory::CmyMemory()` — 定义  `L28`
- `CmyMemory::begin()` — 定义  `L33`
- `CmyMemory::end()` — 定义  `L38`
- `CmyMemory::allot()` — 定义  `L43`
- `CmyMemory::isMe()` — 定义  `L67`
- `CmyMemory::delete_me()` — 定义  `L72`
- `CmyMemory::set_addr()` — 定义  `L82`
- `CmyMemory::set_addr()` — 定义  `L98`

> 完整签名见 JSON。

## memory/myMemory.h (40 行)

### 宏 #define (2)
- `MYMEMORY_H`（无值，通常为头文件守卫）  `L2`
- `MY_MEMORY_REALLOT` = 1  `L13`

### 枚举 enum MyMemoryType   `L6`
- None_T、Data_T、FileData_T

### 类 (1)
#### n_my_memory::CmyMemory  `L16`  `class`
- 继承: `Object`
- 成员变量 (4): `int allot_flag`、`char * addr`、`size_t size`、`int type`
- 方法 (11):
  - `int my_init(void *p=nullptr)` （声明） `L23`
  - `CmyMemory()` （声明） `L25`
  - `CmyMemory(int size)` （声明） `L26`
  - `~CmyMemory()` （声明） `L27`
  - `void *allot(size_t size=0,int type=0,int re_allot=0)` （声明） `L28`
  - `bool isMe(void * addr = nullptr, long id = 0,string name="")` （声明） `L29`
  - `void delete_me()` （声明） `L30`
  - `int set_addr(char *start,char *end,int type=0)` （声明） `L31`
  - `int set_addr(char *start,int size,int type=0)` （声明） `L32`
  - `char * begin()` （声明） `L33`
  - `char * end()` （声明） `L34`
