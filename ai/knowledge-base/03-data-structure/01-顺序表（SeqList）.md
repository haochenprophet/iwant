---
title: "数据结构学习笔记（一）——顺序表（SeqList）"
series: "数据结构学习笔记"
order: "01"
published: "2026-08-13 18:22:27"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/163731911"
---

> **系列**：数据结构学习笔记 ｜ **原文**：[数据结构学习笔记（一）——顺序表（SeqList）](https://blog.csdn.net/weixin_56431759/article/details/163731911) ｜ **发布**：2026-08-13 18:22:27

<!-- kb:auto-header -->

### 一、前言与基本概念

在计算机科学中，有一个著名的公式：**程序 = 数据结构 + 算法**。数据结构用于描述数据的组织和存储方式。

根据数据的**逻辑关系**划分，常见的数据结构包括：

- **线性结构（表状结构）**：数据元素之间呈现一对一的关系。
- **树形结构**：数据元素之间呈现一对多的关系。
- **图形结构**：数据元素之间呈现多对多的关系。

根据数据在计算机中的**存储方式**划分，主要包括：顺序结构、链式结构、散列存储与索引存储。

**顺序表（Sequential List，简称 SeqList）** 就是一种采用**顺序存储结构**实现的**线性表**。

### 二、什么是顺序表？

顺序表是指用一组**地址连续的存储单元**依次存储线性表内数据元素的物理结构。

#### 顺序表与传统数组的异同

- **空间连续性**：顺序表与内存数组类似，开辟一片连续的内存空间，支持通过下标快速访问元素。
- **插入与删除效率**：由于空间连续，在中间位置插入或删除元素时，必须移动大量的后续元素，插入与删除的效率较低。
- **动态扩展性**：普通固定大小的静态数组元素上限固定、无法扩展；而动态顺序表利用 C 语言堆区动态内存管理（通过 `malloc` 与 `free`），可以按需分配与动态扩容。

### 三、顺序表的结构体定义

在 C 语言中，我们通常结合 `struct` 结构体和指针来封装顺序表。

顺序表的核心结构包含三个成员：

1. **数据指针 (pData)**：指向在堆区动态申请的一维数组首地址。
2. **总容量 (tlen)**：标识顺序表当前能容纳的最大元素个数（Total Length）。
3. **当前长度 (clen)**：标识顺序表当前已实际存储的有效元素个数（Current Length）。

```
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 定义数据元素类型，方便后期替换
typedef int DataType;

// 顺序表结构体定义
typedef struct seqlist {
    DataType *pData; // 存储数据的动态数组指针
    int tlen;        // 总容量 (Total Length)
    int clen;        // 当前已存元素个数 (Current Length)
} SeqList_t;
```

### 四、核心功能与C语言完整实现

下面基于堆区动态内存分配，实现顺序表常见的创建、判断、插入、删除、查找及销毁等核心功能。

#### 1. 顺序表的创建与初始化

在堆区申请顺序表结构体及元素存储空间的内存。

```
// 创建指定容量的顺序表
SeqList_t *CreateSeqList(int capacity) {
    if (capacity <= 0) {
        printf("错误：容量必须大于 0\n");
        return NULL;
    }

    // 1. 申请结构体本身的空间
    SeqList_t *pSeq = (SeqList_t *)malloc(sizeof(SeqList_t));
    if (pSeq == NULL) {
        perror("malloc SeqList_t 失败");
        return NULL;
    }

    // 2. 申请实际存放数据的数组空间
    pSeq->pData = (DataType *)malloc(sizeof(DataType) * capacity);
    if (pSeq->pData == NULL) {
        perror("malloc pData 失败");
        free(pSeq); // 释放已申请的结构体空间，防泄漏
        return NULL;
    }

    // 3. 初始化成员变量
    pSeq->tlen = capacity;
    pSeq->clen = 0;

    return pSeq;
}
```

#### 2. 状态检查（判满与判空）

```
// 判断顺序表是否已满
bool IsFullSeqList(SeqList_t *pSeq) {
    if (pSeq == NULL) return false;
    return pSeq->clen == pSeq->tlen;
}

// 判断顺序表是否为空
bool IsEmptySeqList(SeqList_t *pSeq) {
    if (pSeq == NULL) return true;
    return pSeq->clen == 0;
}
```

#### 3. 插入元素（指定位置插入）

插入操作需要将位置 `pos` 及其后面的元素依次向后移动一位，腾出空间。

```
// 在位置 pos (0 <= pos <= clen) 插入元素 value
bool InsertSeqList(SeqList_t *pSeq, int pos, DataType value) {
    if (pSeq == NULL || IsFullSeqList(pSeq)) {
        printf("插入失败：表为空或表已满\n");
        return false;
    }
    if (pos < 0 || pos > pSeq->clen) {
        printf("插入失败：位置 pos 非法\n");
        return false;
    }

    // 将 pos 及其后面的元素依次向后移动一位
    for (int i = pSeq->clen; i > pos; i--) {
        pSeq->pData[i] = pSeq->pData[i - 1];
    }

    // 写入新数据，并更新当前有效元素个数
    pSeq->pData[pos] = value;
    pSeq->clen++;
    return true;
}
```

#### 4. 删除元素（指定位置删除）

删除操作需要将位置 `pos` 之后的元素依次向前移动一位。

```
// 删除位置 pos (0 <= pos < clen) 处的元素，并通过 pVal 带回被删除的值
bool DeleteSeqList(SeqList_t *pSeq, int pos, DataType *pVal) {
    if (pSeq == NULL || IsEmptySeqList(pSeq)) {
        printf("删除失败：表为空\n");
        return false;
    }
    if (pos < 0 || pos >= pSeq->clen) {
        printf("删除失败：位置 pos 非法\n");
        return false;
    }

    // 带出被删除的元素
    if (pVal != NULL) {
        *pVal = pSeq->pData[pos];
    }

    // 将 pos 之后的元素依次向前移动一位
    for (int i = pos; i < pSeq->clen - 1; i++) {
        pSeq->pData[i] = pSeq->pData[i + 1];
    }

    pSeq->clen--;
    return true;
}
```

#### 5. 查找与打印

C

```c
// 查找指定值为 value 的元素，返回其首次出现的下标，未找到返回 -1
int FindSeqList(SeqList_t *pSeq, DataType value) {
    if (pSeq == NULL || IsEmptySeqList(pSeq)) return -1;

    for (int i = 0; i < pSeq->clen; i++) {
        if (pSeq->pData[i] == value) {
            return i;
        }
    }
    return -1;
}

// 打印顺序表所有元素
void PrintSeqList(SeqList_t *pSeq) {
    if (pSeq == NULL || IsEmptySeqList(pSeq)) {
        printf("SeqList 为空。\n");
        return;
    }

    printf("SeqList内容: [ ");
    for (int i = 0; i < pSeq->clen; i++) {
        printf("%d ", pSeq->pData[i]);
    }
    printf("] (当前个数 clen: %d, 容量 tlen: %d)\n", pSeq->clen, pSeq->tlen);
}
```

#### 6. 销毁顺序表

因为动态申请了堆区内存，使用完毕后需通过 `free` 释放，防止产生内存泄漏。

```
// 销毁顺序表并置空指针
void DestroySeqList(SeqList_t **ppSeq) {
    if (ppSeq == NULL || *ppSeq == NULL) return;

    // 1. 释放元素数据数组空间
    if ((*ppSeq)->pData != NULL) {
        free((*ppSeq)->pData);
        (*ppSeq)->pData = NULL;
    }

    // 2. 释放结构体自身内存
    free(*ppSeq);
    *ppSeq = NULL;
}
```

### 五、算法复杂度与优缺点分析

分析数据结构的性能通常使用**时间复杂度**与**空间复杂度**指标：

- **时间复杂度**：描述随着数据量的增加，程序运行时间增长呈现的比例函数关系。常见的复杂度递增关系为：

  $$O(1) < O(\log n) < O(n) < O(n \log n) < O(n^2) < \dots < O(2^n)$$

- **空间复杂度**：描述随着数据量的增加，程序所占用的内存空间与数据量增长呈现的比例函数关系。

#### 顺序表的性能对比总结

| 操作/性能维度 | 时间/空间复杂度 | 说明 |
| --- | --- | --- |
| 随机访问 (按下标) | $O(1)$ | 内存空间连续，直接通过偏移量计算物理地址 |
| 按值查找 | $O(n)$ | 必须线性遍历整个数组 |
| 头部/中间插入与删除 | $O(n)$ | 需要批量移动后续元素 |
| 尾部插入与删除 | $O(1)$ | 直接更新 `clen`，无需移动元素 |
| 空间开销 | 高空间利用率 | 空间连续，无需像链表一样存储指针信息 |

### 六、总结

顺序表是线性表结构中最基础的形态，它的最大优势在于**随机访问速度极快**（时间复杂度为 $O(1)$）。然而，由于连续内存的限制，它在频繁执行插入与删除时效率较低。

---

下一篇 →：[数据结构学习笔记（二）——单向链表](02-单向链表.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
