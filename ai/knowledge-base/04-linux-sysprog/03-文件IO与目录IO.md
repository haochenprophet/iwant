---
title: "Linux软件编程学习笔记（三）——文件IO与目录IO"
series: "Linux 软件编程学习笔记"
order: "03"
published: "2026-08-25 18:43:49"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/164063241"
---

> **系列**：Linux 软件编程学习笔记 ｜ **原文**：[Linux软件编程学习笔记（三）——文件IO与目录IO](https://blog.csdn.net/weixin_56431759/article/details/164063241) ｜ **发布**：2026-08-25 18:43:49

<!-- kb:auto-header -->

## 一、文件IO概述

Linux 中的文件 IO 主要通过**系统调用**完成。

与前面学习的 C 标准 IO 相比：

```
C标准IO
    ↓
库函数
    ↓
FILE *

文件IO
    ↓
系统调用
    ↓
文件描述符 fd
```

课程资料中明确区分了两者：标准 IO 是库函数并且带有缓存；文件 IO 是系统调用，没有标准 IO 的用户态缓存，可以用于设备文件和通信相关文件。

---

## 二、文件描述符 FD

Linux 中打开一个文件后，内核会为这个文件分配一个**文件描述符（File Descriptor，FD）**。

文件描述符本质上是一个：

```
int
```

类型的非负整数。

例如：

```
int fd = open("file.txt", O_RDONLY);
```

如果打开成功：

```
fd = 3
```

那么：

```
fd
 ↓
内核中的打开文件
 ↓
file.txt
```

---

### 1. 三个默认文件描述符

Linux 程序启动时默认打开三个文件描述符：

| 文件描述符 | 名称 | 作用 |
| --- | --- | --- |
| `0` | `stdin` | 标准输入 |
| `1` | `stdout` | 标准输出 |
| `2` | `stderr` | 标准错误 |

课程资料中也明确给出了这三个默认文件描述符。

可以记忆：

```
0 → 输入
1 → 输出
2 → 错误
```

---

## 三、文件描述符的分配规律

Linux 分配文件描述符时，一般会选择：

> **当前最小的、没有使用的非负整数。**

例如：

```
0 stdin
1 stdout
2 stderr
```

如果程序第一次打开文件：

```
open("a.txt", O_RDONLY);
```

通常得到：

```
fd = 3
```

再打开：

```
open("b.txt", O_RDONLY);
```

得到：

```
fd = 4
```

所以：

```
0  1  2  3  4  5 ...
│  │  │  │  │
│  │  │  │  └── 第2个打开文件
│  │  │  └───── 第1个打开文件
│  │  └──────── stderr
│  └─────────── stdout
└────────────── stdin
```

---

## 四、open() —— 打开文件

头文件：

```
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
```

函数原型：

```
int open(const char *pathname, int flags);
```

或者：

```
int open(const char *pathname, int flags, mode_t mode);
```

功能：

> 打开文件，并返回文件描述符。

课程资料中列出了 `open()` 的函数原型、参数、常用 flags 以及返回值。

---

## 五、open() 常见 flags

### 1. O_RDONLY

只读：

```
int fd = open("file.txt", O_RDONLY);
```

---

### 2. O_WRONLY

只写：

```
int fd = open("file.txt", O_WRONLY);
```

---

### 3. O_RDWR

读写：

```
int fd = open("file.txt", O_RDWR);
```

---

### 4. O_CREAT

文件不存在时创建：

```
int fd = open("file.txt",
              O_WRONLY | O_CREAT,
              0664);
```

注意：

> 使用 `O_CREAT` 时，需要提供第三个参数 `mode`。

---

### 5. O_TRUNC

打开文件时清空原有内容：

```
O_TRUNC
```

---

### 6. O_APPEND

追加写：

```
O_APPEND
```

写入数据时，会写到文件末尾。

---

### 7. O_EXCL

与 `O_CREAT` 配合使用。

如果文件已经存在，则打开失败。

课程资料中列出了：

```
O_RDONLY
O_WRONLY
O_RDWR
O_CREAT
O_EXCL
O_TRUNC
O_APPEND
```

等常见选项。

---

## 六、flags 可以组合使用

多个 flags 可以通过：

```
|
```

进行组合。

例如：

```
int fd = open("file.txt",
              O_WRONLY | O_CREAT | O_TRUNC,
              0664);
```

含义：

```
O_WRONLY
    ↓
只写

O_CREAT
    ↓
不存在则创建

O_TRUNC
    ↓
存在则清空
```

---

## 七、标准IO与文件IO的对应关系

可以建立这样的对应关系：

| 标准 IO | 文件 IO |
| --- | --- |
| `r` | `O_RDONLY` |
| `r+` | `O_RDWR` |
| `w` | `O_WRONLY \| O_CREAT \| O_TRUNC` |
| `w+` | `O_RDWR \| O_CREAT \| O_TRUNC` |
| `a` | `O_WRONLY \| O_CREAT \| O_APPEND` |
| `a+` | `O_RDWR \| O_CREAT \| O_APPEND` |

课程资料中也给出了这组对应关系。

这样就比较容易理解：

```
fopen("a.txt", "w")
```

和：

```
open("a.txt",
     O_WRONLY | O_CREAT | O_TRUNC,
     0664);
```

本质上都是：

> 以写方式打开文件，如果不存在就创建，如果存在则清空。

---

## 八、open() 返回值

打开成功：

```
fd >= 0
```

打开失败：

```
fd == -1
```

所以一定要判断：

```c
int fd = open("file.txt", O_RDONLY);

if(fd == -1)
{
    perror("open");
    return -1;
}
```

---

## 九、read() —— 读取文件

函数原型：

```
ssize_t read(int fd, void *buf, size_t count);
```

参数：

```
fd
 ↓
文件描述符

buf
 ↓
存放读取数据的空间

count
 ↓
希望读取的最大字节数
```

例如：

```c
char buf[1024] = {0};

int ret = read(fd, buf, sizeof(buf));
```

课程资料中说明，`read()` 会尝试从文件描述符中读取指定数量的字节，并将数据存入 `buf`。

---

## 十、read() 返回值

这是文件 IO 中非常重要的知识。

```
ret > 0
```

表示：

> 实际读取了 `ret` 个字节。

---

```
ret == 0
```

表示：

> 已经读取到文件末尾。

也就是：

```
EOF
```

---

```
ret == -1
```

表示：

> 读取失败。

因此典型代码：

```
while(1)
{
    ret = read(fd, buf, sizeof(buf));

    if(ret > 0)
    {
        // 处理数据
    }
    else if(ret == 0)
    {
        break;
    }
    else
    {
        perror("read");
        break;
    }
}
```

---

## 十一、write() —— 写文件

函数原型：

```
ssize_t write(int fd, const void *buf, size_t count);
```

例如：

```
char buf[] = "Hello Linux\n";

write(fd, buf, sizeof(buf) - 1);
```

表示：

> 将 `buf` 中的数据写入 `fd` 所对应的文件。

---

### write() 返回值

成功：

```
> 0
```

表示实际写入的字节数。

失败：

```
-1
```

所以：

```c
int ret = write(fd, buf, strlen(buf));

if(ret == -1)
{
    perror("write");
}
```

---

## 十二、close() —— 关闭文件

文件使用完成以后需要关闭：

```
close(fd);
```

头文件：

```
#include <unistd.h>
```

完整流程：

```
open()
  ↓
获得 fd
  ↓
read()/write()
  ↓
close()
```

这是文件 IO 最基本的操作流程。

---

## 十三、一个完整的文件读取程序

例如读取 `file.txt`：

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = -1;
    char buf[1024] = {0};
    int ret = 0;

    fd = open("file.txt", O_RDONLY);

    if(fd == -1)
    {
        perror("open");
        return -1;
    }

    while(1)
    {
        ret = read(fd, buf, sizeof(buf));

        if(ret > 0)
        {
            write(STDOUT_FILENO, buf, ret);
        }
        else if(ret == 0)
        {
            break;
        }
        else
        {
            perror("read");
            break;
        }
    }

    close(fd);

    return 0;
}
```

这里：

```
STDOUT_FILENO
```

就是：

```
1
```

也就是标准输出。

程序的数据流：

```
file.txt
   ↓
 open()
   ↓
 fd
   ↓
 read()
   ↓
 buf
   ↓
 write()
   ↓
 stdout
   ↓
 屏幕
