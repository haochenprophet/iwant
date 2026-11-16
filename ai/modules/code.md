# src/code

> 统计: 134 文件 / 3787 行 / 67 类 / 277 方法 / 278 自由函数 / 9 成员变量 / 0 全局变量 / 154 宏 / 0 typedef / 2 枚举

## code/code.cpp (274 行)

### 宏 #define (1)
- `CODE_TEST` = 0  `L255`

### 函数 (14)
- `Ccode::my_init()` — 定义  `L4`
- `Ccode::Ccode()` — 定义  `L20`
- `Ccode::Ccode()` — 定义  `L26`
- `Ccode::init_file()` — 定义  `L31`
- `Ccode::set_package_action()` — 定义  `L50`
- `Ccode::create_action()` — 定义  `L61`
- `Ccode::func()` — 定义  `L87`
- `Ccode::create()` — 定义  `L97`
- `Ccode::create_head()` — 定义  `L106`
- `Ccode::create_tail()` — 定义  `L163`
- `Ccode::create_cmd()` — 定义  `L202`
- `Ccode::deal_cmd()` — 定义  `L218`
- `Ccode::help()` — 定义  `L241`
- `main()` — 定义  `L254`

> 完整签名见 JSON。

## code/code.h (66 行)

### 宏 #define (21)
- `CODE_H`（无值，通常为头文件守卫）  `L2`
- `GLOBAL_CLASS` = "global_class"  `L8`
- `GLOBAL_CODE` = "g_code"  `L9`
- `GLOBAL_CODE_H` = "g_code.h"  `L10`
- `GLOBAL_CODE_I` = "g_code.i"  `L11`
- `GLOBAL_CODE_FUNC_I` = "g_code_func.i"  `L12`
- `GLOBAL_CODE_FUNC_I_PACKAGE` = "%s_g_code_func.i"  `L13`
- `EXTERN_KEYWOED` = "\textern\t"  `L14`
- `G_CODE_H_DEFINE` = "#ifndef G_CODE_H\n#define G_CODE_H\n"  `L16`
- `G_CODE_I_DEFINE` = "#ifndef G_CODE_I\n#define G_CODE_I\n"  `L17`
- `G_CODE_FUNC_I_DEFINE` = "#ifndef G_CODE_FUNC_I\n#define G_CODE_FUNC_I\n"  `L18`
- `G_CODE_ALL_H` = "\t#include \"all/all_h_include.h\"\n"  `L19`
- `G_CODE_ADD_OBJECT` = "void add_objects(Object *p)\n{\n"  `L20`
- `G_CODE_ADD_OBJECT_H` = "\tvoid add_objects(Object *p);\n"  `L21`
- `G_CODE_H_DEFINE_PACKAGE` = "#ifndef %s_G_CODE_H\n#define %s_G_CODE_H\n"  `L23`
- `G_CODE_I_DEFINE_PACKAGE` = "#ifndef %s_G_CODE_I\n#define %s_G_CODE_I\n"  `L24`
- `G_CODE_FUNC_I_DEFINE_PACKAGE` = "#ifndef %s_G_CODE_FUNC_I\n#define %s_G_CODE_FUNC_I\n"  `L25`
- `G_CODE_ALL_H_PACKAGE` = "\t#include \"%s_all_h_include.h\"\n"  `L26`
- `G_CODE_ADD_OBJECT_PACKAGE` = "void %s_add_objects(Object *p)\n{\n"  `L27`
- `G_CODE_ADD_OBJECT_H_PACKAGE` = "\tvoid %s_add_objects(Object *p);\n"  `L28`
- `CODE_BUF_LEN` = (4*1024)  `L31`

### 类 (1)
#### n_code::Ccode  `L34`  `class`
- 继承: `Object`
- 成员变量 (9): `string * sp`、`string se`、`string st`、`string s_cpp_tag`、`string s_cpp_rep`、`Cfile file_h`、`Cfile file_cpp`、`Cfile file_func`、`char * code_buf`
- 方法 (13):
  - `Ccode()` （声明） `L46`
  - `~Ccode()` （声明） `L48`
  - `int my_init(void *p=nullptr)` （声明） `L49`
  - `int init_file(char * url=nullptr)` （声明） `L50`
  - `int set_package_action(void *p = nullptr)` （声明） `L51`
  - `int create_action(void *p)` （声明） `L52`
  - `int func(void *p = nullptr)` （声明） `L53`
  - `int create(char * cp)` （声明） `L54`
  - `void create_head()` （声明） `L55`
  - `void create_tail()` （声明） `L56`
  - `int create_cmd(int argc, char *argv[])` （声明） `L57`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L58`
  - `int help(void *p = nullptr)` （声明） `L59`

## code/code_action.cpp (32 行)

### 宏 #define (1)
- `CODE_ACTION_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_action::my_init()` — 定义  `L2`
- `Ccode_action::Ccode_action()` — 定义  `L9`
- `Ccode_action::Ccode_action()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_action::my_init(void *p)`、`Ccode_action::Ccode_action()`、`Ccode_action::~Ccode_action()`、`int main(int argc, char *argv[])`

## code/code_action.h (36 行)

### 宏 #define (1)
- `CODE_ACTION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class CodeAtcionClass   `L7`
- none、create

### 枚举 enum class CodeAtcion   `L13`
- create_h=BIT0、create_c=BIT1、create_func=BIT2、set_package=BIT3

### 类 (1)
#### n_code_action::Ccode_action  `L23`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_action()` （声明） `L25`
  - `~Ccode_action()` （声明） `L27`
  - `int my_init(void *p=nullptr)` （声明） `L28`
  - `size_t my_size()` （定义） `L29`

