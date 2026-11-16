# src/syntax

> 统计: 3 文件 / 41 行 / 1 类 / 1 方法 / 1 自由函数 / 0 成员变量 / 0 全局变量 / 12 宏 / 0 typedef / 0 枚举

## syntax/syntax.cpp (8 行)

### 函数 (1)
- `Csyntax::Csyntax()` — 定义  `L3`

> 完整签名见 JSON: `Csyntax::Csyntax()`

## syntax/syntax.h (17 行)

### 宏 #define (1)
- `SYNTAX_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_syntax::Csyntax  `L7`  `class`
- 继承: `Object`
- 方法 (1):
  - `Csyntax()` （声明） `L9`

## syntax/syntax_def.h (16 行)

### 宏 #define (11)
- `SYNTAX_DEF_H`（无值，通常为头文件守卫）  `L2`
- `CLASS_SYNTAX` = "[template_spec]\nclass [decl_spec] tag[:base_list]\n{\n\t[member_l…  `L4`
- `MAKE_SYNTAX` = "target:[dependencies] [...]\n\tcommands\n\t[...]"  `L5`
- `TAG_SYNTAX` = "[TAG];[TAG%d];[tag];[tag%d]"  `L6`
- `BRACKET_SYNTAX` = "[...];{...};(...);<...>"  `L7`
- `C_CPP_SYNTAX` = "//;/*,*/"  `L8`
- `URI_SYNTAX` = "schema://host[:port#]/path/.../[;url-params][?query-string][#anchor]"  `L9`
- `URI_HIER_PART_SYNTAX` = "//authority-path-abempty/path-absolute/path-rootless/path-empty"  `L10`
- `HTTP_URI_SYNTAX` = "http://authority-path-abempty[?query][#fragment]"  `L12`
- `HTTPS_URI_SYNTAX` = "https://authority-path-abempty[?query][#fragment]"  `L13`
- `ENUM_SYNTAX` = "enum [identifier] [: type]  {enum-list}; enum [class|struct]   [id…  `L15`
