# src/file

> 统计: 5 文件 / 1218 行 / 3 类 / 75 方法 / 78 自由函数 / 19 成员变量 / 0 全局变量 / 5 宏 / 0 typedef / 2 枚举

## file/file.cpp (835 行)

### 宏 #define (1)
- `FILE_TEST` = 0  `L823`

### 函数 (56)
- `Cfile::my_init()` — 定义  `L11`
- `Cfile::Cfile()` — 定义  `L28`
- `Cfile::Cfile()` — 定义  `L33`
- `Cfile::Cfile()` — 定义  `L39`
- `Cfile::is_exist()` — 定义  `L44`
- `Cfile::is_exist()` — 定义  `L57`
- `Cfile::f_append()` — 定义  `L63`
- `Cfile::f_append()` — 定义  `L77`
- `Cfile::f_append()` — 定义  `L83`
- `Cfile::f_append()` — 定义  `L89`
- `Cfile::f_size()` — 定义  `L96`
- `Cfile::f_size()` — 定义  `L107`
- `Cfile::f_read()` — 定义  `L114`
- `Cfile::f_read()` — 定义  `L146`
- `Cfile::checksum()` — 定义  `L152`
- `Cfile::checksum()` — 定义  `L167`
- `Cfile::crc()` — 定义  `L173`
- `Cfile::crc()` — 定义  `L197`
- `Cfile::md5()` — 定义  `L203`
- `Cfile::md5()` — 定义  `L214`
- `Cfile::before_md5()` — 定义  `L219`
- `Cfile::after_md5()` — 定义  `L227`
- `Cfile::cat()` — 定义  `L235`
- `Cfile::cut()` — 定义  `L245`
- `Cfile::cut()` — 定义  `L271`
- `Cfile::copy()` — 定义  `L276`
- `Cfile::copy()` — 定义  `L281`
- `Cfile::f_append()` — 定义  `L286`
- `Cfile::f_append()` — 定义  `L292`
- `Cfile::f_find()` — 定义  `L297`
- `Cfile::f_find()` — 定义  `L310`
- `Cfile::find()` — 定义  `L315`
- `Cfile::list()` — 定义  `L324`
- `Cfile::find_relpace()` — 定义  `L329`
- `Cfile::is_exist_func()` — 定义  `L341`
- `Cfile::func()` — 定义  `L366`
- `Cfile::create()` — 定义  `L393`
- `Cfile::rm()` — 定义  `L408`
- `Cfile::rn()` — 定义  `L422`
- `Cfile::compare()` — 定义  `L435`
- `Cfile::compare()` — 定义  `L456`
- `Cfile::different()` — 定义  `L467`
- `Cfile::different()` — 定义  `L502`
- `Cfile::f_write()` — 定义  `L513`
- `Cfile::f_write()` — 定义  `L526`
- `Cfile::f_write()` — 定义  `L532`
- `Cfile::merge()` — 定义  `L538`
- `Cfile::merge()` — 定义  `L556`
- `Cfile::replace()` — 定义  `L573`
- `Cfile::insert()` — 定义  `L585`
- `Cfile::swap()` — 定义  `L597`
- `Cfile::swap()` — 定义  `L633`
- `Cfile::do_action()` — 定义  `L639`
- `Cfile::set_action_parameter()` — 定义  `L671`
- `Cfile::deal_cmd()` — 定义  `L790`
- `main()` — 定义  `L828`

> 完整签名见 JSON。

## file/file.h (86 行)

### 宏 #define (2)
- `FILE_H`（无值，通常为头文件守卫）  `L2`
- `CFILE_FILE_OUT` = "cfile.out"  `L8`

