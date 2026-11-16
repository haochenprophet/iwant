# src/class

> 统计: 2 文件 / 169 行 / 1 类 / 7 方法 / 8 自由函数 / 8 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 0 枚举

## class/class.cpp (122 行)

### 宏 #define (1)
- `CLASS_TEST` = 0  `L80`

### 函数 (8)
- `Cclass::my_init()` — 定义  `L3`
- `Cclass::Cclass()` — 定义  `L14`
- `Cclass::Cclass()` — 定义  `L19`
- `Cclass::Cclass()` — 定义  `L26`
- `Cclass::func()` — 定义  `L34`
- `Cclass::create()` — 定义  `L40`
- `Cclass::deal_cmd()` — 定义  `L51`
- `main()` — 定义  `L85`

> 完整签名见 JSON。

## class/class.h (47 行)

### 宏 #define (1)
- `CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_class::Cclass  `L8`  `class`
- 继承: `Cfile`
- 成员变量 (8): `string template_spec`、`string decl_spec`、`string tag`、`string declarators`、`std::list<string *> base_list`、`std::list<string *> member_list`、`std::list<string *> func_list`、`string cpp_temp`
- 方法 (7):
  - `Cclass()` （声明） `L21`
  - `Cclass(string tag)` （声明） `L23`
  - `~Cclass()` （声明） `L24`
  - `int my_init(void *p=nullptr)` （声明） `L26`
  - `int func(void *p=nullptr)` （声明） `L27`
  - `int create(void *p)` （声明） `L28`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L30`
