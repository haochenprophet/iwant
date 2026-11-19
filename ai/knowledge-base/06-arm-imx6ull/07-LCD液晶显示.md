---
title: "ARM学习笔记（七）——LCD液晶显示"
series: "ARM 学习笔记（i.MX6ULL 裸机）"
order: "07"
published: "2026-09-29 19:00:00"
author: "斑马819"
source: "https://blog.csdn.net/weixin_56431759/article/details/166794673"
---

> **系列**：ARM 学习笔记（i.MX6ULL 裸机） ｜ **原文**：[ARM学习笔记（七）——LCD液晶显示](https://blog.csdn.net/weixin_56431759/article/details/166794673) ｜ **发布**：2026-09-29 19:00:00

<!-- kb:auto-header -->

## 一、主要内容

今天主要学习 i.MX6ULL 的 LCD 显示系统，重点包括：

1. LCD 液晶显示屏；
2. LCD 的基本显示原理；
3. RGB 数据；
4. LCD 的控制信号；
5. IOMUX 引脚复用；
6. LCD 时钟；
7. LCDIF 控制器；
8. LCD 初始化；
9. TFT LCD 参数；
10. 显存和帧缓冲；
11. 800×480 LCD 屏幕配置；
12. LCD 背光控制。

---

## 二、什么是LCD

LCD：

> Liquid Crystal Display，液晶显示器。

LCD 是一种通过液晶材料控制光线透过，从而显示图像的显示设备。

LCD 显示的基本单位是：

> **像素 Pixel**

例如当前使用的 LCD 分辨率：

```
800 × 480
```

表示：

```
水平方向：800个像素
垂直方向：480个像素
```

总像素数量：

```
800 × 480 = 384000
```

因此一幅完整的画面需要控制：

```
384000个像素
```

---

## 三、LCD显示的基本原理

LCD 显示图像，本质上就是：

> **给每一个像素提供对应的颜色数据。**

例如：

```
像素1 → 红色
像素2 → 绿色
像素3 → 蓝色
像素4 → 白色
...
```

大量像素组合在一起，就形成完整的图像。

可以理解为：

```
         LCD显示
            │
   ┌────────┴────────┐
   ↓                 ↓
像素位置            像素颜色
   │                 │
X、Y坐标          RGB数据
   │                 │
   └────────┬────────┘
            ↓
           图像
```

---

## 四、LCD的RGB数据

LCD 通常通过 RGB 数据表示像素颜色。

RGB 分别表示：

```
R → Red   红色
G → Green 绿色
B → Blue  蓝色
```

三种颜色按照不同强度组合，可以表示不同颜色。

例如：

```
红色 → R较大，G和B较小
绿色 → G较大
蓝色 → B较大
白色 → R、G、B都较大
黑色 → R、G、B都较小
```

---

## 五、i.MX6ULL的LCD数据线

当前使用的 LCD 接口中，可以看到：

```
LCD_DATA00
LCD_DATA01
LCD_DATA02
...
LCD_DATA23
```

即：

```
LCD_DATA00 ~ LCD_DATA23
```

共：

```
24根数据线
```

对应：

```
24 bit RGB数据
```

因此 LCD 控制器可以通过这组数据线向 LCD 发送像素数据。

---

## 六、LCD控制信号

除了 RGB 数据线之外，LCD 还需要一些控制信号。

当前主要包括：

```
LCDIF_DATA00 ~ LCDIF_DATA23
LCDIF_ENABLE
LCDIF_HSYNC
LCDIF_VSYNC
LCDIF_CLK
```

其中：

#### 1. DATA

用于传输像素数据。

```
DATA00 ~ DATA23
```

#### 2. CLK

LCD 像素时钟。

```
LCDIF_CLK
```

用于控制像素数据传输的时序。

#### 3. HSYNC

> Horizontal Synchronization，行同步信号。

用于表示一行显示数据的同步。

#### 4. VSYNC

> Vertical Synchronization，场同步信号。

用于表示一帧图像的同步。

#### 5. ENABLE

用于数据有效控制。

---

## 七、LCD数据传输可以怎么理解

LCD显示一幅图像时，并不是一次把整个屏幕的数据全部发送出去，而是按照一定的时序连续发送。

基本过程可以理解为：

```
第1行
 ↓
第2行
 ↓
第3行
 ↓
...
 ↓
第480行
 ↓
完成一帧
 ↓
重新开始
```

每一行又包含：

```
像素1
 ↓
像素2
 ↓
像素3
 ↓
...
 ↓
像素800
```

因此：

```
800 × 480
```

就是：

```
480行
×
每行800个像素
```

---

## 八、LCD引脚复用

i.MX6ULL 的引脚具有复用功能。

同一个物理引脚可以根据配置承担不同功能。

使用 LCD 时，需要将相关引脚配置为：

```
LCDIF
```

例如：

```
IOMUXC_SetPinMux(
    IOMUXC_LCD_DATA00_LCDIF_DATA00,
    0
);
```

表示将对应引脚配置为：

```
LCD_DATA00
```

同样还需要配置：

```
LCD_DATA00 ~ LCD_DATA23
LCD_ENABLE
LCD_HSYNC
LCD_VSYNC
LCD_CLK
```

因此 LCD 初始化的第一步之一就是：

> **配置 LCD 引脚复用。**

---

## 九、LCD引脚电气属性

除了配置引脚复用功能，还需要配置引脚的电气属性。

例如：

```
IOMUXC_SetPinConfig(
    IOMUXC_LCD_DATA00_LCDIF_DATA00,
    0XB9
);
```

LCD 数据线以及相关控制线都进行了类似配置。

因此 LCD 引脚初始化可以分成两个步骤：

```
① 配置引脚复用功能
        ↓
   LCD_DATA / LCDIF

② 配置引脚电气属性
        ↓
   0xB9等配置值
```

---

## 十、LCD背光

LCD 本身还需要背光。

当前程序中使用：

```
GPIO1_IO08
```

控制 LCD 背光。

首先设置 GPIO1_IO08 为输出：

```
GPIO1->GDIR |= (1 << 8);
```

然后输出高电平：

```
GPIO1->DR |= (1 << 8);
```

这样可以打开背光。

所以 LCD 的显示可以简单理解成两个部分：

```
LCD显示控制
     +
LCD背光控制
```

如果 LCD 数据和时序配置正确，但是没有背光，也可能看不到正常的显示效果。

---

## 十一、LCD时钟

LCD 要正常工作，需要一个稳定的像素时钟。

i.MX6ULL 中 LCD 时钟与：

```
PLL_VIDEO
```

有关。

PLL_VIDEO：

> Video PLL，视频锁相环。

LCD 时钟配置的大致过程：

```
24MHz参考时钟
       ↓
   PLL_VIDEO
       ↓
   PFD/分频
       ↓
 LCDIF时钟
       ↓
   LCD显示
```

---

## 十二、PLL_VIDEO

当前 LCD 时钟初始化中使用：

```
PLL_VIDEO
```

配置中：

```
PLL_VIDEO_NUM
PLL_VIDEO_DENOM
PLL_VIDEO
```

其中设置：

```
PLL_VIDEO_NUM = 0;
PLL_VIDEO_DENOM = 1;
```

并配置：

```
DIV_SELECT = 31
```

得到视频 PLL 的工作频率。

代码中的计算关系为：

```
PLL输出频率
=
24MHz × DIV_SELECT
```

当前设置对应：

```
24MHz × 31
=
744MHz
```

所以得到：

```
PLL_VIDEO = 744MHz
```

---

## 十三、LCD时钟分频

PLL 输出频率比较高，不能直接作为 LCD 像素时钟，因此还需要经过分频。

基本关系：

```
PLL_VIDEO
    ↓
分频
    ↓
LCDIF时钟
    ↓
LCD_CLK
```

当前程序中涉及：

```
VIDEO_DIV
LCDIF1_PRE_CLK_SEL
LCDIF1_PRED
LCDIF1_CLK_SEL
LCDIF1_PODF
```

因此 LCD 时钟并不是简单地由 PLL 直接提供，而是经过多个时钟选择和分频环节得到。

---

## 十四、LCDIF

LCDIF：

> LCD Interface

即：

> LCD接口控制器。

i.MX6ULL 内部提供 LCDIF 控制器，用于完成 CPU 与 LCD 之间的数据和时序控制。

可以理解成：

```
CPU
 ↓
LCDIF
 ↓
RGB数据
 ↓
LCD
```

LCDIF 负责：

```
像素数据传输
显示时序控制
分辨率配置
帧缓冲地址配置
LCD时钟控制
```

---

## 十五、LCD初始化整体流程

LCD 初始化可以分成几个主要步骤：

```
① LCD引脚初始化
       ↓
② LCD时钟初始化
       ↓
③ LCD复位
       ↓
④ 设置LCD分辨率
       ↓
⑤ 设置LCD时序参数
       ↓
⑥ 设置帧缓冲地址
       ↓
⑦ 配置LCDIF
       ↓
⑧ 开启LCDIF
       ↓
⑨ 填充显存
```

整体流程：

```
lcd_init()
    │
    ├── lcd_pad_init()
    │
    ├── lcd_clk_init()
    │
    ├── lcd_reset()
    │
    └── LCDIF配置
```

---

## 十六、LCD复位

程序中使用：

```
LCDIF->CTRL |= (1 << 31);
```

进行 LCDIF 相关复位操作。

之后进行一定时间的延时：

```
delay_ms(20);
```

再释放复位：

```
LCDIF->CTRL &= ~(1 << 31);
```

这样可以让 LCDIF 控制器进入正常工作状态。

---

## 十七、LCD分辨率

当前 LCD 屏幕：

```
width  = 800
height = 480
```

即：

```
800 × 480
```

程序中：

```
lcd_dev.width = 800;
lcd_dev.height = 480;
```

因此：

```
X方向：0 ~ 799
Y方向：0 ~ 479
```

总像素：

```
800 × 480 = 384000
```

---

## 十八、像素大小

程序中：

```
lcd_dev.pix_size = 4;
```

表示当前帧缓冲按照：

```
4 Byte / Pixel
```

进行存储。

也就是：

```
每个像素占4个字节
```

因此整个：

```
800 × 480
```

屏幕需要的帧缓冲空间为：

```
800 × 480 × 4
```

计算：

```
384000 × 4
=
1536000 Byte
```

约：

```
1.46MiB
```

因此 LCD 显存需要占用一块连续的内存空间。

---

## 十九、什么是帧缓冲

Frame Buffer：

> 帧缓冲区。

它是一块内存，用于保存当前需要显示的一整帧图像数据。

可以理解为：

```
CPU
 ↓
写入帧缓冲
 ↓
Frame Buffer
 ↓
LCDIF读取
 ↓
LCD显示
```

例如：

```
内存
┌──────────────────┐
│ 像素0             │
│ 像素1             │
│ 像素2             │
│ ...              │
│ 像素800           │
│ 下一行             │
│ ...              │
│ 最后一行           │
└──────────────────┘
```

LCDIF 根据帧缓冲地址读取数据，并不断发送到 LCD。

---

## 二十、帧缓冲地址

程序中：

```
lcd.dev.frame_addr = _FRAME_RAM_ADDR_;
```

帧缓冲地址用于告诉 LCDIF：

> 图像数据存放在哪里。

程序中定义的帧缓冲地址为：

```
0x89000000
```

也就是：

```
_FRAME_RAM_ADDR_
```

因此整个 LCD 显示系统可以理解为：

```
0x89000000
      ↓
   Frame Buffer
      ↓
    LCDIF
      ↓
     LCD
```

---

## 二十一、LCD前景色和背景色

程序中设置：

```
lcd.fore_color = 0x00FF0000;
lcd.back_color = 0x00FFFFFF;
```

其中：

```
fore_color
→ 前景色

back_color
→ 背景色
```

当前背景色：

```
0x00FFFFFF
```

对应白色。

当前前景色：

```
0x00FF0000
```

对应红色。

因此后续绘制字符、图形等内容时，可以使用：

```
前景色 → 显示内容
背景色 → 背景
```

---

## 二十二、LCD时序参数

LCD 不仅需要像素数据，还需要严格的显示时序。

程序中设置：

```
vspw = 3
vfp  = 13
vbp  = 32

hspw = 48
hfp  = 40
hbp  = 88
```

其中：

#### VSPW

Vertical Sync Pulse Width：

> 垂直同步脉冲宽度。

#### VFP

Vertical Front Porch：

> 垂直前肩。

#### VBP

Vertical Back Porch：

> 垂直后肩。

#### HSPW

Horizontal Sync Pulse Width：

> 水平同步脉冲宽度。

#### HFP

Horizontal Front Porch：

> 水平前肩。

#### HBP

Horizontal Back Porch：

> 水平后肩。

---

## 二十三、为什么需要LCD时序

LCD不是只需要：

```
RGB数据
```

还需要知道：

```
什么时候开始一行？
什么时候结束一行？
什么时候开始一帧？
什么时候结束一帧？
```

因此需要：

```
HSYNC
VSYNC
HFP
HBP
VFP
VBP
```

共同确定显示时序。

可以简单理解：

```
               一行
┌─────────────────────────────┐
│ HBP │ 有效显示 │ HFP │ HSPW │
└─────────────────────────────┘

               一帧
┌─────────────────────────────┐
│ VBP                         │
│ 有效显示区域                │
│                             │
│                             │
│ VFP                         │
│ VSPW                        │
└─────────────────────────────┘
```

---

## 二十四、LCDIF显示尺寸配置

程序中：

```
LCDIF->TRANSFER_COUNT =
    (lcd_dev.height << 16) |
    (lcd_dev.width << 0);
```

当前：

```
height = 480
width  = 800
```

所以 LCDIF 被配置为：

```
800 × 480
```

---

## 二十五、LCDIF帧缓冲地址

程序中：

```
LCDIF->CUR_BUF = lcd.dev.frame_addr;
LCDIF->NEXT_BUF = lcd.dev.frame_addr;
```

表示：

```
当前帧缓冲地址
+
下一帧缓冲地址
```

都指向当前的帧缓冲。

因此 LCDIF 可以从指定的内存区域读取显示数据。

---

## 二十六、VDCTRL寄存器

LCDIF 中：

```
VDCTRL0
VDCTRL1
VDCTRL2
VDCTRL3
VDCTRL4
```

用于配置 LCD 显示时序。

可以简单理解为：

```
VDCTRL0
→ 垂直/同步相关控制

VDCTRL1
→ 垂直方向参数

VDCTRL2
→ 水平方向参数

VDCTRL3
→ 水平、垂直相关间隔参数

VDCTRL4
→ 数据宽度等参数
```

程序中通过这些寄存器把：

```
800 × 480
```

以及：

```
HSPW
HFP
HBP
VSPW
VFP
VBP
```

等参数配置到 LCDIF 中。

---

## 二十七、填充整个LCD背景

LCDIF 开启以后，程序使用二维数组指针访问帧缓冲：

```
unsigned int (*pF)[800] =
    (unsigned int (*)[800])lcd_dev.frame_addr;
```

然后：

```
for(i = 0; i < lcd_dev.height; i++)
{
    for(j = 0; j < lcd_dev.width; j++)
    {
        pF[i][j] = lcd_dev.back_color;
    }
}
```

其作用就是：

> 把整个 800×480 屏幕的每一个像素都设置成背景色。

流程：

```
第0行
 ↓
800个像素全部填充
 ↓
第1行
 ↓
800个像素全部填充
 ↓
...
 ↓
第479行
 ↓
完成整个屏幕填充
```

当前背景色为：

```
0x00FFFFFF
```

因此初始化后整个屏幕被填充为白色。

---

## 二十八、LCD显示系统整体结构

可以把今天的 LCD 系统理解为：

```
             i.MX6ULL
                │
       ┌────────┴────────┐
       │                 │
     CPU              时钟系统
       │                 │
       │             PLL_VIDEO
       │                 │
       │              分频
       │                 │
       └───────┬─────────┘
               ↓
             LCDIF
               │
   ┌───────────┼───────────┐
   ↓           ↓           ↓
RGB数据       HSYNC       VSYNC
   │
 LCD_CLK
   │
   ↓
LCD屏幕
   │
800×480
```

同时：

```
Frame Buffer
     │
0x89000000
     │
     ↓
   LCDIF
     │
     ↓
    LCD
```

---

## 二十九、LCD初始化代码结构

今天 LCD 驱动程序的整体结构可以理解为：

```c
void lcd_init(void)
{
    // 1. LCD引脚初始化
    lcd_pad_init();

    // 2. LCD时钟初始化
    lcd_clk_init();

    // 3. 设置LCD基本参数
    lcd_dev.width = 800;
    lcd_dev.height = 480;
    lcd_dev.pix_size = 4;

    // 4. 配置LCD时序参数
    // hspw、hfp、hbp
    // vspw、vfp、vbp

    // 5. LCDIF复位
    lcd_reset();

    // 6. 配置LCDIF
    // TRANSFER_COUNT
    // CUR_BUF
    // NEXT_BUF
    // VDCTRL0~VDCTRL4

    // 7. 开启LCDIF

    // 8. 填充背景
}
```

所以以后学习 LCD 绘图函数时，就是在这个基础上继续增加：

```
画点
画线
画矩形
显示字符
显示图片
```

等功能。

---

## 三十、LCD与显存的关系

LCD本身并不是直接理解 C 语言中的：

```
printf()
```

等函数。

LCD最终需要的是：

```
像素数据
```

因此程序需要先把图像数据写入：

```
Frame Buffer
```

然后：

```
Frame Buffer
      ↓
    LCDIF
      ↓
   RGB数据
      ↓
     LCD
```

所以：

> **LCD显示的核心就是对帧缓冲中的像素数据进行操作。**

例如要把坐标：

```
(x, y)
```

位置的像素设置成红色，本质上就是：

```
FrameBuffer[y][x] = 红色值
```

---

---

← 上一篇：[ARM学习笔记（六）——IIC通信与AT24C08](06a-IIC通信与AT24C08.md) ｜ 下一篇 →：[ARM学习笔记（八）——PWM与ADC](08-PWM与ADC.md)

[返回系列目录](README.md) ｜ [返回知识库首页](../README.md) ｜ [全部文章索引](../INDEX.md)
