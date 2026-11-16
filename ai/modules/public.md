# src/public

> 统计: 4 文件 / 96 行 / 2 类 / 5 方法 / 5 自由函数 / 8 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 1 枚举

## public/instruction.cpp (18 行)

### 函数 (3)
- `Cinstruction::my_init()` — 定义  `L2`
- `Cinstruction::Cinstruction()` — 定义  `L9`
- `Cinstruction::Cinstruction()` — 定义  `L14`

> 完整签名见 JSON: `int Cinstruction::my_init(void *p)`、`Cinstruction::Cinstruction()`、`Cinstruction::~Cinstruction()`

## public/instruction.h (19 行)

### 宏 #define (1)
- `INSTRUCTION_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_instruction::Cinstruction  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cinstruction()` （声明） `L9`
  - `~Cinstruction()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## public/sql.cpp (20 行)

### 函数 (2)
- `Csql::Csql()` — 定义  `L3`
- `Csql::Csql()` — 定义  `L17`

> 完整签名见 JSON: `Csql::Csql()`、`Csql::~Csql()`

## public/sql.h (39 行)

### 宏 #define (1)
- `SQL_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class SqlOperate   `L9`
- nothing、select、update、insert、create、delete_、alter

### 类 (1)
#### n_sql::Csql  `L19`  `class`
- 继承: `Object`
- 成员变量 (8): `SqlOperate sql_opetate`、`char * db_name`、`char * tab_name`、`char * tab_field`、`char * col_value`、`char * sql_buf`、`char * sql`、`int sql_buf_len`
- 方法 (2):
  - `Csql()` （声明） `L30`
  - `~Csql()` （声明） `L32`