```

---

## 十四、文件复制

文件 IO 中一个非常经典的练习：

> 将 `src.jpg` 拷贝到 `dst.jpg`。

课程资料也将这个作为文件 IO 的练习。

基本思想：

```
src.jpg
   ↓
 open
   ↓
 read
   ↓
 buf
   ↓
 write
   ↓
 dst.jpg
```

代码：

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int srcfd = -1;
    int dstfd = -1;

    char buf[4096] = {0};
    int ret = 0;

    srcfd = open("src.jpg", O_RDONLY);

    if(srcfd == -1)
    {
        perror("open src.jpg");
        return -1;
    }

    dstfd = open("dst.jpg",
                 O_WRONLY | O_CREAT | O_TRUNC,
                 0664);

    if(dstfd == -1)
    {
        perror("open dst.jpg");
        close(srcfd);
        return -1;
    }

    while(1)
    {
        ret = read(srcfd, buf, sizeof(buf));

        if(ret > 0)
        {
            write(dstfd, buf, ret);
        }
        else if(ret == 0)
        {
            break;
        }
        else
        {
            perror("read");
            break;
        }
    }

    close(srcfd);
    close(dstfd);

    return 0;
}
```

这里特别注意：

```
write(dstfd, buf, ret);
```

必须写：

```
ret
```