### 类 (1)
#### n_file::Cfile  `L11`  `class`
- 继承: `CmyMemory`
- 成员变量 (12): `string f_name`、`string s_output_fname`、`std::fstream ap_fs`、`char* src_file`、`char* target_file`、`char* fname_left`、`char* fname_right`、`char* diff_file`、`char* crc_func`、`size_t swap_start`、`size_t swap_size`、`DisplayType display_type`
- 方法 (54):
  - `Cfile()` （声明） `L25`
  - `Cfile(char* fname)` （声明） `L27`
  - `~Cfile()` （声明） `L28`
  - `int my_init(void* p=nullptr)` （声明） `L29`
  - `int is_exist(char *filename)` （声明） `L30`
  - `int is_exist()` （声明） `L31`
  - `int f_append(char *filename, char * ap_str)` （声明） `L32`
  - `int f_append(string filename, char * ap_str)` （声明） `L33`
  - `int f_append(string *filename, string *ap_str)` （声明） `L34`
  - `int f_append(char *filename, string ap_str)` （声明） `L35`
  - `int f_append(char * ap_str)` （声明） `L36`
  - `int f_append(string * ap_str)` （声明） `L37`
  - `size_t f_size(char *f_name)` （声明） `L38`
  - `size_t f_size()` （声明） `L39`
  - `int f_read(char *f_name)` （声明） `L40`
  - `int f_read()` （声明） `L41`
  - `int checksum(char* f_name, unsigned int * sum = nullptr)` （声明） `L42`
  - `int checksum()` （声明） `L43`
  - `int crc(char* f_name, char* crc_func , unsigned int* sumchk_crc = nullptr)` （声明） `L44`
  - `int crc(char* crc_func =nullptr)` （声明） `L45`
  - `int md5(char* f_name)` （声明） `L46`
  - `int md5()` （声明） `L47`
  - `int before_md5(void* p = nullptr)` （声明） `L48`
  - `int after_md5(void* p = nullptr)` （声明） `L49`
  - `size_t f_write(char* f_name, void* addr, size_t size)` （声明） `L50`
  - `size_t f_write(char* f_name, uint8_t* start, uint8_t* end)` （声明） `L51`
  - `size_t f_write(char* f_name)` （声明） `L52`
  - `int cat(size_t start=0,size_t size=-1,DisplayType t= DisplayType::string)` （声明） `L53`
  - `int cut(char *file,long start=0,long size=-1,char *out_file=(char *)CFILE_FILE_OUT)` （声明） `L54`
  - `int cut()` （声明） `L55`
  - `int copy()` （声明） `L56`
  - `int copy(char * from,char *to)` （声明） `L57`
  - `char * f_find(char *f_name,char * str,char *start)` （声明） `L58`
  - `char * f_find(char * str,char *start)` （声明） `L59`
  - `int list(char* dir, char* term)` （声明） `L60`
  - `int find(char* dir, char* term)` （声明） `L61`
  - `int find_relpace(char* dir, char* term, char* find, char* target)` （声明） `L62`
  - `int is_exist_func(char *f_name,char *func_name,int dispaly=0)` （声明） `L63`
  - `int func(void *p=nullptr)` （声明） `L64`
  - `int create(void *p = nullptr)` （声明） `L65`
  - `int rm (char * filename = nullptr)` （声明） `L66`
  - `int rn(char * oldname =nullptr, char * newname =nullptr)` （声明） `L67`
  - `int compare(char* fname_left, char* fname_right)` （声明） `L68`
  - `int compare()` （声明） `L69`
  - `int different(char* fname_left, char* fname_right ,char * diff_log_file=(char *)" ")` （声明） `L70`
  - `int different(char* diff_log_file = (char *)" ")` （声明） `L71`
  - `int merge(int argc, char* argv[])` （声明） `L72`
  - `int replace(int argc, char* argv[])` （声明） `L73`
  - `int insert(int argc, char* argv[])` （声明） `L74`
  - `int swap(char* source_file, char* target_file, long start = 0, long size = -1, char* out_…` （声明） `L75`
  - `int swap()` （声明） `L76`
  - `int do_action(void * a= nullptr)` （声明） `L77`
  - `int set_action_parameter(int argc, char* argv[])` （声明） `L78`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L79`

## file/fileAllot.cpp (173 行)

### 函数 (22)
- `CfileMem::CfileMem()` — 定义  `L4`
- `CfileMem::clear()` — 定义  `L9`
- `CfileAllot::my_init()` — 定义  `L19`
- `CfileAllot::CfileAllot()` — 定义  `L26`
- `CfileAllot::CfileAllot()` — 定义  `L32`
- `CfileAllot::CfileAllot()` — 定义  `L39`
- `CfileAllot::CfileAllot()` — 定义  `L46`
- `CfileAllot::freeMe()` — 定义  `L51`
- `CfileAllot::freeMe()` — 定义  `L56`
- `CfileAllot::clear()` — 定义  `L64`
- `CfileAllot::clear()` — 定义  `L69`
- `CfileAllot::allot()` — 定义  `L74`
- `CfileAllot::allot()` — 定义  `L79`
- `CfileAllot::allot()` — 定义  `L98`
- `CfileAllot::allot()` — 定义  `L103`
- `CfileAllot::fsize()` — 定义  `L115`
- `CfileAllot::display()` — 定义  `L121`
- `CfileAllot::display()` — 定义  `L131`
- `CfileAllot::display()` — 定义  `L136`
- `CfileAllot::token()` — 定义  `L146`
- `CfileAllot::token()` — 定义  `L159`
- `main()` — 定义  `L166`

> 完整签名见 JSON。

## file/fileAllot.h (47 行)

### 宏 #define (1)
- `FILEALLOT_H`（无值，通常为头文件守卫）  `L2`

### 类 (2)
#### n_fileAllot::CfileMem  `L7`  `class`
- 成员变量 (6): `char * start`、`char * current`、`char * end`、`size_t file_size`、`size_t read_size`、`bool empty`
- 方法 (2):
  - `CfileMem()` （声明） `L9`
  - `void clear()` （声明） `L11`

#### n_fileAllot::CfileAllot  `L20`  `class`
- 继承: `Object`
- 成员变量 (1): `CfileMem file_m`
- 方法 (19):
  - `CfileAllot()` （声明） `L24`
  - `CfileAllot(char * fname)` （声明） `L25`
  - `CfileAllot(FILE * fp)` （声明） `L26`
  - `~CfileAllot()` （声明） `L27`
  - `int my_init(void *p=nullptr)` （声明） `L28`
  - `void clear()` （声明） `L29`
  - `void clear(CfileMem * p)` （声明） `L30`
  - `int allot(FILE *fp, CfileMem * p)` （声明） `L31`
  - `int allot(char *fname, CfileMem * p)` （声明） `L32`
  - `int allot(char *fname)` （声明） `L33`
  - `int allot(FILE * fp)` （声明） `L34`
  - `size_t fsize(FILE *fp)` （声明） `L35`
  - `void display(CfileMem *p, bool binary = false)` （声明） `L36`
  - `void display(bool binary = false)` （声明） `L37`
  - `void display(char *cp, size_t count, bool binary = false)` （声明） `L38`
  - `int token(const char *delimit)` （声明） `L39`
  - `int token()` （声明） `L40`
  - `void freeMe(CfileMem *p)` （声明） `L41`
  - `void freeMe()` （声明） `L42`

## file/file_action.h (77 行)

### 宏 #define (1)
- `FILE_ACTION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class FileAtcionClass   `L6`
- none、create、remove、rename、read、write、rd_wr、exist、size、merge、replace、compare、insert、checksum、crc、md5、find、list、diff、swap

### 枚举 enum class FileAtcion   `L30`
- 共 44 个枚举常量（详情见 JSON）
