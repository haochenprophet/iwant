# src/path

> 统计: 2 文件 / 345 行 / 1 类 / 13 方法 / 16 自由函数 / 1 成员变量 / 0 全局变量 / 2 宏 / 1 typedef / 0 枚举

## path/path.cpp (309 行)

### 宏 #define (1)
- `PATH_TEST` = 0  `L4`

### 函数 (16)
- `Cpath::Cpath()` — 定义  `L7`
- `Cpath::Cpath()` — 定义  `L13`
- `Cpath::push_back()` — 定义  `L23`
- `Cpath::list()` — 定义  `L43`
- `Cpath::push_back()` — 定义  `L91`
- `Cpath::list()` — 定义  `L110`
- `Cpath::list()` — 定义  `L183`
- `Cpath::list()` — 定义  `L198`
- `Cpath::list()` — 定义  `L213`
- `Cpath::list_s()` — 定义  `L224`
- `Cpath::list_ws()` — 定义  `L229`
- `Cpath::display()` — 定义  `L234`
- `Cpath::display()` — 定义  `L248`
- `Cpath::my_clear()` — 定义  `L260`
- `Cpath::execute()` — 定义  `L274`
- `main()` — 定义  `L290`

> 完整签名见 JSON。

## path/path.h (36 行)

### 宏 #define (1)
- `PATH_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (1)
- `typedef std::list<DIR_T *> NAME_LIST`  `L7`

### 类 (1)
#### n_path::Cpath  `L10`  `class`
- 继承: `Object`
- 成员变量 (1): `NAME_LIST name_list`
- 方法 (13):
  - `Cpath()` （声明） `L14`
  - `~Cpath()` （声明） `L16`
  - `int push_back (dir_t * dir_name, file_t * file_name, int display = 0)` （声明） `L17`
  - `int list(DIR_T *dir_name,DIR_T *term=nullptr,int display=1,int to_list=1,int recursive=0)` （声明） `L18`
  - `int list(string *dir_name, string *term = nullptr, int display = 1, int to_list = 1, int …` （声明） `L19`
  - `int list(wstring *dir_name, wstring *term = nullptr, int display = 1, int to_list = 1, in…` （声明） `L20`
  - `int list(char* dir_name, char* term = nullptr, int display = 1, int to_list = 1, int recu…` （声明） `L22`
  - `int list_s(int display = 1, int to_list = 1, int recursive = 0)` （声明） `L24`
  - `int list_ws(int display, int to_list, int recursive = 0)` （声明） `L25`
  - `int my_clear(void *p=nullptr)` （声明） `L26`
  - `int display(void *p)` （声明） `L27`
  - `int display()` （声明） `L28`
  - `int execute(Object *o)` （声明） `L29`
