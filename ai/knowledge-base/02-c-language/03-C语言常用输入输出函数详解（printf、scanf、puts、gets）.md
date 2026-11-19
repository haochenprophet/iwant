---
title: "C语言学习笔记（三）—— C语言常用输入输出函数详解（printf、scanf、puts、gets）"
series: "C 语言学习笔记"
order: "03"
published: "2026-07-23 18:05:01"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/163139995"
---

> **系列**：C 语言学习笔记 ｜ **原文**：[C语言学习笔记（三）—— C语言常用输入输出函数详解（printf、scanf、puts、gets）](https://blog.csdn.net/weixin_56431759/article/details/163139995) ｜ **发布**：2026-07-23 18:05:01

<!-- kb:auto-header -->

## 一、printf()——格式化输出函数

`printf()` 是 C 语言中最常用的输出函数，用于将数据按照指定格式输出到终端。

函数原型：

```c
#include <stdio.h>

int printf(const char *format, ...);
```

### 1. 输出普通字符串

```c
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    printf("Welcome to Linux!\n");
    return 0;
}
```

运行结果：

```
Hello World!
Welcome to Linux!
```

---

### 2. 输出变量

```c
#include <stdio.h>

int main()
{
    int age = 22;
    float score = 95.5;
    char grade = 'A';

    printf("年龄：%d\n", age);
    printf("成绩：%.1f\n", score);
    printf("等级：%c\n", grade);

    return 0;
}
```

运行结果：

```
年龄：22
成绩：95.5
等级：A
```

---

### 3. 常用格式控制符

| 格式符 | 说明 |
| --- | --- |
| `%d` | 输出 int 整数 |
| `%ld` | 输出 long 类型 |
| `%f` | 输出 float |
| `%lf` | 输出 double |
| `%c` | 输出字符 |
| `%s` | 输出字符串 |
| `%u` | 输出无符号整数 |
| `%x` | 输出十六进制 |
| `%o` | 输出八进制 |

例如：

```
int num = 100;

printf("十进制：%d\n", num);
printf("八进制：%o\n", num);
printf("十六进制：%x\n", num);
```

输出：

```
十进制：100
八进制：144
十六进制：64
```

---

## 二、scanf()——格式化输入函数

`scanf()` 用于从键盘读取数据，并按照指定格式存储到变量中。

函数原型：

```
scanf("格式控制符", &变量);
```

需要注意：

- 输入变量时必须使用 **取地址符 &**（字符数组除外）。
- 输入的数据类型必须与格式控制符一致。

---

### 1. 输入一个整数

```c
#include <stdio.h>

int main()
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("你输入的是：%d\n", num);

    return 0;
}
```

运行示例：

```
请输入一个整数：100
你输入的是：100
```

---

### 2. 输入多个数据

```c
#include <stdio.h>

int main()
{
    int a, b;

    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}
```

运行：

```
请输入两个整数：12 35
a=12 b=35
```

---

### 3. 输入字符

```c
#include <stdio.h>

int main()
{
    char ch;

    printf("请输入一个字符：");
    scanf(" %c", &ch);

    printf("输入字符为：%c\n", ch);

    return 0;
}
```

> **小技巧：** `%c` 前加一个空格（`" %c"`），可以忽略前一次输入留下的空格或换行符，避免读取异常。

---

## 三、puts()——字符串输出函数

`puts()` 用于输出一个字符串，并且会**自动在末尾添加换行符**。

```c
#include <stdio.h>

int main()
{
    puts("Hello Linux");
    puts("Learning C Language");

    return 0;
}
```

输出：

```
Hello Linux
Learning C Language
```

#### puts() 与 printf() 的区别

| puts() | printf() |
| --- | --- |
| 自动换行 | 不自动换行 |
| 只能输出字符串 | 可以输出各种类型 |
| 使用简单 | 功能更丰富 |

---

## 四、gets()——字符串输入函数

`gets()` 可以读取一整行字符串，包括空格。

示例：

```c
#include <stdio.h>

int main()
{
    char str[100];

    printf("请输入一句话：");
    gets(str);

    printf("输入内容：");
    puts(str);

    return 0;
}
```

运行：

```
请输入一句话：
Hello Linux World

输入内容：
Hello Linux World
```

#### 注意事项

`gets()` **不会检查数组长度**，容易造成缓冲区溢出，因此在新版 C 标准（C11）中已被移除，实际开发中推荐使用 `fgets()` 替代。

例如：

```
char str[100];

fgets(str, sizeof(str), stdin);
```

`fgets()` 更安全，可以限制读取字符的数量，避免越界。

---

## 五、综合练习——学生信息输入与输出

下面编写一个简单的程序，实现输入姓名和年龄，并输出对应的信息。

```c
#include <stdio.h>

int main()
{
    char name[30];
    int age;

    printf("请输入姓名：");
    gets(name);

    printf("请输入年龄：");
    scanf("%d", &age);

    printf("\n------ 学生信息 ------\n");
    printf("姓名：%s\n", name);
    printf("年龄：%d\n", age);

    return 0;
}
```

运行结果：

```
请输入姓名：
Tom

请输入年龄：
20

------ 学生信息 ------
姓名：Tom
年龄：20
```

> 如果使用 GCC 较新的版本编译，可能会提示 `gets()` 已废弃，这是正常现象，建议改用 `fgets()`。

## 结语

输入和输出函数是 C 语言程序设计中最基础、也是最常用的内容。熟练掌握 `printf()` 和 `scanf()` 的使用方法，理解 `puts()` 与 `gets()`可以帮助我们编写更加规范、安全的程序。

---

← 上一篇：[C语言学习笔记（二）—— C语言基础数据类型、变量与运算符详解](02-C语言基础数据类型、变量与运算符详解.md) ｜ 下一篇 →：[C语言学习笔记（四）—— C语言流程控制语句（运算符、if、switch分支语句）](04-C语言流程控制语句（运算符、if、switch分支语句）.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