而不是：

```
sizeof(buf)
```

因为 `read()` 最后一次可能只读取一部分数据。

---

## 十五、lseek() —— 文件偏移量

文件打开以后存在一个**当前文件偏移量**。

例如文件：

```
abcdefg
```

第一次：

```
read(fd, buf, 3);
```

读取：

```
abc
```

此时偏移量移动到：

```
abc|defg
   ↑
```

再调用：

```
read(fd, buf, 2);
```

读取：

```
de
```

---

### lseek() 原型

```
off_t lseek(int fd, off_t offset, int whence);
```

课程资料中给出的 `lseek()` 功能就是修改文件描述符对应的文件偏移量。

---

## 十六、lseek() 的三个 whence

### 1. SEEK_SET

从文件开头计算：

```
lseek(fd, 0, SEEK_SET);
```

表示：

> 回到文件开头。

---

### 2. SEEK_CUR

从当前位置计算：

```
lseek(fd, 10, SEEK_CUR);
```

表示：

> 当前偏移量向后移动 10 个字节。

---

### 3. SEEK_END

从文件末尾计算：

```
lseek(fd, 0, SEEK_END);
```

表示：

> 将偏移量移动到文件末尾。

---

## 十七、利用 lseek() 获取文件大小

这是一个非常经典的练习。

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = -1;
    int len = 0;

    fd = open("file.txt", O_RDONLY);

    if(fd == -1)
    {
        perror("open");
        return -1;
    }

    len = lseek(fd, 0, SEEK_END);

    printf("file size = %d\n", len);

    close(fd);

    return 0;
}
```

原理：

```
文件开头
   ↓
lseek(fd, 0, SEEK_END)
   ↓
文件末尾
   ↓
返回当前位置
   ↓
文件大小
```

不过在实际工程中，获取文件属性更推荐使用 `stat()`。

---

## 十八、目录 IO

文件 IO 解决的是：

```
文件
 ↓
读写数据
```

而目录 IO 解决的是：

```
目录
 ↓
查看目录中的文件
```

例如 Shell 中：

```bash
ls
```

本质上就是需要读取目录中的目录项。

Linux 目录 IO 常用接口：

```bash
opendir()
readdir()
closedir()

mkdir()
rmdir()

getcwd()
chdir()
```

课程资料也按照这一组接口介绍目录 IO。

---

## 十九、opendir() —— 打开目录

函数原型：

```
DIR *opendir(const char *name);
```

功能：

> 打开目录并获得目录流指针。

例如：

```
DIR *dp = NULL;

dp = opendir(".");

if(dp == NULL)
{
    perror("opendir");
    return -1;
}
```

成功：

```
DIR *
```

失败：

```
NULL
```

课程资料中明确给出了 `opendir()` 的返回值规则。

---

## 二十、DIR *

目录 IO 使用：

```
DIR *
```

而不是：

```
int fd
```

可以这样区分：

```
普通文件
    ↓
open()
    ↓
int fd

目录
    ↓
opendir()
    ↓
DIR *dp
```

---

## 二十一、readdir() —— 读取目录项

函数原型：

```
struct dirent *readdir(DIR *dirp);
```

作用：

> 每次从目录流中读取一个目录项。

例如：

```
struct dirent *p = NULL;

