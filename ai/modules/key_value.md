# src/key_value

> 统计: 2 文件 / 107 行 / 2 类 / 9 方法 / 9 自由函数 / 6 成员变量 / 0 全局变量 / 2 宏 / 1 typedef / 0 枚举

## key_value/key_value.cpp (66 行)

### 宏 #define (1)
- `KEY_VALUE_TEST` = 0  `L54`

### 函数 (9)
- `Ckey_value::my_init()` — 定义  `L2`
- `Ckey_value::Ckey_value()` — 定义  `L9`
- `Ckey_value::Ckey_value()` — 定义  `L14`
- `key_value::key_value()` — 定义  `L19`
- `key_value::key_value()` — 定义  `L24`
- `key_value::my_init()` — 定义  `L29`
- `key_value::is_me()` — 定义  `L37`
- `key_value::set()` — 定义  `L44`
- `main()` — 定义  `L59`

> 完整签名见 JSON。

## key_value/key_value.h (41 行)

### 宏 #define (1)
- `KEY_VALUE_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (1)
- `typedef std::list<key_value *> key_value_list`  `L24`

### 类 (2)
#### n_key_value::key_value  `L8`  `class`
- 成员变量 (5): `void * key`、`size_t key_size`、`void * value`、`size_t value_size`、`int type`
- 方法 (5):
  - `key_value()` （声明） `L16`
  - `~key_value()` （声明） `L18`
  - `void my_init()` （声明） `L19`
  - `bool is_me(void* key, size_t size)` （声明） `L20`
  - `void set(void* key, size_t k_size, void* value, size_t v_size, int type)` （声明） `L21`

#### n_key_value::Ckey_value  `L26`  `class`
- 继承: `Object`
- 成员变量 (1): `key_value_list list`
- 方法 (4):
  - `Ckey_value()` （声明） `L30`
  - `~Ckey_value()` （声明） `L32`
  - `int my_init(void *p=nullptr)` （声明） `L33`
  - `size_t my_size()` （定义） `L34`