## code/code_add.cpp (32 行)

### 宏 #define (1)
- `CODE_ADD_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_add::my_init()` — 定义  `L2`
- `Ccode_add::Ccode_add()` — 定义  `L9`
- `Ccode_add::Ccode_add()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_add::my_init(void *p)`、`Ccode_add::Ccode_add()`、`Ccode_add::~Ccode_add()`、`int main(int argc, char *argv[])`

## code/code_add.h (20 行)

### 宏 #define (1)
- `CODE_ADD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_add::Ccode_add  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_add()` （声明） `L9`
  - `~Ccode_add()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_build.cpp (32 行)

### 宏 #define (1)
- `CODE_BUILD_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_build::my_init()` — 定义  `L2`
- `Ccode_build::Ccode_build()` — 定义  `L9`
- `Ccode_build::Ccode_build()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_build::my_init(void *p)`、`Ccode_build::Ccode_build()`、`Ccode_build::~Ccode_build()`、`int main(int argc, char *argv[])`

## code/code_build.h (20 行)

### 宏 #define (1)
- `CODE_BUILD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_build::Ccode_build  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_build()` （声明） `L9`
  - `~Ccode_build()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_check.cpp (32 行)

### 宏 #define (1)
- `CODE_CHECK_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_check::my_init()` — 定义  `L2`
- `Ccode_check::Ccode_check()` — 定义  `L9`
- `Ccode_check::Ccode_check()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_check::my_init(void *p)`、`Ccode_check::Ccode_check()`、`Ccode_check::~Ccode_check()`、`int main(int argc, char *argv[])`

## code/code_check.h (20 行)

### 宏 #define (1)
- `CODE_CHECK_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_check::Ccode_check  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_check()` （声明） `L9`
  - `~Ccode_check()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_checksum.cpp (32 行)

### 宏 #define (1)
- `CODE_CHECKSUM_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_checksum::my_init()` — 定义  `L2`
- `Ccode_checksum::Ccode_checksum()` — 定义  `L9`
- `Ccode_checksum::Ccode_checksum()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_checksum::my_init(void *p)`、`Ccode_checksum::Ccode_checksum()`、`Ccode_checksum::~Ccode_checksum()`、`int main(int argc, char *argv[])`

## code/code_checksum.h (20 行)

### 宏 #define (1)
- `CODE_CHECKSUM_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_checksum::Ccode_checksum  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_checksum()` （声明） `L9`
  - `~Ccode_checksum()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_class.cpp (31 行)

### 宏 #define (1)
- `CODE_CLASS_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_class::my_init()` — 定义  `L2`
- `Ccode_class::Ccode_class()` — 定义  `L9`
- `Ccode_class::Ccode_class()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_class::my_init(void *p)`、`Ccode_class::Ccode_class()`、`Ccode_class::~Ccode_class()`、`int main(int argc, char* argv[])`

## code/code_class.h (20 行)

### 宏 #define (1)
- `CODE_CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_class::Ccode_class  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_class()` （声明） `L9`
  - `~Ccode_class()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_clone.cpp (32 行)

### 宏 #define (1)
- `CODE_CLONE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_clone::my_init()` — 定义  `L2`
- `Ccode_clone::Ccode_clone()` — 定义  `L9`
- `Ccode_clone::Ccode_clone()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_clone::my_init(void *p)`、`Ccode_clone::Ccode_clone()`、`Ccode_clone::~Ccode_clone()`、`int main(int argc, char *argv[])`

## code/code_clone.h (20 行)

### 宏 #define (1)
- `CODE_CLONE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_clone::Ccode_clone  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_clone()` （声明） `L9`
  - `~Ccode_clone()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_command.cpp (32 行)

### 宏 #define (1)
- `CODE_COMMAND_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_command::my_init()` — 定义  `L2`
- `Ccode_command::Ccode_command()` — 定义  `L9`
- `Ccode_command::Ccode_command()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_command::my_init(void *p)`、`Ccode_command::Ccode_command()`、`Ccode_command::~Ccode_command()`、`int main(int argc, char *argv[])`

## code/code_command.h (20 行)

### 宏 #define (1)
- `CODE_COMMAND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_command::Ccode_command  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_command()` （声明） `L9`
  - `~Ccode_command()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_comment.cpp (32 行)

### 宏 #define (1)
- `CODE_COMMENT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_comment::my_init()` — 定义  `L2`
- `Ccode_comment::Ccode_comment()` — 定义  `L9`
- `Ccode_comment::Ccode_comment()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_comment::my_init(void *p)`、`Ccode_comment::Ccode_comment()`、`Ccode_comment::~Ccode_comment()`、`int main(int argc, char *argv[])`

## code/code_comment.h (20 行)

### 宏 #define (1)
- `CODE_COMMENT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_comment::Ccode_comment  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_comment()` （声明） `L9`
  - `~Ccode_comment()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_commit.cpp (32 行)

### 宏 #define (1)
- `CODE_COMMIT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_commit::my_init()` — 定义  `L2`
- `Ccode_commit::Ccode_commit()` — 定义  `L9`
- `Ccode_commit::Ccode_commit()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_commit::my_init(void *p)`、`Ccode_commit::Ccode_commit()`、`Ccode_commit::~Ccode_commit()`、`int main(int argc, char *argv[])`

## code/code_commit.h (20 行)