p = readdir(dp);
```

成功：

```
struct dirent *
```

读取结束：

```
NULL
```

课程资料中明确说明了 `readdir()` 的返回值以及“读到目录末尾返回 `NULL`”。

---

## 二十二、struct dirent

`readdir()` 返回的是：

```
struct dirent *
```

其中常见成员：

```c
struct dirent
{
    ino_t           d_ino;
    off_t           d_off;
    unsigned short  d_reclen;
    unsigned char   d_type;
    char            d_name[256];
};
```

其中最常用的是：

```
d_name
```

表示：

> 目录项名称。

课程资料也列出了 `struct dirent` 的这些成员。

---

## 二十三、使用 readdir() 查看目录

完整代码：

```c
#include <stdio.h>
#include <dirent.h>

int main(void)
{
    DIR *dp = NULL;
    struct dirent *p = NULL;

    dp = opendir(".");

    if(dp == NULL)
    {
        perror("opendir");
        return -1;
    }

    while((p = readdir(dp)) != NULL)
    {
        printf("%s\n", p->d_name);
    }

    closedir(dp);

    return 0;
}
```

运行：

```bash
gcc test.c
./a.out
```

可能得到：

```
.
..
a.out
test.c
file.txt
src
```

这就是一个最基本的：

> **Linux C 语言版 ls**

---

## 二十四、为什么使用 `while(readdir())`

这是目录 IO 中非常重要的一个固定写法：

```c
while((p = readdir(dp)) != NULL)
{
    printf("%s\n", p->d_name);
}
```

工作过程：

```
第一次 readdir()
        ↓
读取第一个目录项

第二次 readdir()
        ↓
读取第二个目录项

第三次 readdir()
        ↓
读取第三个目录项

……

读完
 ↓
NULL
 ↓
while结束
```

---

## 二十五、`.` 和 `..`

使用 `readdir()` 时，经常看到：

```
.
..
```

其中：

```
.
```

表示：

> 当前目录。

```
..
```

表示：

> 上一级目录。

例如：

```bash
cd .
```

仍然在当前目录。

```bash
cd ..
```

进入上一级目录。

因此，如果实现类似 `ls` 的功能：

```c
while((p = readdir(dp)) != NULL)
{
    if(strcmp(p->d_name, ".") == 0 ||
       strcmp(p->d_name, "..") == 0)
    {
        continue;
    }

    printf("%s\n", p->d_name);
}
```

就可以不显示：

```
.
..
```

---

## 二十六、closedir() —— 关闭目录

打开目录后：

```
opendir()
```

使用完成后：

```
closedir(dp);
```

函数原型：

```
int closedir(DIR *dirp);
```

返回：

```
0
 ↓
成功

-1
 ↓
失败
```

课程资料中也给出了 `closedir()` 的返回值。

所以目录 IO 的基本流程：

```
opendir()
   ↓
readdir()
   ↓
readdir()
   ↓
readdir()
   ↓
NULL
   ↓
closedir()
```

---

## 二十七、mkdir() —— 创建目录

函数：

```
int mkdir(const char *pathname, mode_t mode);
```

例如：

```
mkdir("test", 0777);
```

创建：

```
test/
```

目录。

常见权限：

```
0777
```

表示：

```
rwx rwx rwx
```

实际权限仍然会受到 `umask` 影响。

---

## 二十八、rmdir() —— 删除目录

```
rmdir("test");
```

作用：

> 删除目录。

注意：

> `rmdir()` 一般只能删除**空目录**。

例如：

```
test/
```

里面没有文件：

```
rmdir test
```

可以删除。

如果：

```
test/
 ├── a.txt
 └── b.txt
```

则不能直接使用 `rmdir()` 删除整个目录。

Shell 中对应：

```
rmdir test
```

删除空目录。

---

## 二十九、getcwd() —— 获取当前工作目录

函数：

```
char *getcwd(char *buf, size_t size);
```

作用：

> 获取当前程序的工作路径。

课程资料中也给出了 `getcwd()` 的功能定义。

例如：

```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buf[1024] = {0};

    getcwd(buf, sizeof(buf));

    printf("cwd = %s\n", buf);

    return 0;
}
```

可能输出：

```
cwd = /home/linux/jmnwork
```

---

## 三十、chdir() —— 修改当前工作目录

函数：

```
int chdir(const char *path);
```

例如：

```
chdir("/home/linux");
```

表示：

> 将当前进程的工作目录修改为 `/home/linux`。

课程资料中将 `chdir()` 定义为修改当前程序工作路径。

可以配合：

```
getcwd()
```

验证：

```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buf[1024] = {0};

    getcwd(buf, sizeof(buf));
    printf("before: %s\n", buf);

    chdir("/tmp");

    getcwd(buf, sizeof(buf));
    printf("after : %s\n", buf);

    return 0;
}
```

---

## 三十一、目录权限

Linux 中目录权限和普通文件的含义有一些区别。

目录的：

```
r
w
x
```

分别可以理解为：

| 权限 | 对目录的意义 |
| --- | --- |
| `r` | 可以读取目录中的目录项 |
| `w` | 可以创建、删除目录中的文件 |
| `x` | 可以进入目录/访问目录中的对象 |

课程资料也特别强调了目录的 `r/w/x` 权限含义。

例如：

```
drwxr-xr-x
```

第一个：

```
d
```

说明它是目录。

---

## 三十二、文件 IO 和目录 IO 对比

这是这一节最重要的总结之一。

| 文件 IO | 目录 IO |
| --- | --- |
| `open()` | `opendir()` |
| `read()` | `readdir()` |
| `write()` | — |
| `close()` | `closedir()` |
| `lseek()` | — |
| `int fd` | `DIR *` |
| 操作文件内容 | 操作目录项 |

可以记成：

```
文件：
open
 ↓
