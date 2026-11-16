# src/socket

> 统计: 2 文件 / 448 行 / 1 类 / 16 方法 / 19 自由函数 / 8 成员变量 / 0 全局变量 / 12 宏 / 2 typedef / 0 枚举

## socket/socket.cpp (372 行)

### 宏 #define (4)
- `SOCKET_TEST` = 0  `L4`
- `SERVER_SOCKET` = 01  `L325`
- `CLIENT_SOCKET` = 0  `L328`
- `CLIENT_SOCKET` = 1  `L330`

### 函数 (19)
- `Csocket::Csocket()` — 定义  `L7`
- `Csocket::Csocket()` — 定义  `L22`
- `Csocket::s_socket()` — 定义  `L28`
- `Csocket::s_connect()` — 定义  `L33`
- `Csocket::s_bind()` — 定义  `L38`
- `Csocket::s_send()` — 定义  `L50`
- `Csocket::s_recv()` — 定义  `L55`
- `Csocket::s_listen()` — 定义  `L60`
- `Csocket::s_accept()` — 定义  `L65`
- `Csocket::s_shutdown()` — 定义  `L70`
- `Csocket::s_close()` — 定义  `L75`
- `Csocket::client()` — 定义  `L89`
- `Csocket::client()` — 定义  `L94`
- `Csocket::client()` — 定义  `L184`
- `Csocket::server()` — 定义  `L190`
- `Csocket::server()` — 定义  `L195`
- `Csocket::server()` — 定义  `L311`
- `Csocket::display()` — 定义  `L316`
- `main()` — 定义  `L333`

> 完整签名见 JSON。

## socket/socket.h (76 行)

### 宏 #define (8)
- `SOCKET_H`（无值，通常为头文件守卫）  `L2`
- `INVALID_SOCKET` = -1  `L16`
- `SOCKET_ERROR` = -1  `L20`
- `SD_RECEIVE` = 0  `L24`
- `SD_SEND` = 1  `L28`
- `SD_BOTH` = 2  `L32`
- `BUF_SIZE` = 0x1000  `L36`
- `DEFAULT_PORT` = "66666"  `L39`

### typedef / using (2)
- `typedef int SOCKET`  `L8`
- `typedef int socklen_t`  `L12`

### 类 (1)
#### n_socket::Csocket  `L42`  `class`
- 继承: `Cos`
- 成员变量 (8): `int s_buf_size` [private]、`int r_buf_size` [private]、`char * hostname`、`char * service`、`char * sendbuf`、`char * recvbuf`、`int io_s_size`、`int io_r_size`
- 方法 (16):
  - `Csocket()` （声明） `L54`
  - `~Csocket()` （声明） `L56`
  - `SOCKET s_socket( int af,int type,int protocol=0)` （声明） `L57`
  - `int s_connect(SOCKET s, sockaddr *sockaddr, int size= sizeof(struct sockaddr))` （声明） `L58`
  - `int s_bind(SOCKET s, sockaddr *sockaddr, int size= sizeof(struct sockaddr))` （声明） `L59`
  - `int s_send(SOCKET s,const char *buf, int size, int flags= 0)` （声明） `L60`
  - `int s_recv(SOCKET s,char *buf,int len,int flags)` （声明） `L61`
  - `int s_listen(SOCKET s,int backlog= SOMAXCONN)` （声明） `L62`
  - `SOCKET s_accept(SOCKET s, sockaddr *o_addr= nullptr, socklen_t * io_size= nullptr)` （声明） `L63`
  - `int s_shutdown(SOCKET s, int how=2)` （声明） `L64`
  - `int s_close(SOCKET s, int how = 2, int run_sd = 1)` （声明） `L65`
  - `int client(char *hostname,char *service, char *sendbuf, int* io_s_size,char *recvbuf,int …` （声明） `L66`
  - `int client()` （声明） `L67`
  - `int server(char *service, char *sendbuf, int* io_s_size,char *recvbuf,int * io_r_size)` （声明） `L68`
  - `int server()` （声明） `L69`
  - `void display()` （声明） `L70`