### 宏 #define (1)
- `CODE_COMMIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_commit::Ccode_commit  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_commit()` （声明） `L9`
  - `~Ccode_commit()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_copy.cpp (32 行)

### 宏 #define (1)
- `CODE_COPY_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_copy::my_init()` — 定义  `L2`
- `Ccode_copy::Ccode_copy()` — 定义  `L9`
- `Ccode_copy::Ccode_copy()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_copy::my_init(void *p)`、`Ccode_copy::Ccode_copy()`、`Ccode_copy::~Ccode_copy()`、`int main(int argc, char *argv[])`

## code/code_copy.h (20 行)

### 宏 #define (1)
- `CODE_COPY_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_copy::Ccode_copy  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_copy()` （声明） `L9`
  - `~Ccode_copy()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_create.cpp (32 行)

### 宏 #define (1)
- `CODE_CREATE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_create::my_init()` — 定义  `L2`
- `Ccode_create::Ccode_create()` — 定义  `L9`
- `Ccode_create::Ccode_create()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_create::my_init(void *p)`、`Ccode_create::Ccode_create()`、`Ccode_create::~Ccode_create()`、`int main(int argc, char *argv[])`

## code/code_create.h (20 行)

### 宏 #define (1)
- `CODE_CREATE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_create::Ccode_create  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_create()` （声明） `L9`
  - `~Ccode_create()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_cut.cpp (32 行)

### 宏 #define (1)
- `CODE_CUT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_cut::my_init()` — 定义  `L2`
- `Ccode_cut::Ccode_cut()` — 定义  `L9`
- `Ccode_cut::Ccode_cut()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_cut::my_init(void *p)`、`Ccode_cut::Ccode_cut()`、`Ccode_cut::~Ccode_cut()`、`int main(int argc, char *argv[])`

## code/code_cut.h (20 行)

### 宏 #define (1)
- `CODE_CUT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_cut::Ccode_cut  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_cut()` （声明） `L9`
  - `~Ccode_cut()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_data_type.cpp (32 行)

### 宏 #define (1)
- `CODE_DATA_TYPE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_data_type::my_init()` — 定义  `L2`
- `Ccode_data_type::Ccode_data_type()` — 定义  `L9`
- `Ccode_data_type::Ccode_data_type()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_data_type::my_init(void *p)`、`Ccode_data_type::Ccode_data_type()`、`Ccode_data_type::~Ccode_data_type()`、`int main(int argc, char *argv[])`

## code/code_data_type.h (20 行)

### 宏 #define (1)
- `CODE_DATA_TYPE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_data_type::Ccode_data_type  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_data_type()` （声明） `L9`
  - `~Ccode_data_type()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_db.cpp (32 行)

### 宏 #define (1)
- `CODE_DB_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_db::my_init()` — 定义  `L2`
- `Ccode_db::Ccode_db()` — 定义  `L9`
- `Ccode_db::Ccode_db()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_db::my_init(void *p)`、`Ccode_db::Ccode_db()`、`Ccode_db::~Ccode_db()`、`int main(int argc, char *argv[])`

## code/code_db.h (20 行)

### 宏 #define (1)
- `CODE_DB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_db::Ccode_db  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_db()` （声明） `L9`
  - `~Ccode_db()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_define.cpp (32 行)

### 宏 #define (1)
- `CODE_DEFINE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_define::my_init()` — 定义  `L2`
- `Ccode_define::Ccode_define()` — 定义  `L9`
- `Ccode_define::Ccode_define()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_define::my_init(void *p)`、`Ccode_define::Ccode_define()`、`Ccode_define::~Ccode_define()`、`int main(int argc, char *argv[])`

## code/code_define.h (20 行)

### 宏 #define (1)
- `CODE_DEFINE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_define::Ccode_define  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_define()` （声明） `L9`
  - `~Ccode_define()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_delete.cpp (32 行)

### 宏 #define (1)
- `CODE_DELETE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_delete::my_init()` — 定义  `L2`
- `Ccode_delete::Ccode_delete()` — 定义  `L9`
- `Ccode_delete::Ccode_delete()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_delete::my_init(void *p)`、`Ccode_delete::Ccode_delete()`、`Ccode_delete::~Ccode_delete()`、`int main(int argc, char *argv[])`

## code/code_delete.h (20 行)

### 宏 #define (1)
- `CODE_DELETE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_delete::Ccode_delete  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_delete()` （声明） `L9`
  - `~Ccode_delete()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_diff.cpp (32 行)

### 宏 #define (1)
- `CODE_DIFF_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_diff::my_init()` — 定义  `L2`
- `Ccode_diff::Ccode_diff()` — 定义  `L9`
- `Ccode_diff::Ccode_diff()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_diff::my_init(void *p)`、`Ccode_diff::Ccode_diff()`、`Ccode_diff::~Ccode_diff()`、`int main(int argc, char *argv[])`

## code/code_diff.h (20 行)

### 宏 #define (1)
- `CODE_DIFF_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_diff::Ccode_diff  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_diff()` （声明） `L9`
  - `~Ccode_diff()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_error.cpp (32 行)

### 宏 #define (1)
- `CODE_ERROR_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_error::my_init()` — 定义  `L2`
- `Ccode_error::Ccode_error()` — 定义  `L9`
- `Ccode_error::Ccode_error()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_error::my_init(void *p)`、`Ccode_error::Ccode_error()`、`Ccode_error::~Ccode_error()`、`int main(int argc, char *argv[])`

## code/code_error.h (20 行)

### 宏 #define (1)
- `CODE_ERROR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_error::Ccode_error  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_error()` （声明） `L9`
  - `~Ccode_error()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_event.cpp (32 行)

### 宏 #define (1)
- `CODE_EVENT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_event::my_init()` — 定义  `L2`
- `Ccode_event::Ccode_event()` — 定义  `L9`
- `Ccode_event::Ccode_event()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_event::my_init(void *p)`、`Ccode_event::Ccode_event()`、`Ccode_event::~Ccode_event()`、`int main(int argc, char *argv[])`

