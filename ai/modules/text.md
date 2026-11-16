# src/text

> 统计: 16 文件 / 712 行 / 10 类 / 45 方法 / 45 自由函数 / 12 成员变量 / 1 全局变量 / 17 宏 / 0 typedef / 2 枚举

## text/text.cpp (32 行)

### 宏 #define (1)
- `TEXT_TEST` = 0  `L20`

### 函数 (4)
- `Ctext::my_init()` — 定义  `L2`
- `Ctext::Ctext()` — 定义  `L9`
- `Ctext::Ctext()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctext::my_init(void *p)`、`Ctext::Ctext()`、`Ctext::~Ctext()`、`int main(int argc, char *argv[])`

## text/text.h (20 行)

### 宏 #define (1)
- `TEXT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_text::Ctext  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctext()` （声明） `L9`
  - `~Ctext()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## text/text_action.cpp (32 行)

### 宏 #define (1)
- `TEXT_ACTION_TEST` = 0  `L20`

### 函数 (4)
- `Ctext_action::my_init()` — 定义  `L2`
- `Ctext_action::Ctext_action()` — 定义  `L9`
- `Ctext_action::Ctext_action()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctext_action::my_init(void *p)`、`Ctext_action::Ctext_action()`、`Ctext_action::~Ctext_action()`、`int main(int argc, char *argv[])`

## text/text_action.h (20 行)

### 宏 #define (1)
- `TEXT_ACTION_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_text_action::Ctext_action  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctext_action()` （声明） `L9`
  - `~Ctext_action()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## text/text_attribute.cpp (32 行)

### 宏 #define (1)
- `TEXT_ATTRIBUTE_TEST` = 0  `L20`

### 函数 (4)
- `Ctext_attribute::my_init()` — 定义  `L2`
- `Ctext_attribute::Ctext_attribute()` — 定义  `L9`
- `Ctext_attribute::Ctext_attribute()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctext_attribute::my_init(void *p)`、`Ctext_attribute::Ctext_attribute()`、`Ctext_attribute::~Ctext_attribute()`、`int main(int argc, char *argv[])`

## text/text_attribute.h (20 行)

### 宏 #define (1)
- `TEXT_ATTRIBUTE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_text_attribute::Ctext_attribute  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctext_attribute()` （声明） `L9`
  - `~Ctext_attribute()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## text/text_encode.cpp (77 行)

### 宏 #define (2)
- `TEXT_ENCODE_COUNT` = (sizeof(text_encode_tab)/sizeof(TextEncode))  `L13`
- `TEXT_ENCODE_TEST` = 0  `L65`

### 函数 (8)
- `TextEncode::isMe()` — 定义  `L15`
- `TextEncode::isMe()` — 定义  `L20`
- `my_name()` — 定义  `L25`
- `TextEncode::set_encode()` — 定义  `L30`
- `Ctext_encode::my_init()` — 定义  `L45`
- `Ctext_encode::Ctext_encode()` — 定义  `L54`
- `Ctext_encode::Ctext_encode()` — 定义  `L59`
- `main()` — 定义  `L70`

> 完整签名见 JSON。

### 全局变量 (1)
- `TextEncode text_encode_tab`  `L3`

## text/text_encode.h (45 行)

### 宏 #define (1)
- `TEXT_ENCODE_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class TextEncodeID   `L8`
- ASCII=0、UTF_8=1、GB18030=2、BOM_UTF_8=0xBFBBEF、UTF_16_LE=0xFEFF、UTF_16_BE=0xFFFE

### 类 (2)
#### n_text_encode::TextEncode  `L18`  `class`
- 成员变量 (2): `TextEncodeID id`、`char * name`
- 方法 (4):
  - `bool isMe(TextEncodeID id)` （声明） `L23`
  - `bool isMe(int id)` （声明） `L25`
  - `char* my_name()` （声明） `L26`
  - `int set_encode(TextEncodeID id)` （声明） `L27`

#### n_text_encode::Ctext_encode  `L30`  `class`
- 继承: `Object`
- 成员变量 (1): `TextEncode encode`
- 方法 (4):
  - `Ctext_encode()` （声明） `L34`
  - `~Ctext_encode()` （声明） `L36`
  - `int my_init(void *p=nullptr)` （声明） `L37`
  - `size_t my_size()` （定义） `L38`

## text/text_line.cpp (166 行)

### 宏 #define (1)
- `TEXT_LINE_TEST` = 0  `L154`