read / write
 ↓
close

目录：
opendir
 ↓
readdir
 ↓
closedir
```

---

## 三十三、实现一个简单的 `ls`

前面已经学习了 `readdir()`，现在可以自己实现一个简单的 `ls`。

```c
#include <stdio.h>
#include <dirent.h>

int main(void)
{
    DIR *dp = NULL;
    struct dirent *p = NULL;

    dp = opendir(".");

    if(dp == NULL)
    {
        perror("opendir");
        return -1;
    }

    while((p = readdir(dp)) != NULL)
    {
        printf("%s\n", p->d_name);
    }

    closedir(dp);

    return 0;
}
```

编译：

```bash
gcc ls.c -o myls
```

运行：

```bash
./myls
```

这就是前面 Shell 中：

```bash
ls
```

的一个非常基础的 C 语言实现。

---

## 三十四、实现指定目录的查看

如果希望：

```bash
./myls /home/linux
```

查看指定目录，就可以利用：

```
argv
```

获取命令行参数。

```c
#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dp = NULL;
    struct dirent *p = NULL;

    if(argc != 2)
    {
        printf("Usage: %s dirname\n", argv[0]);
        return -1;
    }

    dp = opendir(argv[1]);

    if(dp == NULL)
    {
        perror("opendir");
        return -1;
    }

    while((p = readdir(dp)) != NULL)
    {
        printf("%s\n", p->d_name);
    }

    closedir(dp);

    return 0;
}
```

运行：

```bash
./myls .
```

或者：

```bash
./myls /tmp
```

---

## 三十五、文件 IO + 目录 IO 的综合理解

现在可以把 Linux 中的文件系统操作理解成：

```
                Linux文件系统
                      │
         ┌────────────┴────────────┐
         │                         │
       普通文件                   目录
         │                         │
      文件IO                      目录IO
         │                         │
     open()                    opendir()
         │                         │
  ┌──────┼──────┐                  │
  │      │      │               readdir()
read() write() lseek()              │
  │      │      │               closedir()
  └──────┼──────┘
         │
      close()
```

---

## 三十六、这一节容易出错的地方

### 1. `open()` 返回的是 fd，不是 `FILE *`

错误理解：

```
FILE *fp = open(...);
```

正确：

```
int fd = open(...);
```

而：

```
FILE *fp = fopen(...);
```

属于标准 IO。

---

### 2. `opendir()` 返回的是 `DIR *`

正确：

```
DIR *dp = opendir(".");
```

不是：

```
int fd = opendir(".");
```

---

### 3. `read()` 最后一次不一定读取满缓冲区

例如：

```
char buf[1024];
ret = read(fd, buf, sizeof(buf));
```

实际可能：

```
1024
1024
1024
500
0
```

所以写文件时：

```
write(fd2, buf, ret);
```

而不是：

```
write(fd2, buf, 1024);
```

---

### 4. `readdir()` 返回 NULL 可能表示结束

```
while((p = readdir(dp)) != NULL)
```

是最常见的写法。

---

### 5. `d_name` 才是目录项名称

例如：

```c
printf("%s\n", p->d_name);
```

不要把：

```
d_ino
d_off
d_reclen
```

误认为文件名。

---

← 上一篇：[Linux软件编程学习笔记（二）——标准IO](02-标准IO.md) ｜ 下一篇 →：[Linux软件编程学习笔记（四）——进程](04-进程.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