## code/code_event.h (20 行)

### 宏 #define (1)
- `CODE_EVENT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_event::Ccode_event  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_event()` （声明） `L9`
  - `~Ccode_event()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_exception.cpp (32 行)

### 宏 #define (1)
- `CODE_EXCEPTION_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_exception::my_init()` — 定义  `L2`
- `Ccode_exception::Ccode_exception()` — 定义  `L9`
- `Ccode_exception::Ccode_exception()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_exception::my_init(void *p)`、`Ccode_exception::Ccode_exception()`、`Ccode_exception::~Ccode_exception()`、`int main(int argc, char *argv[])`

## code/code_exception.h (20 行)

### 宏 #define (1)
- `CODE_EXCEPTION_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_exception::Ccode_exception  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_exception()` （声明） `L9`
  - `~Ccode_exception()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_expression.cpp (32 行)

### 宏 #define (1)
- `CODE_EXPRESSION_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_expression::my_init()` — 定义  `L2`
- `Ccode_expression::Ccode_expression()` — 定义  `L9`
- `Ccode_expression::Ccode_expression()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_expression::my_init(void *p)`、`Ccode_expression::Ccode_expression()`、`Ccode_expression::~Ccode_expression()`、`int main(int argc, char *argv[])`

## code/code_expression.h (20 行)

### 宏 #define (1)
- `CODE_EXPRESSION_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_expression::Ccode_expression  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_expression()` （声明） `L9`
  - `~Ccode_expression()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_feedback.cpp (32 行)

### 宏 #define (1)
- `CODE_FEEDBACK_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_feedback::my_init()` — 定义  `L2`
- `Ccode_feedback::Ccode_feedback()` — 定义  `L9`
- `Ccode_feedback::Ccode_feedback()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_feedback::my_init(void *p)`、`Ccode_feedback::Ccode_feedback()`、`Ccode_feedback::~Ccode_feedback()`、`int main(int argc, char *argv[])`

## code/code_feedback.h (20 行)

### 宏 #define (1)
- `CODE_FEEDBACK_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_feedback::Ccode_feedback  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_feedback()` （声明） `L9`
  - `~Ccode_feedback()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_fetch.cpp (32 行)

### 宏 #define (1)
- `CODE_FETCH_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_fetch::my_init()` — 定义  `L2`
- `Ccode_fetch::Ccode_fetch()` — 定义  `L9`
- `Ccode_fetch::Ccode_fetch()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_fetch::my_init(void *p)`、`Ccode_fetch::Ccode_fetch()`、`Ccode_fetch::~Ccode_fetch()`、`int main(int argc, char *argv[])`

## code/code_fetch.h (20 行)

### 宏 #define (1)
- `CODE_FETCH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_fetch::Ccode_fetch  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_fetch()` （声明） `L9`
  - `~Ccode_fetch()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_file.cpp (32 行)

### 宏 #define (1)
- `CODE_FILE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_file::my_init()` — 定义  `L2`
- `Ccode_file::Ccode_file()` — 定义  `L9`
- `Ccode_file::Ccode_file()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_file::my_init(void *p)`、`Ccode_file::Ccode_file()`、`Ccode_file::~Ccode_file()`、`int main(int argc, char *argv[])`

## code/code_file.h (20 行)

### 宏 #define (1)
- `CODE_FILE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_file::Ccode_file  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_file()` （声明） `L9`
  - `~Ccode_file()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_find.cpp (32 行)

### 宏 #define (1)
- `CODE_FIND_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_find::my_init()` — 定义  `L2`
- `Ccode_find::Ccode_find()` — 定义  `L9`
- `Ccode_find::Ccode_find()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_find::my_init(void *p)`、`Ccode_find::Ccode_find()`、`Ccode_find::~Ccode_find()`、`int main(int argc, char *argv[])`

## code/code_find.h (20 行)

### 宏 #define (1)
- `CODE_FIND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_find::Ccode_find  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_find()` （声明） `L9`
  - `~Ccode_find()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_fork.cpp (32 行)

### 宏 #define (1)
- `CODE_FORK_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_fork::my_init()` — 定义  `L2`
- `Ccode_fork::Ccode_fork()` — 定义  `L9`
- `Ccode_fork::Ccode_fork()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_fork::my_init(void *p)`、`Ccode_fork::Ccode_fork()`、`Ccode_fork::~Ccode_fork()`、`int main(int argc, char *argv[])`

## code/code_fork.h (20 行)

### 宏 #define (1)
- `CODE_FORK_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_fork::Ccode_fork  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_fork()` （声明） `L9`
  - `~Ccode_fork()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_function.cpp (32 行)

### 宏 #define (1)
- `CODE_FUNCTION_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_function::my_init()` — 定义  `L2`
- `Ccode_function::Ccode_function()` — 定义  `L9`
- `Ccode_function::Ccode_function()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_function::my_init(void *p)`、`Ccode_function::Ccode_function()`、`Ccode_function::~Ccode_function()`、`int main(int argc, char *argv[])`

## code/code_function.h (20 行)

### 宏 #define (1)
- `CODE_FUNCTION_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_function::Ccode_function  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_function()` （声明） `L9`
  - `~Ccode_function()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_import.cpp (32 行)

### 宏 #define (1)
- `CODE_IMPORT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_import::my_init()` — 定义  `L2`
- `Ccode_import::Ccode_import()` — 定义  `L9`
- `Ccode_import::Ccode_import()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_import::my_init(void *p)`、`Ccode_import::Ccode_import()`、`Ccode_import::~Ccode_import()`、`int main(int argc, char *argv[])`

## code/code_import.h (20 行)

### 宏 #define (1)
- `CODE_IMPORT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_import::Ccode_import  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_import()` （声明） `L9`
  - `~Ccode_import()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_include.cpp (32 行)

