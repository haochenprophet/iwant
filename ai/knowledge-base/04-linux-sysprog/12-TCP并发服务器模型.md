---
title: "Linux软件编程学习笔记（十二）——TCP并发服务器模型"
series: "Linux 软件编程学习笔记"
order: "12"
published: "2026-09-04 19:20:33"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/164374771"
---

> **系列**：Linux 软件编程学习笔记 ｜ **原文**：[Linux软件编程学习笔记（十二）——TCP并发服务器模型](https://blog.csdn.net/weixin_56431759/article/details/164374771) ｜ **发布**：2026-09-04 19:20:33

<!-- kb:auto-header -->

## 一、什么是TCP并发服务器

普通的 TCP 服务器通常只能处理一个客户端：

```
客户端A ──→ 服务器
             ↓
          处理A
             ↓
          处理完成
```

如果客户端A一直连接，客户端B就可能无法及时得到处理。

所以需要使用**TCP并发服务器模型**，让服务器可以同时处理多个客户端。

常见的实现方式：

```
TCP并发服务器
     │
     ├── 多线程
     │
     ├── 多进程
     │
     └── IO多路复用
           ├── select
           └── epoll
```

---

### 二、TCP并发服务器之多线程

多线程可以解决 TCP 并发问题。

基本思路：

```
           服务器
             │
        accept客户端
             │
  ┌──────────┼──────────┐
  ↓          ↓          ↓
线程1       线程2       线程3
  ↓          ↓          ↓
客户端A     客户端B     客户端C
```

服务器每接收到一个客户端，就创建一个线程处理这个客户端。

例如：

```
while (1)
{
    newfd = accept(sockfd, NULL, NULL);

    pthread_create(&tid, NULL, client_fun, &newfd);
}
```

#### 多线程的特点

线程拥有独立的栈空间，因此系统能够同时创建的线程数量是有限的。

如果同时连接的客户端非常多，就可能创建大量线程，从而导致系统资源消耗过大，甚至出现系统崩溃的风险。

所以实际开发中通常会配合**线程池**使用。

课程文档也指出，多线程通常搭配线程池进行线程管理。

---

## 三、4种常见的IO模型

Linux 中常见的 IO 模型有：

1. 阻塞 IO
2. 非阻塞 IO
3. 信号驱动 IO
4. 多路复用 IO

---

### 1. 阻塞IO

阻塞 IO 是最常见、最简单的 IO 方式。

例如：

```
recv(sockfd, buf, sizeof(buf), 0);
```

如果当前没有数据：

```
recv()
  ↓
没有数据
  ↓
进程阻塞
  ↓
等待数据到来
  ↓
收到数据
  ↓
继续执行
```

阻塞期间 CPU 不需要一直执行轮询，因此不会持续占用 CPU。

---

### 2. 非阻塞IO

非阻塞 IO 不会一直等待数据。

如果没有数据，函数会立即返回，程序可以继续执行。

例如：

```
recv()
  ↓
没有数据
  ↓
立即返回
  ↓
程序继续运行
  ↓
再次检查
```

这种方式需要不断轮询检查数据是否到来。

因此，如果一直轮询，CPU 可能会产生较大的资源消耗。

课程文档中将其概括为：没有数据时，CPU 仍会执行代码来轮询检测数据。

---

### 3. 信号驱动IO

信号驱动 IO 的基本思想：

```
设置文件描述符
       ↓
内核监测
       ↓
有事件发生
       ↓
发送SIGIO信号
       ↓
用户程序处理事件
```

也就是说，由内核监测文件描述符的事件，当事件发生时通知用户层。

课程文档中将其描述为：设置文件描述符为异步 IO，并指定通知对象，当事件发生时通知用户层，可以捕捉 `SIGIO` 信号进行处理。

---

## 四、多路复用IO

多路复用 IO 可以让一个程序同时监听多个文件描述符。

例如一个 TCP 服务器：

```
     服务器
        │
  ┌─────┼─────┐
  ↓     ↓     ↓
客户端A 客户端B 客户端C
  │     │     │
  └─────┼─────┘
        ↓
    select/epoll
```

当某个客户端有数据到来时，服务器处理对应的文件描述符。

常见的多路复用 IO：

- `select`
- `epoll`

---

## 五、select

`select` 用来监听一组文件描述符。

当至少有一个文件描述符产生事件时，`select` 不再阻塞。

#### 1. 常用函数

```
FD_ZERO()
FD_SET()
FD_CLR()
FD_ISSET()
select()
```

#### FD_ZERO

```
FD_ZERO(&set);
```

功能：

> 将文件描述符集合清空。

#### FD_SET

```
FD_SET(fd, &set);
```

功能：

> 将文件描述符 `fd` 加入集合。

#### FD_CLR

```
FD_CLR(fd, &set);
```

功能：

> 将文件描述符 `fd` 从集合中删除。

#### FD_ISSET

```
FD_ISSET(fd, &set);
```

功能：

> 判断文件描述符 `fd` 是否仍然在集合中。

这些接口的定义和用途见课程文档。

---

### 2. select函数

```
int select(int nfds,
           fd_set *readfds,
           fd_set *writefds,
           fd_set *exceptfds,
           struct timeval *timeout);
```

主要参数：

| 参数 | 含义 |
| --- | --- |
| `nfds` | 最大文件描述符值 + 1 |
| `readfds` | 读文件描述符集合 |
| `writefds` | 写文件描述符集合 |
| `exceptfds` | 异常文件描述符集合 |
| `timeout` | 超时时间 |

课程文档对 `select` 的接口和参数进行了上述定义。

---

## 六、epoll

`epoll` 也是 Linux 中常用的 IO 多路复用机制。

主要使用三个函数：

```
epoll_create()
epoll_ctl()
epoll_wait()
```

课程文档将这三个函数作为 epoll 的核心接口。

---

### 1. epoll_create

```
int epoll_create(int size);
```

功能：

> 创建内核监听事件表。

返回值：

```
成功：返回文件描述符
失败：返回-1
```

课程文档说明 `size` 参数目前可以忽略。

---

### 2. epoll_ctl

```
int epoll_ctl(int epfd,
              int op,
              int fd,
              struct epoll_event *event);
```

功能：

> 对 epoll 的事件表进行操作。

常用操作：

```
EPOLL_CTL_ADD
```

添加事件。

```
EPOLL_CTL_MOD
```

修改事件。

```
EPOLL_CTL_DEL
```

删除事件。

这些操作以及参数含义见课程文档。

---

### 3. struct epoll_event

```c
struct epoll_event
{
    uint32_t events;
    epoll_data_t data;
};
```

常见事件：

```
EPOLLIN
```

表示文件描述符可以进行读操作。

```
EPOLLOUT
```

表示文件描述符可以进行写操作。

```
EPOLLET
```

表示使用**边沿触发模式**。

默认情况下使用**水平触发模式**。

---

## 七、epoll_wait

```
int epoll_wait(int epfd,
               struct epoll_event *events,
               int maxevents,
               int timeout);
```

功能：

> 等待 epoll 事件表中的事件发生。

参数：

| 参数 | 含义 |
| --- | --- |
| `epfd` | epoll 文件描述符 |
| `events` | 保存发生事件的数组 |
| `maxevents` | 数组大小 |
| `timeout` | 超时时间 |

`timeout`：

```
-1      一直阻塞等待
0       立即返回
>0      等待指定时间
```

返回值：

```
>0   发生事件的文件描述符数量
 0   超时，没有事件
-1   出错
```

课程文档给出了 `epoll_wait` 的完整功能、参数和返回值说明。

---

## 八、select和epoll的区别

这是本节非常重要的内容。

| 对比 | select | epoll |
| --- | --- | --- |
| 文件描述符集合 | 有上限 | 没有这个上限限制 |
| 监听位置 | 应用层 | 内核 |
| 事件通知 | 需要用户查找 | 可以直接获得产生事件的文件描述符 |
| 触发模式 | 水平触发 | 水平触发、边沿触发 |
| 效率 | 相对较低 | 更适合大量连接 |

#### select

```
用户空间
   ↓
文件描述符集合
   ↓
内核检查
   ↓
返回用户空间
   ↓
用户自己查找哪个fd发生事件
```

#### epoll

```
用户程序
   ↓
epoll事件表
   ↓
内核持续监听
   ↓
产生事件
   ↓
epoll_wait返回事件
   ↓
直接处理发生事件的fd
```

课程文档指出：

- `select` 的文件描述符集合本质是数组，有上限；
- `select` 需要用户手动查找产生事件的文件描述符；
- `epoll` 的事件表位于内核；
- `epoll` 可以自动获得产生事件的文件描述符；
- `epoll` 支持水平触发和边沿触发。

---

## 九、TCP并发服务器的核心思想

最终可以把 TCP 并发服务器理解成：

```
          TCP服务器
              │
        socket/bind/listen
              │
            等待
              │
  ┌───────────┼───────────┐
  ↓           ↓           ↓
客户端A      客户端B      客户端C
  │           │           │
  └───────────┼───────────┘
              ↓
        并发处理客户端
              │
    ┌─────────┴─────────┐
    ↓                   ↓
 多线程              IO多路复用
                        │
                 ┌──────┴──────┐
                 ↓             ↓
               select        epoll
```

---

## 十、本节重点

#### 1. TCP并发服务器

解决：

> 一个服务器同时处理多个客户端的问题。

#### 2. 多线程

```
pthread_create()
```

一个客户端对应一个线程，但客户端过多时线程数量会受到限制，因此通常搭配线程池。

#### 3. select

核心函数：

```
FD_ZERO()
FD_SET()
FD_CLR()
FD_ISSET()
select()
```

#### 4. epoll

核心函数：

```
epoll_create()
epoll_ctl()
epoll_wait()
```

#### 5. epoll事件

```
EPOLLIN
EPOLLOUT
EPOLLET
```

#### 6. 最重要的区别

```
select：
需要自己遍历查找哪个fd发生事件

epoll：
可以直接获取发生事件的fd
```

---

← 上一篇：[Linux软件编程学习笔记（十一）——HTTP协议](11-HTTP协议.md) ｜ 下一篇 →：[Linux软件编程学习笔记（十三）——数据库](13-数据库.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
