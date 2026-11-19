---
title: "C语言学习笔记（五）—— C语言循环结构详解（while、for、do...while）"
series: "C 语言学习笔记"
order: "05"
published: "2026-07-25 21:53:24"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/163198546"
---

> **系列**：C 语言学习笔记 ｜ **原文**：[C语言学习笔记（五）—— C语言循环结构详解（while、for、do...while）](https://blog.csdn.net/weixin_56431759/article/details/163198546) ｜ **发布**：2026-07-25 21:53:24

<!-- kb:auto-header -->

## 一、循环结构

循环结构就是**按照一定条件重复执行同一段代码**。

常见应用场景：

- 输出固定次数的数据
- 求和、求平均值
- 遍历数据
- 打印图形
- 数学计算

循环主要包括三种：

- while 循环
- for 循环
- do...while 循环

---

## 二、while 循环

### 基本语法

```
while (条件)
{
    循环体;
}
```

执行过程：

1. 判断条件是否成立；
2. 成立则执行循环体；
3. 再次判断条件；
4. 条件不成立时结束循环。

#### 示例：输出 1~10

```c
#include <stdio.h>

int main()
{
    int i = 1;

    while(i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
```

运行结果：

```
1 2 3 4 5 6 7 8 9 10
```

---

### 示例：求 1~100 的和

```c
#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

    while(i <= 100)
    {
        sum += i;
        i++;
    }

    printf("sum = %d\n", sum);

    return 0;
}
```

运行结果：

```
sum = 5050
```

---

### 死循环

如果循环条件始终为真，就会形成死循环。

```c
while(1)
{
    printf("Hello Linux\n");
}
```

通常需要结合 `break` 才能退出循环。

---

## 三、for 循环

`for` 循环适合**循环次数已知**的情况，也是最常用的循环语句。

### 基本语法

```
for(初始化; 条件; 更新)
{
    循环体;
}
```

例如：

```c
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
```

运行结果：

```
1 2 3 4 5 6 7 8 9 10
```

---

### 示例：计算阶乘

```c
#include <stdio.h>

int main()
{
    int n = 5;
    int i;
    int result = 1;

    for(i = 1; i <= n; i++)
    {
        result *= i;
    }

    printf("5! = %d\n", result);

    return 0;
}
```

输出：

```
5! = 120
```

---

## 四、双层 for 循环

双层循环通常用于打印图形、九九乘法表等问题。

### 九九乘法表

```c
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d ", j, i, i*j);
        }

        printf("\n");
    }

    return 0;
}
```

运行结果（部分）：

```
1*1=1
1*2=2 2*2=4
1*3=3 2*3=6 3*3=9
......
```

---

## 五、do...while 循环

`do...while` 与 `while` 最大的区别是：

**先执行一次循环体，再判断条件是否成立。**

语法：

```
do
{
    循环体;
}
while(条件);
```

示例：

```c
#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d ", i);
        i++;
    }
    while(i <= 5);

    return 0;
}
```

输出：

```
1 2 3 4 5
```

即使条件一开始不成立，`do...while` 也会至少执行一次循环体。

---

## 六、循环控制语句

### 1. break

`break` 用于立即退出当前循环。

```c
for(int i = 1; i <= 10; i++)
{
    if(i == 6)
        break;

    printf("%d ", i);
}
```

输出：

```
1 2 3 4 5
```

---

### 2. continue

`continue` 表示跳过本次循环，直接进入下一次循环。

```c
for(int i = 1; i <= 10; i++)
{
    if(i % 2 == 0)
        continue;

    printf("%d ", i);
}
```

输出：

```
1 3 5 7 9
```

---

### 3. return

`return` 用于结束当前函数。

```
if(num < 0)
{
    return 0;
}
```

`continue` 和 `return` 的区别：`break` 用于退出循环或 `switch`，`continue` 用于跳过当前循环，`return` 用于结束整个函数。

---

## 七、综合练习——打印所有水仙花数

水仙花数是一个三位数，其各位数字立方和等于它本身。

例如：

```
153 = 1³ + 5³ + 3³
```

实现代码如下：

```c
#include <stdio.h>

int main()
{
    int num;

    for(num = 100; num <= 999; num++)
    {
        int a = num / 100;
        int b = num / 10 % 10;
        int c = num % 10;

        if(a*a*a + b*b*b + c*c*c == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
```

运行结果：

```
153 370 371 407
```

## 学习总结

本节课程让我对 C 语言的循环结构有了更深入的理解。无论是固定次数的 `for` 循环，还是条件控制的 `while` 循环，都能够有效解决重复执行的问题。

---

← 上一篇：[C语言学习笔记（四）—— C语言流程控制语句（运算符、if、switch分支语句）](04-C语言流程控制语句（运算符、if、switch分支语句）.md) ｜ 下一篇 →：[C语言学习笔记（六）—— 一维数组的基本操作](06-一维数组的基本操作.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
