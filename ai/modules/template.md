# src/template

> 统计: 5 文件 / 90 行 / 2 类 / 4 方法 / 5 自由函数 / 0 成员变量 / 0 全局变量 / 13 宏 / 0 typedef / 0 枚举

## template/temp.cpp (8 行)

### 函数 (1)
- `Ctemp::Ctemp()` — 定义  `L3`

> 完整签名见 JSON: `Ctemp::Ctemp()`

## template/temp.h (17 行)

### 宏 #define (1)
- `TEMP_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_temp::Ctemp  `L8`  `class`
- 继承: `Object`
- 方法 (1):
  - `Ctemp()` （声明） `L10`

## template/temp_def.h (15 行)

### 宏 #define (10)
- `TEMP_DEF_H`（无值，通常为头文件守卫）  `L2`
- `INCLUDE_ALL_H` = "all/all_h_include.h"  `L4`
- `MAIN_TEMP` = "\n#ifndef [TAG]_TEST\n#define [TAG]_TEST 0//1\n#endif\n\n#if [TAG]…  `L6`
- `CLASS_H_TEMP` = "#ifndef [TAG]_H\n#define [TAG]_H\n\n#include \"object/object.h\"\n…  `L7`
- `CLASS_CPP_TEMP` = "#include \"[tag].h\"\nint C[tag]::my_init(void *p)\n{\n\tthis->nam…  `L8`
- `GLOBAL_CLASS_TEMP` = "\tC[tag] g_[tag];\n"  `L9`
- `ADD_ME_TEMP` = "\tp->addMe(g_[tag].where());\n"  `L10`
- `DEFINE_NAMESPACE_TRMP` = "namespace n_[tag]"  `L11`
- `USING_NAMESPACE_TRMP` = "using namespace n_[tag];"  `L12`
- `DEFINE_CLASS_TRMP` = "class C[tag] :public Object"  `L13`

## template/template_object.cpp (31 行)

### 宏 #define (1)
- `TEMPLATE_TEST` = 0  `L20`

### 函数 (4)
- `Ctemplate_object::my_init()` — 定义  `L2`
- `Ctemplate_object::Ctemplate_object()` — 定义  `L9`
- `Ctemplate_object::Ctemplate_object()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctemplate_object::my_init(void *p)`、`Ctemplate_object::Ctemplate_object()`、`Ctemplate_object::~Ctemplate_object()`、`int main(int argc, char *argv[])`

## template/template_object.h (19 行)

### 宏 #define (1)
- `TEMPLATE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_template_object::Ctemplate_object  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Ctemplate_object()` （声明） `L9`
  - `~Ctemplate_object()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
