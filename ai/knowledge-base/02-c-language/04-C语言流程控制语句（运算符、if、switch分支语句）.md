---
title: "C语言学习笔记（四）—— C语言流程控制语句（运算符、if、switch分支语句）"
series: "C 语言学习笔记"
order: "04"
published: "2026-07-24 18:03:02"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/163168936"
---

> **系列**：C 语言学习笔记 ｜ **原文**：[C语言学习笔记（四）—— C语言流程控制语句（运算符、if、switch分支语句）](https://blog.csdn.net/weixin_56431759/article/details/163168936) ｜ **发布**：2026-07-24 18:03:02

<!-- kb:auto-header -->

### 前言

前面的学习中，我们已经掌握了 C 语言的数据类型、运算符以及常用输入输出函数。虽然已经能够编写简单的程序，但这些程序都是按照固定顺序执行，无法根据不同情况做出不同处理。

本节开始学习 **流程控制语句**，主要包括 **关系运算符、逻辑运算符、三目运算符、if 分支语句以及 switch 分支语句**。掌握这些内容后，程序就能够根据条件执行不同的代码，提高程序的灵活性和实用性。

---

## 一、程序的三种基本结构

任何程序都可以由三种基本结构组成：

- 顺序结构
- 分支结构
- 循环结构

其中，本节重点学习 **分支结构**，即程序根据条件选择不同的执行路径。

---

## 二、关系运算符

关系运算符用于比较两个数据之间的关系，运算结果只有两种：

- `1`：条件成立（真）
- `0`：条件不成立（假）

常见关系运算符如下：

| 运算符 | 含义 |
| --- | --- |
| > | 大于 |
| < | 小于 |
| >= | 大于等于 |
| <= | 小于等于 |
| == | 等于 |
| != | 不等于 |

示例：

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a == b);

    return 0;
}
```

运行结果：

```
0
1
0
```

---

## 三、逻辑运算符

逻辑运算符通常与关系运算符结合使用，用于组合多个条件。

| 运算符 | 含义 |
| --- | --- |
| && | 与（两个条件都成立） |
| \|\| | 或（任意一个条件成立） |
| ! | 非（条件取反） |

例如：

```c
#include <stdio.h>

int main()
{
    int age = 20;
    int score = 85;

    if(age >= 18 && score >= 60)
    {
        printf("考试通过！\n");
    }

    return 0;
}
```

#### 逻辑运算符的短路特性

- `&&`：左侧为假，右侧不会继续计算。
- `||`：左侧为真，右侧不会继续计算。

---

## 四、三目运算符

三目运算符可以用来简化简单的条件判断。

语法：

```
条件 ? 表达式1 : 表达式2;
```

示例：

```c
#include <stdio.h>

int main()
{
    int a = 15;
    int b = 25;

    int max = (a > b) ? a : b;

    printf("较大的数：%d\n", max);

    return 0;
}
```

运行结果：

```
较大的数：25
```

---

## 五、if 分支语句

### 1、简单 if

当条件成立时执行指定代码。

```
if(条件)
{
    语句;
}
```

示例：

```c
#include <stdio.h>

int main()
{
    int score;

    printf("请输入成绩：");
    scanf("%d", &score);

    if(score >= 60)
    {
        printf("考试及格！\n");
    }

    return 0;
}
```

---

### 2、if...else

根据条件选择执行不同代码。

```
if(条件)
{
    语句1;
}
else
{
    语句2;
}
```

示例：

```c
#include <stdio.h>

int main()
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d 是偶数。\n", num);
    }
    else
    {
        printf("%d 是奇数。\n", num);
    }

    return 0;
}
```

---

### 3、else if 多分支

适用于多个条件判断。

例如判断成绩等级：

```c
#include <stdio.h>

int main()
{
    int score;

    printf("请输入成绩：");
    scanf("%d", &score);

    if(score >= 90)
        printf("A\n");
    else if(score >= 80)
        printf("B\n");
    else if(score >= 70)
        printf("C\n");
    else if(score >= 60)
        printf("D\n");
    else
        printf("E\n");

    return 0;
}
```

---

## 六、if 综合练习——判断闰年

根据今天课后作业，实现闰年判断。

判断规则：

- 能被400整除的是闰年；
- 或者能被4整除但不能被100整除，也是闰年。

代码如下：

```c
#include <stdio.h>

int main()
{
    int year;

    printf("请输入年份：");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d 是闰年。\n", year);
    }
    else
    {
        printf("%d 是平年。\n", year);
    }

    return 0;
}
```

运行示例：

```
请输入年份：2024
2024 是闰年。
```

---

## 七、switch 分支语句

当需要对一个变量的多个固定取值进行判断时，使用 `switch` 比多个 `if...else` 更加清晰。

语法：

```
switch(表达式)
{
    case 常量1:
        语句;
        break;

    case 常量2:
        语句;
        break;

    default:
        语句;
}
```

需要注意：

- `switch` 后面的表达式必须是整型表达式；
- `case` 后只能是常量；
- `break` 用于结束当前分支，否则程序会继续向下执行。

---

### switch 示例——判断星期

```c
#include <stdio.h>

int main()
{
    int day;

    printf("请输入星期(1~7)：");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("星期一\n");
            break;

        case 2:
            printf("星期二\n");
            break;

        case 3:
            printf("星期三\n");
            break;

        case 4:
            printf("星期四\n");
            break;

        case 5:
            printf("星期五\n");
            break;

        case 6:
            printf("星期六\n");
            break;

        case 7:
            printf("星期日\n");
            break;

        default:
            printf("输入有误！\n");
    }

    return 0;
}
```

---

## 八、本节学习总结

今天主要学习了 C 语言中的分支结构，它能够根据条件执行不同的代码，是程序设计中最重要的基础知识之一。

本节重点包括：

- ✔ 程序的三种基本结构
- ✔ 关系运算符与逻辑运算符
- ✔ 三目运算符的使用
- ✔ `if`、`if...else`、`else if` 分支语句
- ✔ `switch...case` 多分支语句
- ✔ 闰年判断等综合练习

通过这些内容的学习，我已经能够编写具有判断能力的程序，为后续学习 **for、while、do...while 循环语句** 和更复杂的算法打下了基础。

---

← 上一篇：[C语言学习笔记（三）—— C语言常用输入输出函数详解（printf、scanf、puts、gets）](03-C语言常用输入输出函数详解（printf、scanf、puts、gets）.md) ｜ 下一篇 →：[C语言学习笔记（五）—— C语言循环结构详解（while、for、do...while）](05-C语言循环结构详解（while、for、do...while）.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
