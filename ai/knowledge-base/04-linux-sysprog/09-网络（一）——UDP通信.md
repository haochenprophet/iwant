---
title: "Linux软件编程学习笔记（九）—— 网络（一）——UDP通信"
series: "Linux 软件编程学习笔记"
order: "09"
published: "2026-08-31 20:13:47"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/164228689"
---

> **系列**：Linux 软件编程学习笔记 ｜ **原文**：[Linux软件编程学习笔记（九）—— 网络（一）——UDP通信](https://blog.csdn.net/weixin_56431759/article/details/164228689) ｜ **发布**：2026-08-31 20:13:47

<!-- kb:auto-header -->

### 一、网络相关命令

#### 1. ifconfig

`ifconfig` 用于查看网络接口信息。

```
ifconfig
```

查看所有网卡信息：

```
ifconfig -a
```

也可以使用命令设置网卡 IP：

```bash
sudo ifconfig ens33 192.168.0.125/24 up
```

其中：

```
ens33       → 网卡名称
192.168.0.125 → IP地址
/24         → 子网掩码
up          → 启用网卡
```

---

### 二、虚拟机网络模式

#### 1. NAT模式

NAT 模式下：

- Windows 有网络，虚拟机一般也可以上网
- Windows 使用自己的 IP 地址
- Ubuntu 使用虚拟的 IP 地址
- Ubuntu 可以主动访问网络
- 外部设备一般不能直接访问虚拟机

因此：

> NAT 模式主要用于让 Ubuntu 能够上网。

---

#### 2. 桥接模式

桥接模式下：

- Windows 和 Ubuntu 都使用物理网卡
- Windows 和 Ubuntu 分别拥有自己的 IP 地址
- Ubuntu 可以访问其他设备
- 局域网中的其他设备也可以访问 Ubuntu

因此：

> 如果需要让其他设备访问 Ubuntu，可以使用桥接模式。

---

### 三、Ubuntu网络配置

打开网络配置文件：

```bash
sudo vim /etc/network/interfaces
```

设置网卡使用 DHCP 自动获取 IP：

```
auto lo
iface lo inet loopback

auto ens33
iface ens33 inet dhcp
```

保存退出：

```
ESC
:wq
```

重启系统：

```bash
sudo shutdown -r now
```

重启后查看 IP：

```
ifconfig
```

测试网络：

```
ping www.baidu.com
```

如果能够收到回复，说明网络基本正常。

---

## 四、UDP通信

UDP 是一种常见的网络通信方式。

文档中的 UDP 通信主要学习：

```
socket()
   ↓
sendto()
   ↓
recvfrom()
```

UDP 发端主要使用：

```
socket
sendto
recvfrom
```

---

### 五、socket()

函数原型：

```
int socket(int domain, int type, int protocol);
```

作用：

> 创建一个用于通信的套接字。

#### 参数

##### domain

协议族。

IPv4 使用：

```
AF_INET
```

##### type

```
SOCK_STREAM
```

表示流式套接字，对应：

```
TCP
SOCK_DGRAM
```

表示数据报套接字，对应：

```
UDP
SOCK_RAW
```

表示原始套接字。

##### protocol

一般使用：

```
0
```

表示使用默认协议。

#### 返回值

成功：

> 返回新的文件描述符。

失败：

```
-1
```

例如：

```
int sockfd;

sockfd = socket(AF_INET, SOCK_DGRAM, 0);
```

这里创建的是：

> IPv4 UDP 套接字。

---

## 六、IPv4地址类型

网络编程中常使用：

```
struct sockaddr_in
```

结构体主要成员：

```c
struct sockaddr_in
{
    sa_family_t    sin_family;   // 协议族
    in_port_t      sin_port;     // 端口号
    struct in_addr sin_addr;     // IP地址
};
```

其中：

```
sin_family → 协议族
sin_port   → 端口号
sin_addr   → IP地址
```

IP 地址结构：

```c
struct in_addr
{
    uint32_t s_addr;
};
```

---

## 七、htons()

函数：

```
uint16_t htons(uint16_t hostshort);
```

作用：

> 将本地字节序转换为网络大端字节序。

通常设置端口号时使用：

```
addr.sin_port = htons(8888);
```

例如：

```
8888
 ↓
htons()
 ↓
网络字节序
```

---

## 八、inet_addr()

函数：

```
in_addr_t inet_addr(const char *cp);
```

作用：

> 将字符串形式的 IP 地址转换成网络大端字节序的二进制地址。

例如：

```
addr.sin_addr.s_addr = inet_addr("192.168.0.125");
```

这里：

```
"192.168.0.125"
       ↓
   inet_addr()
       ↓
二进制网络地址
```

---

## 九、bind()

函数：

```
int bind(
    int sockfd,
    const struct sockaddr *addr,
    socklen_t addrlen
);
```

作用：

> 将 IP 地址和端口号与套接字绑定。

例如：

```
bind(sockfd,
     (struct sockaddr *)&addr,
     sizeof(addr));
```

需要注意：

#### ① 只能绑定本机 IP

不能绑定其他计算机的 IP。

#### ② 一个端口不能重复绑定

如果端口已经被其他程序占用，就不能再次绑定。

---

## 十、sendto()

函数：

```
ssize_t sendto(
    int sockfd,
    const void *buf,
    size_t len,
    int flags,
    const struct sockaddr *dest_addr,
    socklen_t addrlen
);
```

作用：

> **发送数据。**

主要参数：

```
sockfd
→ 套接字文件描述符

buf
→ 要发送的数据

len
→ 数据长度

flags
→ 属性，一般为0

dest_addr
→ 目标地址

addrlen
→ 目标地址长度
```

成功：

> 返回发送的字节数。

失败：

```
-1
```

UDP 与 TCP 的一个明显区别就是：

> UDP 使用 `sendto()` 时需要指定目标地址。

---

## 十一、recvfrom()

函数：

```
ssize_t recvfrom(
    int sockfd,
    void *buf,
    size_t len,
    int flags,
    struct sockaddr *src_addr,
    socklen_t *addrlen
);
```

作用：

> **接收数据。**

主要参数：

```
sockfd
→ 套接字文件描述符

buf
→ 存放接收数据的空间

len
→ 最多接收的数据长度

flags
→ 属性，一般为0

src_addr
→ 保存发送方IP和端口

addrlen
→ 地址长度
```

成功：

> 返回接收到的字节数。

失败：

```
-1
```

---

## 十二、inet_ntoa()

函数：

```
char *inet_ntoa(struct in_addr in);
```

作用：

> 将网络字节序的二进制 IP 地址转换成字符串形式的 IP 地址。

例如：

```
二进制IP地址
     ↓
 inet_ntoa()
     ↓
"192.168.0.125"
```

这样就可以方便地打印发送方的 IP 地址。

---

## 十三、UDP通信流程

UDP 的基本流程：

```
发送端                         接收端

socket()                       socket()
   ↓                              ↓
sendto()  ───────数据──────→   recvfrom()
```

如果双方都需要发送和接收：

```
客户端A                         客户端B

socket()                        socket()
bind()                          bind()
   ↓                              ↓
sendto() ───────────────────→ recvfrom()
   ↑                              ↓
recvfrom() ←──────────────── sendto()
```

---

---

← 上一篇：[Linux软件编程学习笔记（八）——进程间通信（二）](08-进程间通信（二）.md) ｜ 下一篇 →：[Linux软件编程学习笔记（十）——网络（二）——TCP通信](10-网络（二）——TCP通信.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