### 宏 #define (1)
- `CODE_INCLUDE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_include::my_init()` — 定义  `L2`
- `Ccode_include::Ccode_include()` — 定义  `L9`
- `Ccode_include::Ccode_include()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_include::my_init(void *p)`、`Ccode_include::Ccode_include()`、`Ccode_include::~Ccode_include()`、`int main(int argc, char *argv[])`

## code/code_include.h (20 行)

### 宏 #define (1)
- `CODE_INCLUDE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_include::Ccode_include  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_include()` （声明） `L9`
  - `~Ccode_include()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_info.cpp (32 行)

### 宏 #define (1)
- `CODE_INFO_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_info::my_init()` — 定义  `L2`
- `Ccode_info::Ccode_info()` — 定义  `L9`
- `Ccode_info::Ccode_info()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_info::my_init(void *p)`、`Ccode_info::Ccode_info()`、`Ccode_info::~Ccode_info()`、`int main(int argc, char *argv[])`

## code/code_info.h (20 行)

### 宏 #define (1)
- `CODE_INFO_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_info::Ccode_info  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_info()` （声明） `L9`
  - `~Ccode_info()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_init.cpp (32 行)

### 宏 #define (1)
- `CODE_INIT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_init::my_init()` — 定义  `L2`
- `Ccode_init::Ccode_init()` — 定义  `L9`
- `Ccode_init::Ccode_init()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_init::my_init(void *p)`、`Ccode_init::Ccode_init()`、`Ccode_init::~Ccode_init()`、`int main(int argc, char *argv[])`

## code/code_init.h (20 行)

### 宏 #define (1)
- `CODE_INIT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_init::Ccode_init  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_init()` （声明） `L9`
  - `~Ccode_init()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_insert.cpp (32 行)

### 宏 #define (1)
- `CODE_INSERT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_insert::my_init()` — 定义  `L2`
- `Ccode_insert::Ccode_insert()` — 定义  `L9`
- `Ccode_insert::Ccode_insert()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_insert::my_init(void *p)`、`Ccode_insert::Ccode_insert()`、`Ccode_insert::~Ccode_insert()`、`int main(int argc, char *argv[])`

## code/code_insert.h (20 行)

### 宏 #define (1)
- `CODE_INSERT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_insert::Ccode_insert  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_insert()` （声明） `L9`
  - `~Ccode_insert()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_keyword.cpp (32 行)

### 宏 #define (1)
- `CODE_KEYWORD_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_keyword::my_init()` — 定义  `L2`
- `Ccode_keyword::Ccode_keyword()` — 定义  `L9`
- `Ccode_keyword::Ccode_keyword()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_keyword::my_init(void *p)`、`Ccode_keyword::Ccode_keyword()`、`Ccode_keyword::~Ccode_keyword()`、`int main(int argc, char *argv[])`

## code/code_keyword.h (20 行)

### 宏 #define (1)
- `CODE_KEYWORD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_keyword::Ccode_keyword  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_keyword()` （声明） `L9`
  - `~Ccode_keyword()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_library.cpp (32 行)

### 宏 #define (1)
- `CODE_LIBRARY_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_library::my_init()` — 定义  `L2`
- `Ccode_library::Ccode_library()` — 定义  `L9`
- `Ccode_library::Ccode_library()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_library::my_init(void *p)`、`Ccode_library::Ccode_library()`、`Ccode_library::~Ccode_library()`、`int main(int argc, char *argv[])`

## code/code_library.h (20 行)

### 宏 #define (1)
- `CODE_LIBRARY_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_library::Ccode_library  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_library()` （声明） `L9`
  - `~Ccode_library()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_macro.cpp (32 行)

### 宏 #define (1)
- `CODE_MACRO_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_macro::my_init()` — 定义  `L2`
- `Ccode_macro::Ccode_macro()` — 定义  `L9`
- `Ccode_macro::Ccode_macro()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_macro::my_init(void *p)`、`Ccode_macro::Ccode_macro()`、`Ccode_macro::~Ccode_macro()`、`int main(int argc, char *argv[])`

## code/code_macro.h (20 行)

### 宏 #define (1)
- `CODE_MACRO_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_macro::Ccode_macro  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_macro()` （声明） `L9`
  - `~Ccode_macro()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_main.cpp (32 行)

### 宏 #define (1)
- `CODE_MAIN_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_main::my_init()` — 定义  `L2`
- `Ccode_main::Ccode_main()` — 定义  `L9`
- `Ccode_main::Ccode_main()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_main::my_init(void *p)`、`Ccode_main::Ccode_main()`、`Ccode_main::~Ccode_main()`、`int main(int argc, char *argv[])`

## code/code_main.h (20 行)

### 宏 #define (1)
- `CODE_MAIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_main::Ccode_main  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_main()` （声明） `L9`
  - `~Ccode_main()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_makefile.cpp (32 行)

### 宏 #define (1)
- `CODE_MAKEFILE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_makefile::my_init()` — 定义  `L2`
- `Ccode_makefile::Ccode_makefile()` — 定义  `L9`
- `Ccode_makefile::Ccode_makefile()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_makefile::my_init(void *p)`、`Ccode_makefile::Ccode_makefile()`、`Ccode_makefile::~Ccode_makefile()`、`int main(int argc, char *argv[])`

## code/code_makefile.h (20 行)

