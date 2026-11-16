# src/http

> 统计: 3 文件 / 156 行 / 1 类 / 2 方法 / 2 自由函数 / 2 成员变量 / 0 全局变量 / 16 宏 / 0 typedef / 0 枚举

## http/http.cpp (17 行)

### 函数 (2)
- `Chttp::my_init()` — 定义  `L4`
- `Chttp::Chttp()` — 定义  `L13`

> 完整签名见 JSON: `int Chttp::my_init(void *p)`、`Chttp::Chttp()`

## http/http.h (24 行)

### 宏 #define (1)
- `http_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_http::Chttp  `L9`  `class`
- 继承: `Object`
- 成员变量 (2): `Curi uri`、`string version`
- 方法 (2):
  - `Chttp()` （声明） `L14`
  - `int my_init(void *p=nullptr)` （声明） `L16`

## http/http_def.h (115 行)

### 宏 #define (15)
- `HTTP_DEF_H`（无值，通常为头文件守卫）  `L3`
- `HTTP_VERSION` = "HTTP/1.1"  `L5`
- `HTTP_MESSAGE` = "Request | Response     ; HTTP/1.1 messages"  `L6`
- `HTTP_MESSAGE_HEADER` = "field-name ":" [ field-value ]"  `L14`
- `HTTP_MESSAGE_BODY` = "entity-body| <entity-body encoded as per Transfer-Encoding>"  `L22`
- `HTTP_GENERAL_HEADER` = "Cache-Control| Connection| Date | Pragma | Trailer | Transfer-Enco…  `L23`
- `HTTP_REQUEST` = "Request-Line *(( general-header | request-header | entity-header )…  `L25`
- `HTTP_METHOD` = "OPTIONS:| GET| HEAD | POST | PUT | DELETE | TRAC| CONNECT | extens…  `L26`
- `HTTP_REQUEST_URI` = "* | absoluteURI | abs_path | authority"  `L29`
- `HTTP_REQUEST_HEADER` = "Accept| Accept-Charset| Accept-Encoding| Accept-Language| Authoriz…  `L34`
- `HTTP_RESPONSE` = "Status-Line *(( general-header| response-header| entity-header ) C…  `L37`
- `HTTP_STATUS_CODE` = " 100  Continue | 101  Switching Protocols | 200  OK | 201  Created…  `L97`
- `HTTP_RESPONSE_HEADER` = "Accept-Ranges| Age| ETag| Location | Proxy-Authenticate  | Retry-A…  `L99`
- `ENTITY_HEADER` = "Allow |  Content-Encoding |  Content-Language |  Content-Length | …  `L112`
- `ENTITY_BODY` = "Content-Encoding( Content-Type( data ) )"  `L114`
