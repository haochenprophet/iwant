# src/openssl

> 统计: 4 文件 / 104 行 / 2 类 / 8 方法 / 8 自由函数 / 0 成员变量 / 0 全局变量 / 4 宏 / 0 typedef / 0 枚举

## openssl/openssl.cpp (32 行)

### 宏 #define (1)
- `OPENSSL_TEST` = 0  `L20`

### 函数 (4)
- `Copenssl::my_init()` — 定义  `L2`
- `Copenssl::Copenssl()` — 定义  `L9`
- `Copenssl::Copenssl()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Copenssl::my_init(void *p)`、`Copenssl::Copenssl()`、`Copenssl::~Copenssl()`、`int main(int argc, char *argv[])`

## openssl/openssl.h (20 行)

### 宏 #define (1)
- `OPENSSL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_openssl::Copenssl  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Copenssl()` （声明） `L9`
  - `~Copenssl()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## openssl/openssl_sha.cpp (32 行)

### 宏 #define (1)
- `OPENSSL_SHA_TEST` = 0  `L20`

### 函数 (4)
- `Copenssl_sha::my_init()` — 定义  `L2`
- `Copenssl_sha::Copenssl_sha()` — 定义  `L9`
- `Copenssl_sha::Copenssl_sha()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Copenssl_sha::my_init(void *p)`、`Copenssl_sha::Copenssl_sha()`、`Copenssl_sha::~Copenssl_sha()`、`int main(int argc, char *argv[])`

## openssl/openssl_sha.h (20 行)

### 宏 #define (1)
- `OPENSSL_SHA_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_openssl_sha::Copenssl_sha  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Copenssl_sha()` （声明） `L9`
  - `~Copenssl_sha()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