### 宏 #define (1)
- `CODE_MAKEFILE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_makefile::Ccode_makefile  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_makefile()` （声明） `L9`
  - `~Ccode_makefile()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_merge.cpp (32 行)

### 宏 #define (1)
- `CODE_MERGE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_merge::my_init()` — 定义  `L2`
- `Ccode_merge::Ccode_merge()` — 定义  `L9`
- `Ccode_merge::Ccode_merge()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_merge::my_init(void *p)`、`Ccode_merge::Ccode_merge()`、`Ccode_merge::~Ccode_merge()`、`int main(int argc, char *argv[])`

## code/code_merge.h (20 行)

### 宏 #define (1)
- `CODE_MERGE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_merge::Ccode_merge  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_merge()` （声明） `L9`
  - `~Ccode_merge()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_method.cpp (32 行)

### 宏 #define (1)
- `CODE_METHOD_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_method::my_init()` — 定义  `L2`
- `Ccode_method::Ccode_method()` — 定义  `L9`
- `Ccode_method::Ccode_method()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_method::my_init(void *p)`、`Ccode_method::Ccode_method()`、`Ccode_method::~Ccode_method()`、`int main(int argc, char *argv[])`

## code/code_method.h (20 行)

### 宏 #define (1)
- `CODE_METHOD_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_method::Ccode_method  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_method()` （声明） `L9`
  - `~Ccode_method()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_move.cpp (32 行)

### 宏 #define (1)
- `CODE_MOVE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_move::my_init()` — 定义  `L2`
- `Ccode_move::Ccode_move()` — 定义  `L9`
- `Ccode_move::Ccode_move()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_move::my_init(void *p)`、`Ccode_move::Ccode_move()`、`Ccode_move::~Ccode_move()`、`int main(int argc, char *argv[])`

## code/code_move.h (20 行)

### 宏 #define (1)
- `CODE_MOVE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_move::Ccode_move  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_move()` （声明） `L9`
  - `~Ccode_move()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_namespace.cpp (32 行)

### 宏 #define (1)
- `CODE_NAMESPACE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_namespace::my_init()` — 定义  `L2`
- `Ccode_namespace::Ccode_namespace()` — 定义  `L9`
- `Ccode_namespace::Ccode_namespace()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_namespace::my_init(void *p)`、`Ccode_namespace::Ccode_namespace()`、`Ccode_namespace::~Ccode_namespace()`、`int main(int argc, char *argv[])`

## code/code_namespace.h (20 行)

### 宏 #define (1)
- `CODE_NAMESPACE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_namespace::Ccode_namespace  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_namespace()` （声明） `L9`
  - `~Ccode_namespace()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_operator.cpp (32 行)

### 宏 #define (1)
- `CODE_OPERATOR_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_operator::my_init()` — 定义  `L2`
- `Ccode_operator::Ccode_operator()` — 定义  `L9`
- `Ccode_operator::Ccode_operator()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_operator::my_init(void *p)`、`Ccode_operator::Ccode_operator()`、`Ccode_operator::~Ccode_operator()`、`int main(int argc, char *argv[])`

## code/code_operator.h (20 行)

### 宏 #define (1)
- `CODE_OPERATOR_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_operator::Ccode_operator  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_operator()` （声明） `L9`
  - `~Ccode_operator()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_package.cpp (32 行)

### 宏 #define (1)
- `CODE_PACKAGE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_package::my_init()` — 定义  `L2`
- `Ccode_package::Ccode_package()` — 定义  `L9`
- `Ccode_package::Ccode_package()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_package::my_init(void *p)`、`Ccode_package::Ccode_package()`、`Ccode_package::~Ccode_package()`、`int main(int argc, char *argv[])`

## code/code_package.h (20 行)

### 宏 #define (1)
- `CODE_PACKAGE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_package::Ccode_package  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_package()` （声明） `L9`
  - `~Ccode_package()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_paste.cpp (32 行)

### 宏 #define (1)
- `CODE_PASTE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_paste::my_init()` — 定义  `L2`
- `Ccode_paste::Ccode_paste()` — 定义  `L9`
- `Ccode_paste::Ccode_paste()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_paste::my_init(void *p)`、`Ccode_paste::Ccode_paste()`、`Ccode_paste::~Ccode_paste()`、`int main(int argc, char *argv[])`

## code/code_paste.h (20 行)

### 宏 #define (1)
- `CODE_PASTE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_paste::Ccode_paste  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_paste()` （声明） `L9`
  - `~Ccode_paste()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_patch.cpp (32 行)

### 宏 #define (1)
- `CODE_PATCH_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_patch::my_init()` — 定义  `L2`
- `Ccode_patch::Ccode_patch()` — 定义  `L9`
- `Ccode_patch::Ccode_patch()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_patch::my_init(void *p)`、`Ccode_patch::Ccode_patch()`、`Ccode_patch::~Ccode_patch()`、`int main(int argc, char *argv[])`

## code/code_patch.h (20 行)

### 宏 #define (1)
- `CODE_PATCH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_patch::Ccode_patch  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_patch()` （声明） `L9`
  - `~Ccode_patch()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_property.cpp (32 行)

### 宏 #define (1)
- `CODE_PROPERTY_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_property::my_init()` — 定义  `L2`
- `Ccode_property::Ccode_property()` — 定义  `L9`
- `Ccode_property::Ccode_property()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_property::my_init(void *p)`、`Ccode_property::Ccode_property()`、`Ccode_property::~Ccode_property()`、`int main(int argc, char *argv[])`

## code/code_property.h (20 行)

### 宏 #define (1)
- `CODE_PROPERTY_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_property::Ccode_property  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_property()` （声明） `L9`
  - `~Ccode_property()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_pull.cpp (32 行)

### 宏 #define (1)
- `CODE_PULL_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_pull::my_init()` — 定义  `L2`
- `Ccode_pull::Ccode_pull()` — 定义  `L9`
- `Ccode_pull::Ccode_pull()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_pull::my_init(void *p)`、`Ccode_pull::Ccode_pull()`、`Ccode_pull::~Ccode_pull()`、`int main(int argc, char *argv[])`

