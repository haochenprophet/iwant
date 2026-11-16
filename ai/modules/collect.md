# src/collect

> 统计: 4 文件 / 193 行 / 2 类 / 10 方法 / 11 自由函数 / 3 成员变量 / 0 全局变量 / 4 宏 / 0 typedef / 0 枚举

## collect/collect.cpp (32 行)

### 宏 #define (1)
- `COLLECT_TEST` = 0  `L20`

### 函数 (4)
- `Ccollect::my_init()` — 定义  `L2`
- `Ccollect::Ccollect()` — 定义  `L9`
- `Ccollect::Ccollect()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccollect::my_init(void *p)`、`Ccollect::Ccollect()`、`Ccollect::~Ccollect()`、`int main(int argc, char *argv[])`

## collect/collect.h (20 行)

### 宏 #define (1)
- `COLLECT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_collect::Ccollect  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccollect()` （声明） `L9`
  - `~Ccollect()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## collect/collect_file.cpp (111 行)

### 宏 #define (1)
- `COLLECT_FILE_TEST` = 0  `L90`

### 函数 (7)
- `Ccollect_file::my_init()` — 定义  `L2`
- `Ccollect_file::Ccollect_file()` — 定义  `L9`
- `Ccollect_file::Ccollect_file()` — 定义  `L25`
- `Ccollect_file::func()` — 定义  `L31`
- `Ccollect_file::func()` — 定义  `L52`
- `Ccollect_file::collect()` — 定义  `L73`
- `main()` — 定义  `L95`

> 完整签名见 JSON。

## collect/collect_file.h (30 行)

### 宏 #define (1)
- `COLLECT_FILE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_collect_file::Ccollect_file  `L9`  `class`
- 继承: `Cfile`
- 成员变量 (3): `dir_t  * to_dir`、`dir_t  * from_dir`、`file_t * term`
- 方法 (6):
  - `Ccollect_file()` （声明） `L16`
  - `~Ccollect_file()` （声明） `L18`
  - `int my_init(void *p=nullptr)` （声明） `L19`
  - `size_t my_size()` （定义） `L20`
  - `int func(void* p)` （声明） `L21`
  - `int collect(dir_t * dir = nullptr , file_t * term = nullptr , dir_t* to_dir = nullptr, Ob…` （声明） `L23`
