---
title: "Linux软件编程学习笔记（一）——Shell"
series: "Linux 软件编程学习笔记"
order: "01"
published: "2026-08-21 19:05:05"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/163953315"
---

> **系列**：Linux 软件编程学习笔记 ｜ **原文**：[Linux软件编程学习笔记（一）——Shell](https://blog.csdn.net/weixin_56431759/article/details/163953315) ｜ **发布**：2026-08-21 19:05:05

<!-- kb:auto-header -->

## 一、什么是 Shell

**Shell** 是 Linux 系统中用户与操作系统内核之间进行交互的一个命令解释器。

用户在终端输入命令后，Shell 负责：

1. 接收用户输入的命令；
2. 解析命令；
3. 查找对应的程序；
4. 创建进程执行程序；
5. 将执行结果返回给用户。

常见的 Shell 有：

- `bash`：Linux 中最常用的 Shell
- `sh`
- `zsh`
- `fish`

在 Ubuntu 中通常使用 **Bash**。

可以使用下面的命令查看当前 Shell：

```
echo $SHELL
```

例如：

```
/bin/bash
```

也可以查看 Bash 版本：

```
bash --version
```

---

## 二、Shell 基本命令

### 1. `pwd` —— 查看当前目录

`pwd`（Print Working Directory）用于显示当前所在的目录。

```
pwd
```

例如：

```
/home/linux/jmnwork
```

---

### 2. `ls` —— 查看目录内容

```bash
ls
```

常用选项：

```bash
ls -l
```

查看详细信息：

```bash
ls -a
```

查看隐藏文件：

```bash
ls -la
```

常见输出：

```
drwxr-xr-x  2 linux linux 4096 Aug 21 test
-rw-r--r--  1 linux linux  128 Aug 21 file.txt
```

其中：

```
d
```

表示目录。

```
-
```

表示普通文件。

---

### 3. `cd` —— 切换目录

进入目录：

```bash
cd test
```

返回上一级：

```bash
cd ..
```

返回用户主目录：

```bash
cd ~
```

返回之前所在的目录：

```bash
cd -
```

---

## 三、文件和目录操作

### 1. `mkdir` —— 创建目录

```bash
mkdir test
```

创建多个目录：

```bash
mkdir dir1 dir2 dir3
```

递归创建目录：

```bash
mkdir -p a/b/c
```

---

### 2. `touch` —— 创建文件

```
touch file.txt
```

也可以一次创建多个文件：

```
touch a.txt b.txt c.txt
```

---

### 3. `cp` —— 复制

复制文件：

```bash
cp file.txt file2.txt
```

复制目录需要使用 `-r`：

```bash
cp -r dir1 dir2
```

---

### 4. `mv` —— 移动或重命名

移动文件：

```bash
mv file.txt ./test/
```

重命名：

```bash
mv old.txt new.txt
```

---

### 5. `rm` —— 删除

删除普通文件：

```bash
rm file.txt
```

删除目录：

```bash
rm -r test
```

强制递归删除：

```bash
rm -rf test
```

⚠️ `rm -rf` 使用时需要非常谨慎，因为删除后通常无法通过普通方式恢复。

---

## 四、查看文件内容

### 1. `cat`

直接查看文件内容：

```bash
cat file.txt
```

---

### 2. `more`

分页查看：

```
more file.txt
```

---

### 3. `less`

分页查看文件：

```
less file.txt
```

相比 `more`，`less` 支持上下翻页、搜索等操作。

---

### 4. `head`

查看文件前几行：

```
head file.txt
```

查看前 5 行：

```
head -n 5 file.txt
```

---

### 5. `tail`

查看文件最后几行：

```
tail file.txt
```

查看最后 5 行：

```
tail -n 5 file.txt
```

实时查看文件变化：

```
tail -f log.txt
```

这个命令在查看日志文件时非常常用。

---

## 五、文件详细信息

使用：

```bash
ls -l
```

例如：

```
-rwxr-xr-- 1 linux linux 1234 Aug 21 18:30 a.out
```

可以拆成：

```
-rwxr-xr--
│
├── 文件类型
├── 所有者权限
├── 所属组权限
└── 其他用户权限
```

权限部分：

```
rwx rwx r--
```

分别表示：

```
r：read    读
w：write   写
x：execute 执行
```

三组权限分别对应：

```
rwx       rwx       r--
用户      用户组     其他用户
```

---

## 六、Linux 文件类型

可以使用：

```
file 文件名
```

例如：

```
file a.out
```

也可以使用：

```bash
ls -l
```

查看第一个字符。

常见文件类型：

| 符号 | 类型 |
| --- | --- |
| `-` | 普通文件 |
| `d` | 目录 |
| `l` | 符号链接 |
| `c` | 字符设备 |
| `b` | 块设备 |
| `p` | 管道文件 |
| `s` | 套接字 |

例如：

```
drwxr-xr-x
```

第一个字符 `d` 表示这是一个目录。

---

## 七、Shell 中的重定向

Shell 中非常重要的一部分就是**输入输出重定向**。

### 1. `>` —— 输出重定向

```bash
ls > file.txt
```

表示把 `ls` 的输出保存到 `file.txt`。

如果文件已经存在，会**覆盖原来的内容**。

---

### 2. `>>` —— 追加重定向

```bash
ls >> file.txt
```

把内容追加到文件末尾，不覆盖原来的内容。

---

### 3. `<` —— 输入重定向

例如：

```
wc -l < file.txt
```

将 `file.txt` 作为 `wc` 的输入。

---

## 八、管道 `|`

管道是 Shell 中非常重要的功能。

```
命令1 | 命令2
```

含义是：

> 将命令1的标准输出作为命令2的标准输入。

例如：

```bash
ls | wc -l
```

表示统计当前目录下输出的行数。

再例如：

```
ps -ef | grep a.out
```

用于查找进程中与 `a.out` 相关的信息。

---

## 九、Shell 通配符

### 1. `*`

匹配任意数量的字符。

例如：

```bash
ls *.c
```

表示查看当前目录下所有 `.c` 文件。

---

### 2. `?`

匹配一个字符。

```bash
ls ?.c
```

可以匹配：

```
a.c
b.c
```

但不能匹配：

```
abc.c
```

---

### 3. `[]`

匹配指定范围中的一个字符。

例如：

```bash
ls [abc].c
```

可以匹配：

```
a.c
b.c
c.c
```

---

## 十、Shell 变量

Shell 中可以定义变量：

```
name=linux
```

注意：

```
name = linux
```

是错误的。

Shell 变量赋值时，`=` 两边**不能有空格**。

读取变量：

```
echo $name
```

输出：

```
linux
```

也可以使用：

```
echo ${name}
```

---

## 十一、环境变量

常见环境变量：

```
$PATH
$HOME
$USER
$PWD
$SHELL
```

例如：

```
echo $HOME
```

查看 PATH：

```
echo $PATH
```

PATH 中保存的是 Shell 查找可执行程序时搜索的目录。

例如：

```
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
```

所以输入：

```bash
ls
```

时，Shell 会根据 `PATH` 中的目录寻找 `ls` 程序。

---

## 十二、Shell 脚本

Shell 不仅可以执行单条命令，还可以把多条命令写入一个文件中，形成 **Shell 脚本**。

例如创建：

```
test.sh
```

内容：

```
#!/bin/bash

echo "Hello Linux"
echo "Shell Programming"
```

第一行：

```
#!/bin/bash
```

称为 **Shebang**，表示使用 `/bin/bash` 来解释执行该脚本。

---

### 执行 Shell 脚本

方法一：

```
bash test.sh
```

方法二：

给脚本添加执行权限：

```bash
chmod +x test.sh
```

然后：

```bash
./test.sh
```

---

## 十三、Shell 条件判断

基本语法：

```
if [ 条件 ]
then
    命令
fi
```

例如判断文件是否存在：

```
if [ -f file.txt ]
then
    echo "file exists"
fi
```

常见文件判断：

```
-f    普通文件
-d    目录
-e    文件或目录存在
-r    可读
-w    可写
-x    可执行
```

例如：

```
if [ -d test ]
then
    echo "test is directory"
fi
```

---

## 十四、Shell 中的整数比较

常见比较运算符：

```
-eq    等于
-ne    不等于
-gt    大于
-ge    大于等于
-lt    小于
-le    小于等于
```

例如：

```
if [ $a -gt $b ]
then
    echo "a > b"
fi
```

注意，Shell 中整数比较通常**不能直接使用 C 语言中的 >、<**。

例如：

```
[ $a -gt $b ]
```

而不是：

```
[ $a > $b ]
```

---

## 十五、`expr` 命令

`expr` 可以进行简单的整数运算。

例如：

```
expr 10 + 20
```

输出：

```
30
```

乘法需要转义：

```
expr 10 \* 20
```

因为 `*` 在 Shell 中具有通配符含义。

现在更推荐使用：

```
$(( ))
```

例如：

```
a=10
b=20

c=$((a+b))

echo $c
```

输出：

```
30
```

---

## 十六、Shell 中的循环

### `for` 循环

```
for i in 1 2 3 4 5
do
    echo $i
done
```

也可以：

```
for i in {1..5}
do
    echo $i
done
```

---

### `while` 循环

```
i=1

while [ $i -le 5 ]
do
    echo $i
    i=$((i+1))
done
```

输出：

```
1
2
3
4
5
```

---

## 十七、Shell 中的 `$?`

`$?` 表示**上一条命令的退出状态码**。

例如：

```bash
ls
echo $?
```

如果执行成功：

```
0
```

通常：

```
0      执行成功
非0    执行失败
```

这与 C 语言中的：

```
return 0;
```

有一定对应关系。

---

## 十八、Shell 学习重点总结

这一阶段 Shell 重点掌握：

```
pwd       当前目录
ls        查看目录
cd        切换目录
mkdir     创建目录
touch     创建文件
cp        复制
mv        移动/重命名
rm        删除
cat       查看文件
head      查看头部
tail      查看尾部
file      查看文件类型
chmod     修改权限
```

进一步掌握：

```
>         输出重定向
>>        追加重定向
<         输入重定向
|         管道
*         通配符
$变量      变量引用
$?        上一条命令的返回值
```

Shell 脚本重点：

```
变量
if
for
while
文件判断
整数判断
命令执行
脚本权限
```

---

### 十九、Shell 与后续 Linux 编程的联系

Shell 是学习 Linux 软件编程非常重要的基础。

后面学习 C 语言 Linux 编程时，会逐渐接触：

```
Shell
  ↓
Linux 文件系统
  ↓
文件 IO
  ↓
进程
  ↓
进程间通信
  ↓
线程
  ↓
网络编程
  ↓
Linux 系统编程
```

尤其需要注意 **Shell 命令和 C 语言系统调用之间的联系**。

例如：

```bash
ls
```

背后涉及目录读取；

```bash
cat file.txt
```

背后涉及文件打开、读取和关闭；

```bash
./a.out
```

背后涉及进程创建与程序加载。

因此，Shell 不只是“记命令”，更重要的是**理解 Linux 命令行环境、文件系统、权限、进程和标准输入输出的基本工作方式**。

---

下一篇 →：[Linux软件编程学习笔记（二）——标准IO](02-标准IO.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
