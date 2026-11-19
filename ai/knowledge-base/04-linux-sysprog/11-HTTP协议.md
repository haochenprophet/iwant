---
title: "Linux软件编程学习笔记（十一）——HTTP协议"
series: "Linux 软件编程学习笔记"
order: "11"
published: "2026-09-04 19:15:46"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/164374734"
---

> **系列**：Linux 软件编程学习笔记 ｜ **原文**：[Linux软件编程学习笔记（十一）——HTTP协议](https://blog.csdn.net/weixin_56431759/article/details/164374734) ｜ **发布**：2026-09-04 19:15:46

<!-- kb:auto-header -->

## 一、HTTP协议简介

HTTP（HyperText Transfer Protocol，超文本传输协议）是一种用于**客户端和服务器之间进行数据传输**的应用层协议。

我们平时使用浏览器访问网页，本质上就是浏览器作为客户端，通过HTTP协议向Web服务器发送请求，服务器处理请求后，再把结果返回给浏览器。

基本通信过程：

```
客户端                         服务器
  │                              │
  │────── HTTP请求 ─────────────→│
  │                              │
  │←────── HTTP响应 ─────────────│
  │                              │
```

---

### 二、HTTP的特点

HTTP建立在TCP协议之上。

可以理解为：

```
应用层      HTTP
             ↓
传输层      TCP
             ↓
网络层      IP
             ↓
数据链路层
```

所以HTTP通信通常需要先建立TCP连接。

例如访问：

```
http://192.168.0.125:8080
```

大致过程：

```
socket()
    ↓
connect()
    ↓
建立TCP连接
    ↓
发送HTTP请求
    ↓
接收HTTP响应
    ↓
close()
```

---

## 三、HTTP请求

客户端发送给服务器的数据叫做**HTTP请求（Request）**。

一个基本的HTTP请求格式：

```
请求行
请求头
空行
请求正文
```

例如：

```
GET /index.html HTTP/1.1
Host: 192.168.0.125
Connection: close
```

---

### 四、请求行

请求行主要包含三个部分：

```
请求方法    URL    HTTP版本
```

例如：

```
GET /index.html HTTP/1.1
```

其中：

```
GET
```

表示请求方法。

```
/index.html
```

表示请求的资源。

```
HTTP/1.1
```

表示使用HTTP/1.1协议。

---

## 五、HTTP常见请求方法

#### 1. GET

用于**获取服务器资源**。

例如：

```
GET /index.html HTTP/1.1
```

表示向服务器请求：

```
/index.html
```

#### 2. POST

用于向服务器**提交数据**。

例如登录、注册、上传数据等。

```
POST /login HTTP/1.1
```

#### 3. PUT

用于更新服务器上的资源。

#### 4. DELETE

用于删除服务器上的资源。

在初学阶段，重点掌握：

```
GET
POST
```

即可。

---

## 六、HTTP请求头

请求头用于向服务器提供一些额外信息。

例如：

```
Host: 192.168.0.125
Connection: close
User-Agent: Mozilla/5.0
```

常见请求头：

| 请求头 | 作用 |
| --- | --- |
| `Host` | 指定服务器主机 |
| `User-Agent` | 客户端信息 |
| `Connection` | 是否保持连接 |
| `Content-Type` | 请求数据类型 |
| `Content-Length` | 请求正文长度 |

---

## 七、空行

HTTP请求中非常重要的一部分就是：

```
请求头
请求头
请求头

请求正文
```

**请求头和请求正文之间必须有一个空行。**

例如：

```
POST /login HTTP/1.1
Host: 192.168.0.125
Content-Length: 10

username=aa
```

服务器通过这个空行可以知道：

> HTTP请求头结束，后面开始进入请求正文。

---

## 八、HTTP响应

服务器收到HTTP请求后，会向客户端返回**HTTP响应（Response）**。

基本格式：

```
状态行
响应头
空行
响应正文
```

例如：

```
HTTP/1.1 200 OK
Content-Type: text/html
Content-Length: 13

Hello World!
```

---

## 九、HTTP状态码

HTTP响应中的状态码非常重要。

常见状态码：

| 状态码 | 含义 |
| --- | --- |
| `200` | 请求成功 |
| `201` | 创建成功 |
| `301` | 永久重定向 |
| `302` | 临时重定向 |
| `400` | 请求错误 |
| `401` | 未授权 |
| `403` | 禁止访问 |
| `404` | 资源不存在 |
| `500` | 服务器内部错误 |

其中最常见的是：

```
200 OK
```

表示请求成功。

以及：

```
404 Not Found
```

表示请求的资源不存在。

---

## 十、HTTP响应头

例如：

```
HTTP/1.1 200 OK
Content-Type: text/html
Content-Length: 13
Connection: close
```

常见响应头：

| 响应头 | 作用 |
| --- | --- |
| `Content-Type` | 指定返回数据类型 |
| `Content-Length` | 指定响应正文长度 |
| `Connection` | TCP连接方式 |
| `Server` | 服务器信息 |
| `Location` | 重定向地址 |

---

## 十一、Content-Type

`Content-Type` 用来表示数据的类型。

例如：

网页：

```
Content-Type: text/html
```

普通文本：

```
Content-Type: text/plain
```

JPEG图片：

```
Content-Type: image/jpeg
```

PNG图片：

```
Content-Type: image/png
```

因此服务器发送不同类型的文件时，需要设置相应的 `Content-Type`。

---

## 十二、使用C语言实现简单HTTP服务器

HTTP本身建立在TCP之上，所以我们之前学习的TCP服务器代码仍然可以使用。

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
recv()       ← 接收HTTP请求
   ↓
解析请求
   ↓
open()       ← 打开网页文件
   ↓
send()       ← 返回HTTP响应
   ↓
close()
```

例如客户端请求：

```
GET /index.html HTTP/1.1
Host: 192.168.0.125
```

服务器首先：

```
recv(confd, buf, sizeof(buf), 0);
```

接收请求。

然后从请求中找到：

```
/index.html
```

再打开：

```
fd = open("index.html", O_RDONLY);
```

最后将文件内容通过：

```
send(confd, buf, nret, 0);
```

发送给浏览器。

---

## 十三、最简单的HTTP响应

服务器可以直接发送：

```
char response[] =
    "HTTP/1.1 200 OK\r\n"
    "Content-Type: text/html\r\n"
    "Content-Length: 12\r\n"
    "\r\n"
    "Hello World!";
```

然后：

```
send(confd, response, strlen(response), 0);
```

浏览器收到后就可以按照HTTP协议解析。

这里的：

```
\r\n
```

非常重要。

HTTP协议中的请求行、请求头等通常使用：

```
\r\n
```

作为换行。

而：

```
\r\n\r\n
```

表示：

```
HTTP头部结束
```

---

## 十四、HTTP与TCP的关系

可以简单理解成：

```
HTTP
  ↓
TCP
  ↓
 IP
```

TCP负责：

> **可靠地传输数据。**

HTTP负责：

> **规定这些数据应该按照什么格式进行通信。**

例如：

```
HTTP/1.1 200 OK
Content-Type: text/html

Hello
```

这是HTTP定义的内容。

而这些数据最终通过TCP连接发送。

---

← 上一篇：[Linux软件编程学习笔记（十）——网络（二）——TCP通信](10-网络（二）——TCP通信.md) ｜ 下一篇 →：[Linux软件编程学习笔记（十二）——TCP并发服务器模型](12-TCP并发服务器模型.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
