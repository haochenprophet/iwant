# src/action

> 统计: 3 文件 / 79 行 / 3 类 / 2 方法 / 2 自由函数 / 12 成员变量 / 0 全局变量 / 2 宏 / 1 typedef / 1 枚举

## action/action.cpp (13 行)

### 函数 (2)
- `Caction::my_init()` — 定义  `L2`
- `Caction::Caction()` — 定义  `L9`

> 完整签名见 JSON: `int Caction::my_init(void *p)`、`Caction::Caction()`

## action/action.h (18 行)

### 宏 #define (1)
- `ACTION_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_action::Caction  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Caction()` （声明） `L9`
  - `int my_init(void *p=nullptr)` （声明） `L11`

## action/action_type.h (48 行)

### 宏 #define (1)
- `ACTION_TYPE_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class EatcionRelation   `L7`
- none=0、equal、large、large_equal、small_、small_equal、and_、or_、not_、bit_and、bit_or、bit_not、bit_xor、not_and、not_or

### typedef / using (1)
- `typedef unsigned long long ACTION_T`  `L4`

### 类 (2)
#### 全局::ActionInfo  `L25`  `class`
- 成员变量 (6): `int step`、`void * action`、`ACTION_T action_t`、`void * time`、`void * location`、`void * executor`

#### 全局::Action  `L36`  `class`
- 成员变量 (6): `int action_class`、`ACTION_T t`、`EatcionRelation r`、`void * action`、`char * name`、`char * help`