### 函数 (12)
- `Cline_range::Cline_range()` — 定义  `L5`
- `Cline_range::display()` — 定义  `L16`
- `Cline_range::compare()` — 定义  `L30`
- `Cline_range::compare()` — 定义  `L42`
- `Cline_range::set_size()` — 定义  `L54`
- `Ctext_line::my_init()` — 定义  `L73`
- `Ctext_line::Ctext_line()` — 定义  `L80`
- `Ctext_line::Ctext_line()` — 定义  `L85`
- `Ctext_line::split_line()` — 定义  `L91`
- `Ctext_line::display()` — 定义  `L107`
- `Ctext_line::diff()` — 定义  `L116`
- `main()` — 定义  `L159`

> 完整签名见 JSON。

## text/text_line.h (46 行)

### 宏 #define (1)
- `TEXT_LINE_H`（无值，通常为头文件守卫）  `L2`

### 类 (2)
#### n_text_line::Cline_range  `L8`  `class`
- 成员变量 (8): `char * start`、`char * end`、`size_t number`、`size_t size`、`int status`、`int type`、`int attribute`、`int action`
- 方法 (5):
  - `Cline_range()` （声明） `L19`
  - `size_t set_size(size_t size = 0)` （声明） `L21`
  - `int display()` （声明） `L22`
  - `int compare(Cline_range* range)` （声明） `L23`
  - `int compare(char* start,char* end , size_t size)` （声明） `L24`

#### n_text_line::Ctext_line  `L27`  `class`
- 继承: `Object`
- 成员变量 (1): `std::list<Cline_range> line_range_list`
- 方法 (7):
  - `Ctext_line()` （声明） `L31`
  - `~Ctext_line()` （声明） `L33`
  - `int my_init(void *p=nullptr)` （声明） `L34`
  - `size_t my_size()` （定义） `L35`
  - `int display()` （声明） `L36`
  - `size_t split_line(char* start, char* end)` （声明） `L38`
  - `int diff(Ctext_line * text_line,char * out_file=(char*) " ")` （声明） `L39`

## text/text_split.cpp (71 行)

### 宏 #define (1)
- `TEXT_SPLIT_TEST` = 0  `L59`

### 函数 (5)
- `Ctext_split::my_init()` — 定义  `L2`
- `Ctext_split::Ctext_split()` — 定义  `L9`
- `Ctext_split::Ctext_split()` — 定义  `L14`
- `Ctext_split::line()` — 定义  `L22`
- `main()` — 定义  `L64`

> 完整签名见 JSON: `int Ctext_split::my_init(void *p)`、`Ctext_split::Ctext_split()`、`Ctext_split::~Ctext_split()`、`char * Ctext_split::line(char * start, char * end, Cline_ra…`、`int main(int argc, char *argv[])`

## text/text_split.h (23 行)

### 宏 #define (1)
- `TEXT_SPLIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_text_split::Ctext_split  `L8`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctext_split()` （声明） `L10`
  - `~Ctext_split()` （声明） `L12`
  - `int my_init(void *p=nullptr)` （声明） `L13`
  - `size_t my_size()` （定义） `L14`
  - `char * line(char* start, char* end, Cline_range* line_range)` （声明） `L15`

## text/text_status.cpp (32 行)

### 宏 #define (1)
- `TEXT_STATUS_TEST` = 0  `L20`

### 函数 (4)
- `Ctext_status::my_init()` — 定义  `L2`
- `Ctext_status::Ctext_status()` — 定义  `L9`
- `Ctext_status::Ctext_status()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctext_status::my_init(void *p)`、`Ctext_status::Ctext_status()`、`Ctext_status::~Ctext_status()`、`int main(int argc, char *argv[])`

## text/text_status.h (20 行)

### 宏 #define (1)
- `TEXT_STATUS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_text_status::Ctext_status  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctext_status()` （声明） `L9`
  - `~Ctext_status()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## text/text_type.cpp (32 行)

### 宏 #define (1)
- `TEXT_TYPE_TEST` = 0  `L20`

### 函数 (4)
- `Ctext_type::my_init()` — 定义  `L2`
- `Ctext_type::Ctext_type()` — 定义  `L9`
- `Ctext_type::Ctext_type()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctext_type::my_init(void *p)`、`Ctext_type::Ctext_type()`、`Ctext_type::~Ctext_type()`、`int main(int argc, char *argv[])`

## text/text_type.h (44 行)

### 宏 #define (1)
- `TEXT_TYPE_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class TextType   `L7`
- text、c、cpp、java、py、php、js、mak、ini、inf、dec、dsc、fdf、html、asp、cs、bat、sh、xml、pdf

### 类 (1)
#### n_text_type::Ctext_type  `L31`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ctext_type()` （声明） `L33`
  - `~Ctext_type()` （声明） `L35`
  - `int my_init(void *p=nullptr)` （声明） `L36`
  - `size_t my_size()` （定义） `L37`
