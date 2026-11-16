# src/symbol

> 统计: 6 文件 / 343 行 / 3 类 / 15 方法 / 17 自由函数 / 9 成员变量 / 0 全局变量 / 5 宏 / 0 typedef / 1 枚举

## symbol/brackets.cpp (198 行)

### 宏 #define (1)
- `BRACKETS_TEST` = 0  `L189`

### 函数 (11)
- `Cbrackets::my_init()` — 定义  `L3`
- `Cbrackets::Cbrackets()` — 定义  `L26`
- `Cbrackets::Cbrackets()` — 定义  `L31`
- `Cbrackets::isHalf()` — 定义  `L35`
- `Cbrackets::detectL()` — 定义  `L44`
- `Cbrackets::detectR()` — 定义  `L70`
- `Cbrackets::detect()` — 定义  `L96`
- `Cbrackets::getblock()` — 定义  `L107`
- `Cbrackets::getend()` — 定义  `L152`
- `Cbrackets::getstart()` — 定义  `L175`
- `main()` — 定义  `L193`

> 完整签名见 JSON。

## symbol/brackets.h (41 行)

### 宏 #define (1)
- `BRACKETS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_brackets::Cbrackets  `L7`  `class`
- 继承: `Object`
- 成员变量 (9): `int leftRoundBracketCount`、`int rightRoundBracketCount`、`int leftQquareBracketCount`、`int rightQquareBracketCount`、`int leftBraceCount`、`int rightBraceCount`、`int leftAngleBracketCount`、`int rightAngleBracketCount`、`char braceket`
- 方法 (10):
  - `int my_init(void *p=nullptr)` （声明） `L23`
  - `Cbrackets()` （声明） `L25`
  - `~Cbrackets()` （声明） `L26`
  - `int detectL(char *cp)` （声明） `L28`
  - `int detectR(char *cp)` （声明） `L29`
  - `int detect(char *cp)` （声明） `L30`
  - `int isHalf(char *cp,char *cp1)` （声明） `L31`
  - `char * getblock(char * start,char* end,char c=' ',char *buf=nullptr,int *pLen=0,int skip=…` （声明） `L32`
  - `char * getend(char * start,char* end,char *e)` （声明） `L33`
  - `char * getstart(char* start,char *end,char *s)` （声明） `L34`

## symbol/comment.cpp (42 行)

### 宏 #define (1)
- `COMMENT_TEST` = 0  `L29`

### 函数 (4)
- `Ccomment::my_init()` — 定义  `L2`
- `Ccomment::Ccomment()` — 定义  `L10`
- `Ccomment::isMe()` — 定义  `L15`
- `main()` — 定义  `L34`

> 完整签名见 JSON: `int Ccomment::my_init(void *p)`、`Ccomment::Ccomment()`、`int Ccomment::isMe(char *identifier)`、`int main(int argc, char *argv[])`

## symbol/comment.h (31 行)

### 宏 #define (1)
- `COMMENT_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum CommentType   `L7`
- NotComment_T、C_TypeCommentLine_T、C_TypeCommentBlockStart_T、C_TypeCommentBlockEnd_T、BatchComment_T

### 类 (1)
#### n_comment::Ccomment  `L18`  `class`
- 继承: `Object`
- 方法 (3):
  - `Ccomment()` （声明） `L20`
  - `int my_init(void *p=nullptr)` （声明） `L22`
  - `int isMe(char *identifier)` （声明） `L23`

## symbol/symbol.cpp (13 行)

### 函数 (2)
- `Csymbol::my_init()` — 定义  `L2`
- `Csymbol::Csymbol()` — 定义  `L9`

> 完整签名见 JSON: `int Csymbol::my_init(void *p)`、`Csymbol::Csymbol()`

## symbol/symbol.h (18 行)

### 宏 #define (1)
- `SYMBOL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_symbol::Csymbol  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Csymbol()` （声明） `L9`
  - `int my_init(void *p=nullptr)` （声明） `L11`
