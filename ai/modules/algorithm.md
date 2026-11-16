# src/algorithm

> 统计: 18 文件 / 1790 行 / 13 类 / 100 方法 / 107 自由函数 / 36 成员变量 / 0 全局变量 / 17 宏 / 0 typedef / 2 枚举

## algorithm/algorithm.cpp (32 行)

### 宏 #define (1)
- `ALGORITHM_TEST` = 0  `L20`

### 函数 (4)
- `Calgorithm::my_init()` — 定义  `L2`
- `Calgorithm::Calgorithm()` — 定义  `L9`
- `Calgorithm::Calgorithm()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Calgorithm::my_init(void *p)`、`Calgorithm::Calgorithm()`、`Calgorithm::~Calgorithm()`、`int main(int argc, char *argv[])`

## algorithm/algorithm.h (20 行)

### 宏 #define (1)
- `ALGORITHM_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_algorithm::Calgorithm  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Calgorithm()` （声明） `L9`
  - `~Calgorithm()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## algorithm/compare.cpp (37 行)

### 宏 #define (1)
- `COMPARE_TEST` = 0  `L25`

### 函数 (5)
- `Ccompare::my_init()` — 定义  `L2`
- `Ccompare::Ccompare()` — 定义  `L9`
- `Ccompare::Ccompare()` — 定义  `L14`
- `Ccompare::compare()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Ccompare::my_init(void *p)`、`Ccompare::Ccompare()`、`Ccompare::~Ccompare()`、`int Ccompare::compare(void* left, void* right, size_t cmp_s…`、`int main(int argc, char *argv[])`

## algorithm/compare.h (23 行)

### 宏 #define (1)
- `COMPARE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_compare::Ccompare  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ccompare()` （声明） `L9`
  - `~Ccompare()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `int compare(void* left, void* right, size_t cmp_size)` （声明） `L14`

## algorithm/copy.cpp (32 行)

### 宏 #define (1)
- `COPY_TEST` = 0  `L20`

### 函数 (4)
- `Ccopy::my_init()` — 定义  `L2`
- `Ccopy::Ccopy()` — 定义  `L9`
- `Ccopy::Ccopy()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccopy::my_init(void *p)`、`Ccopy::Ccopy()`、`Ccopy::~Ccopy()`、`int main(int argc, char *argv[])`

## algorithm/copy.h (19 行)

### 宏 #define (1)
- `COPY_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_copy::Ccopy  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Ccopy()` （声明） `L9`
  - `~Ccopy()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## algorithm/find.cpp (90 行)

### 宏 #define (1)
- `FIND_TEST` = 0  `L79`

### 函数 (9)
- `Cfind::my_init()` — 定义  `L2`
- `Cfind::Cfind()` — 定义  `L10`
- `Cfind::Cfind()` — 定义  `L15`
- `Cfind::find()` — 定义  `L21`
- `Cfind::find()` — 定义  `L47`
- `Cfind::find()` — 定义  `L52`
- `Cfind::find()` — 定义  `L57`
- `Cfind::find_to_list()` — 定义  `L62`
- `main()` — 定义  `L84`

> 完整签名见 JSON。

## algorithm/find.h (27 行)

### 宏 #define (1)
- `FIND_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_find::Cfind  `L7`  `class`
- 继承: `Object`
- 成员变量 (2): `std::list<uint8_t*> found_list`、`int found_list_count`
- 方法 (8):
  - `Cfind()` （声明） `L12`
  - `~Cfind()` （声明） `L14`
  - `int my_init(void *p=nullptr)` （声明） `L15`
  - `static int find(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_siz…` （声明） `L16`
  - `static int find(uint8_t* source, uint8_t* source_end, uint8_t* target, int64_t target_siz…` （声明） `L17`
  - `static int find(uint8_t* source, uint8_t* source_end, uint8_t* target, uint8_t* target_en…` （声明） `L18`
  - `static int find(char * source, char * source_end, char * target, char* target_end, char *…` （声明） `L19`
  - `int find_to_list(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_si…` （声明） `L20`

## algorithm/get.cpp (291 行)

### 宏 #define (1)
- `GET_TEST` = 0  `L280`

### 函数 (25)
- `Cget::my_init()` — 定义  `L2`
- `Cget::Cget()` — 定义  `L9`
- `Cget::Cget()` — 定义  `L16`
- `Cget::getValue()` — 定义  `L21`
- `Cget::getValue()` — 定义  `L36`
- `Cget::getValueTo()` — 定义  `L50`
- `Cget::getString()` — 定义  `L63`
- `Cget::getStringX()` — 定义  `L74`
- `Cget::getNextLine()` — 定义  `L85`
- `Cget::getLine()` — 定义  `L93`
- `Cget::getLine()` — 定义  `L100`
- `Cget::getLine()` — 定义  `L115`
- `Cget::setLine()` — 定义  `L120`
- `Cget::getLineX()` — 定义  `L124`
- `Cget::chkString()` — 定义  `L131`
- `Cget::strToken()` — 定义  `L145`
- `Cget::clearBuf()` — 定义  `L174`
- `Cget::getToken()` — 定义  `L180`
- `Cget::getToken()` — 定义  `L185`
- `Cget::getToken()` — 定义  `L204`
- `Cget::getblock()` — 定义  `L219`
- `Cget::getblock()` — 定义  `L252`
- `Cget::getComment()` — 定义  `L260`
- `Cget::display()` — 定义  `L275`
- `main()` — 定义  `L285`

> 完整签名见 JSON。

## algorithm/get.h (40 行)

### 宏 #define (1)
- `GET_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_get::Cget  `L7`  `class`
- 继承: `Object`
- 方法 (24):
  - `Cget()` （声明） `L9`
  - `~Cget()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `static unsigned long getValue(char *cp,char endChar='\0',int skipSpace=0)` （声明） `L13`
  - `static char * getValue(char *cp,unsigned long *p,char endChar='\0',int skipSpace=0)` （声明） `L14`
  - `int getValueTo(char *cp,unsigned long *p ,int pLen,char endChar='\0')` （声明） `L15`
  - `char * getString(char *src,char *dst,int dstLen)` （声明） `L16`
  - `char * getStringX(char *src,char *dst,int dstLen)` （声明） `L17`
  - `char * getLine(char *src,char *dst,int dstLen)` （声明） `L18`
  - `char * getLine(char *src,char *dst,int dstLen,unsigned char endchar,char *endcp)` （声明） `L19`
  - `char * getLine(char *src,char *endcp)` （声明） `L20`
  - `char * getLineX(char *src,char *dst,int dstLen)` （声明） `L21`
  - `char * getNextLine(char *src,char *dst,int dstLen)` （声明） `L22`
  - `int chkString(char string[],char *start)` （声明） `L23`
  - `char * strToken(char *start,char *end,char *delimit,int retStart=0)` （声明） `L24`
  - `void setLine(unsigned long L)` （声明） `L25`
  - `void clearBuf(int len=BUF_SIZE)` （声明） `L26`
  - `bool getToken(char *cp)` （声明） `L27`
  - `static bool getToken(char *cp,char * dst,int len)` （声明） `L28`
  - `static char * getToken(CKeywordParam *p,char *dst ,int len)` （声明） `L29`
  - `int getblock(char*src,char *dst,char *endSrc=0,int len=BUF_SIZE,char start=' ',char end='…` （声明） `L30`
  - `int getblock(char*src,char *dst,char* end,int len=BUF_SIZE)` （声明） `L31`
  - `char *getComment(char*start,char *end,char *e)` （声明） `L32`
  - `void display()` （声明） `L33`

## algorithm/insert.cpp (353 行)

### 宏 #define (1)
- `INSERT_TEST` = 0  `L317`

### 函数 (25)
- `CinsertParameter::init()` — 定义  `L6`
- `CinsertParameter::clear()` — 定义  `L17`
- `CinsertParameter::CinsertParameter()` — 定义  `L29`
- `CinsertParameter::CinsertParameter()` — 定义  `L34`
- `CinsertParameter::available()` — 定义  `L39`
- `Cinsert::my_init()` — 定义  `L51`
- `Cinsert::Cinsert()` — 定义  `L58`
- `Cinsert::Cinsert()` — 定义  `L63`
- `Cinsert::allot_memory()` — 定义  `L68`
- `Cinsert::set()` — 定义  `L84`
- `Cinsert::set()` — 定义  `L100`
- `Cinsert::set()` — 定义  `L105`
- `Cinsert::set()` — 定义  `L110`
- `Cinsert::insert()` — 定义  `L116`
- `Cinsert::insert()` — 定义  `L132`
- `Cinsert::insert()` — 定义  `L137`
- `Cinsert::insert()` — 定义  `L143`
- `Cinsert::insert()` — 定义  `L148`
- `Cinsert::insert()` — 定义  `L156`
- `Cinsert::insert()` — 定义  `L160`
- `Cinsert::insert()` — 定义  `L195`
- `Cinsert::insert()` — 定义  `L227`
- `Cinsert::insert()` — 定义  `L262`
- `insert_test()` — 定义  `L323`
- `main()` — 定义  `L345`

> 完整签名见 JSON。

## algorithm/insert.h (64 行)

### 宏 #define (1)
- `INSERT_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class InsertType   `L8`
- none、before、after、string、file

### 类 (2)
#### n_insert::CinsertParameter  `L16`  `class`
- 成员变量 (7): `uint8_t * source_start`、`uint8_t * source_end`、`uint8_t * insert_offset`、`uint8_t * insert_data_start`、`uint8_t * insert_data_end`、`uint8_t * result_start`、`uint8_t * result_end`
- 方法 (5):
  - `CinsertParameter()` （声明） `L26`
  - `~CinsertParameter()` （声明） `L28`
  - `void init()` （声明） `L29`
  - `void clear()` （声明） `L30`
  - `bool available()` （声明） `L31`

#### n_insert::Cinsert  `L34`  `class`
- 继承: `Object`
- 成员变量 (1): `CinsertParameter insert_parameter`
- 方法 (19):
  - `Cinsert()` （声明） `L38`
  - `~Cinsert()` （声明） `L40`
  - `int my_init(void *p=nullptr)` （声明） `L41`
  - `size_t my_size()` （定义） `L42`
  - `int allot_memory(CinsertParameter* p)` （声明） `L43`
  - `int set(CinsertParameter* p, uint8_t* source_start,uint8_t* source_end,uint8_t* insert_of…` （声明） `L44`
  - `int set(CinsertParameter* p, uint8_t* source_start, size_t source_size, size_t insert_off…` （声明） `L45`
  - `int set(uint8_t* source_start, uint8_t* source_end, uint8_t* insert_offset, uint8_t* inse…` （声明） `L46`
  - `int set(uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_…` （声明） `L47`
  - `int insert(CinsertParameter* p)` （声明） `L48`
  - `int insert(CinsertParameter* p, int64_t line_number)` （声明） `L49`
  - `int insert()` （声明） `L50`
  - `int insert(int64_t line_number)` （声明） `L51`
  - `int insert(CinsertParameter* p, uint8_t* find, size_t find_size, InsertType type=InsertTy…` （声明） `L52`
  - `int insert(uint8_t* find, size_t find_size, InsertType type)` （声明） `L53`
  - `int insert(char* input_file, char* output_file, char* insert, int64_t line_number, Insert…` （声明） `L54`
  - `int insert(char* input_file, char* output_file, char* insert, size_t insert_offset, Inser…` （声明） `L55`
  - `int insert(char* input_file, char* output_file, char* insert, InsertType insert_type, cha…` （声明） `L56`
  - `int insert(int argc, char* argv[])` （声明） `L57`

## algorithm/istring.cpp (18 行)

### 函数 (3)
- `Cistring::my_init()` — 定义  `L2`
- `Cistring::Cistring()` — 定义  `L9`
- `Cistring::Cistring()` — 定义  `L14`

> 完整签名见 JSON: `int Cistring::my_init(void *p)`、`Cistring::Cistring()`、`Cistring::~Cistring()`

## algorithm/istring.h (19 行)

### 宏 #define (1)
- `ISTRING_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_istring::Cistring  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cistring()` （声明） `L9`
  - `~Cistring()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## algorithm/replace.cpp (510 行)

### 宏 #define (1)
- `REPLACE_TEST` = 0  `L3`

### 函数 (25)
- `CLocationRange::CLocationRange()` — 定义  `L6`
- `CLocationRange::set_size()` — 定义  `L13`
- `CreplaceParameter::CreplaceParameter()` — 定义  `L32`
- `CreplaceParameter::CreplaceParameter()` — 定义  `L45`
- `Creplace::my_init()` — 定义  `L51`
- `Creplace::Creplace()` — 定义  `L66`
- `Creplace::Creplace()` — 定义  `L71`
- `Creplace::analyze()` — 定义  `L78`
- `Creplace::build_map()` — 定义  `L131`
- `Creplace::analyze()` — 定义  `L148`
- `Creplace::replace()` — 定义  `L184`
- `Creplace::replace()` — 定义  `L213`
- `Creplace::replace()` — 定义  `L220`
- `Creplace::replace()` — 定义  `L225`
- `Creplace::replace()` — 定义  `L230`
- `Creplace::replace()` — 定义  `L284`
- `Creplace::add_parameter_list()` — 定义  `L290`
- `Creplace::replace()` — 定义  `L324`
- `Creplace::replace()` — 定义  `L347`
- `Creplace::replace()` — 定义  `L353`
- `Creplace::replace()` — 定义  `L361`
- `Creplace::replace()` — 定义  `L371`
- `Creplace::list_map()` — 定义  `L435`
- `replace_test()` — 定义  `L449`
- `main()` — 定义  `L503`

> 完整签名见 JSON。

## algorithm/replace.h (95 行)

### 宏 #define (1)
- `REPLACE_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class ReplaceType   `L10`
- none、string、file、memory、line

### 类 (4)
#### n_replace::CLocationRange  `L19`  `class`
- 成员变量 (3): `void* start`、`void* end`、`size_t size`
- 方法 (2):
  - `CLocationRange()` （声明） `L25`
  - `size_t set_size(size_t size=0)` （声明） `L27`

#### n_replace::CreplaceParameter  `L30`  `class`
- 成员变量 (11): `void* find_memory`、`int64_t find_memory_size`、`void* to_memory`、`int64_t to_memory_size`、`void* replace_memory`、`int64_t replace_memory_size`、`int64_t find_count`、`int64_t total_change_size`、`std::list<void*> location_list`、`std::list<CLocationRange> location_range_list`、`bool replace_to_memory_end`
- 方法 (2):
  - `CreplaceParameter()` （声明） `L44`
  - `~CreplaceParameter()` （声明） `L46`

#### n_replace::CreplaceMap  `L49`  `class`
- 成员变量 (3): `void* address`、`int64_t size`、`CreplaceParameter* p`

#### n_replace::Creplace  `L57`  `class`
- 继承: `Object`
- 成员变量 (9): `void * source`、`int64_t source_size`、`std::list<CreplaceParameter*> parameter_list`、`int64_t total_size`、`int64_t map_total_count`、`std::list<CreplaceMap> map`、`void * result`、`int64_t result_size`、`CreplaceParameter replace_parameter`
- 方法 (19):
  - `Creplace()` （声明） `L69`
  - `~Creplace()` （声明） `L71`
  - `int my_init(void *p=nullptr)` （声明） `L72`
  - `int build_map(CreplaceParameter* p)` （声明） `L73`
  - `int64_t analyze(void* source, int64_t source_size, CreplaceParameter* p)` （声明） `L74`
  - `int64_t analyze(void* source, int64_t source_size)` （声明） `L75`
  - `int replace(void * source, int64_t source_size, CreplaceParameter* p, void** result_addre…` （声明） `L76`
  - `int replace(void * source, void * source_end, CreplaceParameter* p, void** result_address…` （声明） `L77`
  - `int replace(void * source, int64_t source_size, CreplaceParameter* p)` （声明） `L78`
  - `int replace(void * source, void * source_end, CreplaceParameter* p)` （声明） `L79`
  - `int replace(void * source, void * source_end)` （声明） `L80`
  - `int replace(void * source, int64_t source_size)` （声明） `L81`
  - `int replace(char* inputfile, char* outputfile, uint8_t* find_data, size_t find_size, uint…` （声明） `L82`
  - `int replace(char* inputfile, char* outputfile, char* find_str, char* replace_str, uint8_t…` （声明） `L83`
  - `int replace(wchar_t* inputfile, wchar_t* outputfile, char* find_str, char* replace_str, u…` （声明） `L84`
  - `int replace(char* inputfile, char* outputfile, char* find_file, char* replace_file, int t…` （声明） `L85`
  - `int replace(int argc, char* argv[])` （声明） `L86`
  - `int add_parameter_list(CreplaceParameter * p)` （声明） `L87`
  - `void list_map()` （声明） `L88`

## algorithm/search.cpp (98 行)

### 宏 #define (1)
- `SEARCH_TEST` = 0  `L87`

### 函数 (7)
- `Csearch::my_init()` — 定义  `L2`
- `Csearch::Csearch()` — 定义  `L9`
- `Csearch::searchString()` — 定义  `L14`
- `Csearch::searchString()` — 定义  `L30`
- `Csearch::searchKmp()` — 定义  `L47`
- `Csearch::get_next()` — 定义  `L74`
- `main()` — 定义  `L92`

> 完整签名见 JSON。

## algorithm/search.h (22 行)

### 宏 #define (1)
- `SEARCH_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_search::Csearch  `L7`  `class`
- 继承: `Object`
- 方法 (6):
  - `Csearch()` （声明） `L9`
  - `int my_init(void *p=nullptr)` （声明） `L11`
  - `static char * searchString(char string[],char *start,char *end,int retStart=0)` （声明） `L12`
  - `static char * searchString(char string[],char *start,long end,int retStart=0)` （声明） `L13`
  - `static void get_next(char *t,int *next)` （声明） `L14`
  - `static char * searchKmp(char *start,char *str,long len,int retStart=1)` （声明） `L15`