## code/code_pull.h (20 行)

### 宏 #define (1)
- `CODE_PULL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_pull::Ccode_pull  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_pull()` （声明） `L9`
  - `~Ccode_pull()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_push.cpp (32 行)

### 宏 #define (1)
- `CODE_PUSH_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_push::my_init()` — 定义  `L2`
- `Ccode_push::Ccode_push()` — 定义  `L9`
- `Ccode_push::Ccode_push()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_push::my_init(void *p)`、`Ccode_push::Ccode_push()`、`Ccode_push::~Ccode_push()`、`int main(int argc, char *argv[])`

## code/code_push.h (20 行)

### 宏 #define (1)
- `CODE_PUSH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_push::Ccode_push  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_push()` （声明） `L9`
  - `~Ccode_push()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_remove.cpp (32 行)

### 宏 #define (1)
- `CODE_REMOVE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_remove::my_init()` — 定义  `L2`
- `Ccode_remove::Ccode_remove()` — 定义  `L9`
- `Ccode_remove::Ccode_remove()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_remove::my_init(void *p)`、`Ccode_remove::Ccode_remove()`、`Ccode_remove::~Ccode_remove()`、`int main(int argc, char *argv[])`

## code/code_remove.h (20 行)

### 宏 #define (1)
- `CODE_REMOVE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_remove::Ccode_remove  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_remove()` （声明） `L9`
  - `~Ccode_remove()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_replace.cpp (32 行)

### 宏 #define (1)
- `CODE_REPLACE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_replace::my_init()` — 定义  `L2`
- `Ccode_replace::Ccode_replace()` — 定义  `L9`
- `Ccode_replace::Ccode_replace()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_replace::my_init(void *p)`、`Ccode_replace::Ccode_replace()`、`Ccode_replace::~Ccode_replace()`、`int main(int argc, char *argv[])`

## code/code_replace.h (20 行)

### 宏 #define (1)
- `CODE_REPLACE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_replace::Ccode_replace  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_replace()` （声明） `L9`
  - `~Ccode_replace()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_result.cpp (32 行)

### 宏 #define (1)
- `CODE_RESULT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_result::my_init()` — 定义  `L2`
- `Ccode_result::Ccode_result()` — 定义  `L9`
- `Ccode_result::Ccode_result()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_result::my_init(void *p)`、`Ccode_result::Ccode_result()`、`Ccode_result::~Ccode_result()`、`int main(int argc, char *argv[])`

## code/code_result.h (20 行)

### 宏 #define (1)
- `CODE_RESULT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_result::Ccode_result  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_result()` （声明） `L9`
  - `~Ccode_result()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_return.cpp (32 行)

### 宏 #define (1)
- `CODE_RETURN_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_return::my_init()` — 定义  `L2`
- `Ccode_return::Ccode_return()` — 定义  `L9`
- `Ccode_return::Ccode_return()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_return::my_init(void *p)`、`Ccode_return::Ccode_return()`、`Ccode_return::~Ccode_return()`、`int main(int argc, char *argv[])`

## code/code_return.h (20 行)

### 宏 #define (1)
- `CODE_RETURN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_return::Ccode_return  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_return()` （声明） `L9`
  - `~Ccode_return()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_revert.cpp (32 行)

### 宏 #define (1)
- `CODE_REVERT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_revert::my_init()` — 定义  `L2`
- `Ccode_revert::Ccode_revert()` — 定义  `L9`
- `Ccode_revert::Ccode_revert()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_revert::my_init(void *p)`、`Ccode_revert::Ccode_revert()`、`Ccode_revert::~Ccode_revert()`、`int main(int argc, char *argv[])`

## code/code_revert.h (20 行)

### 宏 #define (1)
- `CODE_REVERT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_revert::Ccode_revert  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_revert()` （声明） `L9`
  - `~Ccode_revert()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_run.cpp (32 行)

### 宏 #define (1)
- `CODE_RUN_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_run::my_init()` — 定义  `L2`
- `Ccode_run::Ccode_run()` — 定义  `L9`
- `Ccode_run::Ccode_run()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_run::my_init(void *p)`、`Ccode_run::Ccode_run()`、`Ccode_run::~Ccode_run()`、`int main(int argc, char *argv[])`

## code/code_run.h (20 行)

### 宏 #define (1)
- `CODE_RUN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_run::Ccode_run  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_run()` （声明） `L9`
  - `~Ccode_run()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_select.cpp (32 行)

### 宏 #define (1)
- `CODE_SELECT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_select::my_init()` — 定义  `L2`
- `Ccode_select::Ccode_select()` — 定义  `L9`
- `Ccode_select::Ccode_select()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_select::my_init(void *p)`、`Ccode_select::Ccode_select()`、`Ccode_select::~Ccode_select()`、`int main(int argc, char *argv[])`

## code/code_select.h (20 行)

### 宏 #define (1)
- `CODE_SELECT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_select::Ccode_select  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_select()` （声明） `L9`
  - `~Ccode_select()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_setting.cpp (32 行)

### 宏 #define (1)
- `CODE_SETTING_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_setting::my_init()` — 定义  `L2`
- `Ccode_setting::Ccode_setting()` — 定义  `L9`
- `Ccode_setting::Ccode_setting()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_setting::my_init(void *p)`、`Ccode_setting::Ccode_setting()`、`Ccode_setting::~Ccode_setting()`、`int main(int argc, char *argv[])`

## code/code_setting.h (20 行)

### 宏 #define (1)
- `CODE_SETTING_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_setting::Ccode_setting  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_setting()` （声明） `L9`
  - `~Ccode_setting()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_static.cpp (32 行)

