# src/relation

> 统计: 3 文件 / 101 行 / 2 类 / 4 方法 / 3 自由函数 / 2 成员变量 / 0 全局变量 / 2 宏 / 0 typedef / 4 枚举

## relation/relation.cpp (24 行)

### 函数 (3)
- `Crelation::my_init()` — 定义  `L4`
- `Crelation::Crelation()` — 定义  `L11`
- `relationin()` — 定义  `L18`

> 完整签名见 JSON: `int Crelation::my_init(void *p)`、`Crelation::Crelation()`、`int relationin(int argc, char *argv[])`

## relation/relation.h (61 行)

### 宏 #define (1)
- `RELATION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class RelationType   `L5`
- none=0、time、human、logic、mathematics、code、positional

### 枚举 enum class HumanRelation   `L15`
- independent、friendship、family、organize、community、enemy、comrade、subordinate、master_servant

### 枚举 enum class MathRelation   `L28`
- intersect、merge、complement

### 枚举 enum class CodeRelation   `L36`
- tree、depend、caller、member、class_r

### 类 (1)
#### n_relation::Orelation  `L45`  `class`
- 成员变量 (2): `RelationType type`、`void * parameter`
- 方法 (2):
  - `public: Orelation()` （定义） `L50`
  - `int set(void* p, RelationType t=RelationType::none)` （定义） `L53`

## relation/relation_class.h (16 行)

### 宏 #define (1)
- `RELATION_CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_relation::Crelation  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `int my_init(void *p=nullptr)` （声明） `L9`
  - `Crelation()` （声明） `L11`
