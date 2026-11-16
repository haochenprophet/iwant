# src/uri

> 统计: 5 文件 / 106 行 / 2 类 / 3 方法 / 3 自由函数 / 9 成员变量 / 0 全局变量 / 14 宏 / 0 typedef / 0 枚举

## uri/uri.cpp (18 行)

### 函数 (2)
- `Curi::Curi()` — 定义  `L3`
- `Curi::func()` — 定义  `L9`

> 完整签名见 JSON: `Curi::Curi()`、`int Curi::func(void *p)`

## uri/uri.h (38 行)

### 宏 #define (1)
- `URI_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_uri::Curi  `L11`  `class`
- 继承: `Object`
- 成员变量 (6): `string s_uri`、`string scheme`、`string authority`、`string path`、`string query`、`string fragment`
- 方法 (2):
  - `Curi()` （声明） `L20`
  - `int func(void *p=nullptr)` （声明） `L22`

## uri/url.cpp (8 行)

### 函数 (1)
- `Curl::Curl()` — 定义  `L3`

> 完整签名见 JSON: `Curl::Curl()`

## uri/url.h (22 行)

### 宏 #define (1)
- `URL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_url::Curl  `L8`  `class`
- 继承: `Curi`
- 成员变量 (3): `string prefix`、`string domain`、`string port`
- 方法 (1):
  - `Curl()` （声明） `L14`

## uri/url_def.h (20 行)

### 宏 #define (12)
- `URL_DEF_H`（无值，通常为头文件守卫）  `L2`
- `URL_SCHEME` = "http,https,ftp,lda,news,gopher,telnet,wais"  `L5`
- `URL_ADDRESS` = " httpaddress | ftpaddress | newsaddress |nntpaddress | prosperoadd…  `L7`
- `URL_HTTP_ADDRESS` = "http://hostport[/path] [? search ]"  `L9`
- `URL_FTP_ADDRESS` = "ftp://login/path[ftptype] "  `L10`
- `URL_AFS_ADDRESS` = "afs://cellname/ path"  `L11`
- `URL_NEWS_ADDRESS` = "news:groupart  "  `L12`
- `URL_NNTP_ADDRESS` = "nntp :group /digits "  `L13`
- `URL_MID_ADDRESS` = "mid :addr-spec "  `L14`
- `URL_CID_ADDRESS` = "cid :content-identifier"  `L15`
- `URL_MAILTO_ADDRESS` = "mailto :: xalphas @ hostname"  `L16`
- `URL_WAIS_ADDRESS` = "waisindex | waisdoc"  `L17`