### 宏 #define (1)
- `CODE_STATIC_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_static::my_init()` — 定义  `L2`
- `Ccode_static::Ccode_static()` — 定义  `L9`
- `Ccode_static::Ccode_static()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_static::my_init(void *p)`、`Ccode_static::Ccode_static()`、`Ccode_static::~Ccode_static()`、`int main(int argc, char *argv[])`

## code/code_static.h (20 行)

### 宏 #define (1)
- `CODE_STATIC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_static::Ccode_static  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_static()` （声明） `L9`
  - `~Ccode_static()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_struct.cpp (32 行)

### 宏 #define (1)
- `CODE_STRUCT_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_struct::my_init()` — 定义  `L2`
- `Ccode_struct::Ccode_struct()` — 定义  `L9`
- `Ccode_struct::Ccode_struct()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_struct::my_init(void *p)`、`Ccode_struct::Ccode_struct()`、`Ccode_struct::~Ccode_struct()`、`int main(int argc, char *argv[])`

## code/code_struct.h (20 行)

### 宏 #define (1)
- `CODE_STRUCT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_struct::Ccode_struct  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_struct()` （声明） `L9`
  - `~Ccode_struct()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_syntax.cpp (32 行)

### 宏 #define (1)
- `CODE_SYNTAX_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_syntax::my_init()` — 定义  `L2`
- `Ccode_syntax::Ccode_syntax()` — 定义  `L9`
- `Ccode_syntax::Ccode_syntax()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_syntax::my_init(void *p)`、`Ccode_syntax::Ccode_syntax()`、`Ccode_syntax::~Ccode_syntax()`、`int main(int argc, char *argv[])`

## code/code_syntax.h (20 行)

### 宏 #define (1)
- `CODE_SYNTAX_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_syntax::Ccode_syntax  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_syntax()` （声明） `L9`
  - `~Ccode_syntax()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_tag.cpp (32 行)

### 宏 #define (1)
- `CODE_TAG_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_tag::my_init()` — 定义  `L2`
- `Ccode_tag::Ccode_tag()` — 定义  `L9`
- `Ccode_tag::Ccode_tag()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_tag::my_init(void *p)`、`Ccode_tag::Ccode_tag()`、`Ccode_tag::~Ccode_tag()`、`int main(int argc, char *argv[])`

## code/code_tag.h (20 行)

### 宏 #define (1)
- `CODE_TAG_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_tag::Ccode_tag  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_tag()` （声明） `L9`
  - `~Ccode_tag()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_template.cpp (32 行)

### 宏 #define (1)
- `CODE_TEMPLATE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_template::my_init()` — 定义  `L2`
- `Ccode_template::Ccode_template()` — 定义  `L9`
- `Ccode_template::Ccode_template()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_template::my_init(void *p)`、`Ccode_template::Ccode_template()`、`Ccode_template::~Ccode_template()`、`int main(int argc, char *argv[])`

## code/code_template.h (20 行)

### 宏 #define (1)
- `CODE_TEMPLATE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_template::Ccode_template  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_template()` （声明） `L9`
  - `~Ccode_template()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_token.cpp (32 行)

### 宏 #define (1)
- `CODE_TOKEN_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_token::my_init()` — 定义  `L2`
- `Ccode_token::Ccode_token()` — 定义  `L9`
- `Ccode_token::Ccode_token()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_token::my_init(void *p)`、`Ccode_token::Ccode_token()`、`Ccode_token::~Ccode_token()`、`int main(int argc, char *argv[])`

## code/code_token.h (20 行)

### 宏 #define (1)
- `CODE_TOKEN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_token::Ccode_token  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_token()` （声明） `L9`
  - `~Ccode_token()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_tree.cpp (32 行)

### 宏 #define (1)
- `CODE_TREE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_tree::my_init()` — 定义  `L2`
- `Ccode_tree::Ccode_tree()` — 定义  `L9`
- `Ccode_tree::Ccode_tree()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_tree::my_init(void *p)`、`Ccode_tree::Ccode_tree()`、`Ccode_tree::~Ccode_tree()`、`int main(int argc, char *argv[])`

## code/code_tree.h (20 行)

### 宏 #define (1)
- `CODE_TREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_tree::Ccode_tree  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_tree()` （声明） `L9`
  - `~Ccode_tree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_update.cpp (32 行)

### 宏 #define (1)
- `CODE_UPDATE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_update::my_init()` — 定义  `L2`
- `Ccode_update::Ccode_update()` — 定义  `L9`
- `Ccode_update::Ccode_update()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_update::my_init(void *p)`、`Ccode_update::Ccode_update()`、`Ccode_update::~Ccode_update()`、`int main(int argc, char *argv[])`

## code/code_update.h (20 行)

### 宏 #define (1)
- `CODE_UPDATE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_update::Ccode_update  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_update()` （声明） `L9`
  - `~Ccode_update()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## code/code_value.cpp (32 行)

### 宏 #define (1)
- `CODE_VALUE_TEST` = 0  `L20`

### 函数 (4)
- `Ccode_value::my_init()` — 定义  `L2`
- `Ccode_value::Ccode_value()` — 定义  `L9`
- `Ccode_value::Ccode_value()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccode_value::my_init(void *p)`、`Ccode_value::Ccode_value()`、`Ccode_value::~Ccode_value()`、`int main(int argc, char *argv[])`

## code/code_value.h (20 行)

### 宏 #define (1)
- `CODE_VALUE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_code_value::Ccode_value  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Ccode_value()` （声明） `L9`
  - `~Ccode_value()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
