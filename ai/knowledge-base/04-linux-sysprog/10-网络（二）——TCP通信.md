---
title: "Linux软件编程学习笔记（十）——网络（二）——TCP通信"
series: "Linux 软件编程学习笔记"
order: "10"
published: "2026-09-01 19:38:44"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/164267200"
---

> **系列**：Linux 软件编程学习笔记 ｜ **原文**：[Linux软件编程学习笔记（十）——网络（二）——TCP通信](https://blog.csdn.net/weixin_56431759/article/details/164267200) ｜ **发布**：2026-09-01 19:38:44

<!-- kb:auto-header -->

## 一、TCP简介

TCP（Transmission Control Protocol，传输控制协议）是一种**面向连接、可靠的字节流传输协议**。

TCP在通信前需要进行**三次握手**建立连接，通信过程中具有数据确认机制，通信结束时通过**四次挥手**断开连接。TCP还通过滑动窗口、拥塞控制、掉线检测等机制保证通信的可靠性。

与UDP相比：

| TCP | UDP |
| --- | --- |
| 面向连接 | 无连接 |
| 可靠传输 | 不可靠传输 |
| 通信前需要建立连接 | 不需要建立连接 |
| 资源占用较多 | 资源占用较少 |
| 适合文件传输、聊天等 | 适合实时性要求较高的场景 |

---

## 二、TCP通信流程

TCP通信分为**客户端**和**服务器端**。

#### 1. TCP客户端

基本流程：

```
socket()
   ↓
connect()
   ↓
send()/recv()
   ↓
close()
```

#### 2. TCP服务器

基本流程：

```
socket()
   ↓
bind()
   ↓
listen()
   ↓
accept()
   ↓
send()/recv()
   ↓
close()
```

因此，TCP最重要的函数就是：

```
socket
bind
listen
accept
connect
send
recv
```

文档中也是按照这个流程介绍TCP通信接口的。

---

## 三、socket()

```
int socket(int domain, int type, int protocol);
```

作用：

> 创建一个用于网络通信的套接字。

TCP通常使用：

```
int sockfd = socket(AF_INET, SOCK_STREAM, 0);
```

其中：

```
AF_INET
```

表示使用IPv4。

```
SOCK_STREAM
```

表示使用流式套接字，也就是TCP。

返回值：

```
成功：返回新的文件描述符
失败：返回-1
```

---

## 四、connect()

```
int connect(int sockfd,
            const struct sockaddr *addr,
            socklen_t addrlen);
```

作用：

> 客户端向服务器发起连接。

例如：

```
ret = connect(sockfd,
              (struct sockaddr *)&recvaddr,
              sizeof(recvaddr));
```

参数：

- `sockfd`：套接字文件描述符
- `addr`：服务器地址
- `addrlen`：地址长度

返回值：

```
成功：0
失败：-1
```

---

## 五、bind()

```
int bind(int sockfd,
         const struct sockaddr *addr,
         socklen_t addrlen);
```

作用：

> 将IP地址和端口号绑定到套接字。

例如：

```
bind(sockfd,
     (struct sockaddr *)&recvaddr,
     sizeof(recvaddr));
```

服务器必须先通过 `bind()` 指定自己的IP地址和端口。

注意：

> `bind()`只能绑定**本机的IP地址**，不能绑定其他主机的IP地址；一个端口被占用后，也不能重复绑定。

---

## 六、listen()

```
int listen(int sockfd, int backlog);
```

作用：

> 让服务器进入监听状态，等待客户端连接。

例如：

```
ret = listen(sockfd, 10);
```

其中：

```
sockfd
```

是监听套接字。

```
backlog
```

表示等待处理的连接请求数量。

成功返回 `0`，失败返回 `-1`。

---

## 七、accept()

```
int accept(int sockfd,
           struct sockaddr *addr,
           socklen_t *addrlen);
```

作用：

> 从监听队列中取出一个客户端连接。

例如：

```
confd = accept(sockfd, NULL, NULL);
```

这里要特别注意：

```
sockfd
```

和

```
confd
```

作用不同。

#### sockfd

负责：

```
socket
bind
listen
accept
```

主要用于**监听客户端连接**。

#### confd

`accept()`成功以后返回的新的文件描述符。

负责：

```
send
recv
```

也就是**真正和客户端进行数据通信**。

```
       服务器

   sockfd
      │
    listen
      │
    accept
      ↓
    confd
   ↙     ↘
send     recv
```

`accept()`成功后会返回新的文件描述符用于通信。

---

## 八、send()

```
ssize_t send(int sockfd,
             const void *buf,
             size_t len,
             int flags);
```

作用：

> 向TCP套接字发送数据。

例如：

```
char buf[1024] = "hello";

send(sockfd, buf, strlen(buf), 0);
```

参数：

- `sockfd`：套接字文件描述符
- `buf`：发送数据的首地址
- `len`：发送数据长度
- `flags`：属性，一般使用 `0`

返回值：

```
成功：实际发送的字节数
失败：-1
```

---

## 九、recv()

```
ssize_t recv(int sockfd,
             void *buf,
             size_t len,
             int flags);
```

作用：

> 从TCP套接字中接收数据。

例如：

```
nret = recv(sockfd, buf, sizeof(buf), 0);
```

返回值：

```
>0    成功接收到的字节数
-1    接收失败
0     对方关闭连接
```

这一点非常重要：

```
if (nret == 0)
{
    printf("对方已经断开连接\n");
}
```

文档中也特别指出：**如果对方关闭连接，recv()返回0。**

---

## 十、TCP服务器和客户端总结

#### 客户端

```
socket();

connect();

send();
recv();

close();
```

可以记成：

```
创建 → 连接 → 通信 → 关闭
```

#### 服务器

```
socket();

bind();

listen();

accept();

send();
recv();

close();
```

可以记成：

```
创建 → 绑定 → 监听 → 接收连接 → 通信 → 关闭
```

---

## 十一、TCP文件传输

TCP不仅可以传输字符串，也可以传输文件。

基本思路：

#### 客户端

```
打开文件
   ↓
read()
   ↓
send()
   ↓
read()
   ↓
send()
   ↓
文件发送完成
```

#### 服务器

```
创建文件
   ↓
recv()
   ↓
write()
   ↓
recv()
   ↓
write()
   ↓
文件接收完成
```

例如：

```
while (1)
{
    nret = read(fd, tmpbuff, sizeof(tmpbuff));

    if (nret <= 0)
    {
        break;
    }

    send(sockfd, tmpbuff, nret, 0);
}
```

服务器：

```
while (1)
{
    nret = recv(confd, tmpbuff, sizeof(tmpbuff), 0);

    if (nret == 0)
    {
        break;
    }

    write(fd, tmpbuff, nret);
}
```

这里也能看到TCP和普通文件IO之间的联系：**Socket本质上也是一种文件描述符**，可以通过 `send()`、`recv()`进行网络数据读写。

---

## 十二、TCP三次握手

TCP建立连接之前需要进行三次握手：

```
客户端                         服务器

   SYN  -------------------->

        <-------------------  SYN + ACK

   ACK  -------------------->

          连接建立
```

目的主要是：

1. 确认双方具有正常的发送和接收能力
2. 建立TCP连接
3. 同步双方的序列号

TCP通信前需要三次握手建立连接，这是TCP区别于UDP的重要特点之一。

---

## 十三、TCP四次挥手

通信结束时需要断开TCP连接：

```
客户端                         服务器

   FIN  -------------------->

        <-------------------  ACK

        <-------------------  FIN

   ACK  -------------------->

          连接关闭
```

TCP通过四次挥手完成连接关闭。

---

---

← 上一篇：[Linux软件编程学习笔记（九）—— 网络（一）——UDP通信](09-网络（一）——UDP通信.md) ｜ 下一篇 →：[Linux软件编程学习笔记（十一）——HTTP协议](11-HTTP协议.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
