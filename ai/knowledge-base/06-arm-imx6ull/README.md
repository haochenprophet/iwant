# 06 · ARM 学习笔记（i.MX6ULL 裸机）

> 原文出处：CSDN「斑马819」《ARM学习笔记》系列，共 10 篇，发布于 2026-09-18 至 2026-09-30。原文有两篇同编为「六」，本库按发布时间区分为 06 与 06a。

## 一、系列定位

这是一条「先讲清 CPU，再让 CPU 去点灯，最后让 CPU 去驱动外设」的裸机学习路线：前两篇打体系结构与汇编的底子；第三、四篇把「查手册 → 配寄存器 → 编译链接 → 烧写 → 看现象」的闭环打通并工程化；之后沿中断、时钟/定时器、IIC、LCD、PWM/ADC、SPI 与触摸屏逐类点亮片上外设。全程不跑操作系统，程序直接操作 i.MX6ULL 的寄存器。

- **技术栈**：ARM Cortex-A7 汇编与 C、裸机启动代码、IOMUXC 引脚复用、GPIO、中断、时钟树、定时器、LCD、通信外设。
- **实验载体**：IMX6ULL-Mini 开发板，SD 卡启动，现象以板载 LED、蜂鸣器与 LCD 屏幕为准。
- **读者画像**：会 C 语言、做过 8 位单片机（原文多次拿 51 单片机做对照），准备转向 ARM 与 Linux 驱动的人。
- **编号说明**：第（六）篇出现了两次，先发布的是《时钟、PLL、EPIT与GPT定时器》（2026-09-23），后发布的是《IIC通信与AT24C08》（2026-09-28）。本库按发布时间把前者编为 `06`、后者编为 `06a`，属编号补充，并非原文错误。

## 二、前置知识与环境

- **主机分工**：在 Windows 下写代码、在 Ubuntu 里编译，两边用 FileZilla 传源码；自己搭 FTP 服务可用 `vsftpd`，需保证 `local_enable=YES` 与 `write_enable=YES`。
- **交叉编译工具链**：`gcc-linaro-4.9.4-2017.01-x86_64_arm-linux-gnueabihf`，解压到 `/usr/local/arm`，把 `bin` 目录追加进 `~/.bashrc` 的 `PATH`，重启后用 `arm-linux-gnueabihf-gcc -v` 验证。
- **四个工具**：`gcc` 汇编/编译出 `.o`，`ld` 链接出 `.elf`，`objcopy` 转出 `.bin`，`objdump` 反汇编出 `.dis`；`make` 负责把整条流水线串起来。
- **开发板**：IMX6ULL-Mini，核心为 NXP i.MX6ULL（Cortex-A7 单核，528MHz 工业级或 800MHz 商业级，BGA 封装，512MB DDR3L，8GB eMMC），底板带红色用户 LED、蓝色电源指示灯、蜂鸣器、按键与 LCD 接口。
- **下载与启动**：用 `imxdownload` 把 `xxx.bin` 写入 SD 卡（如 `/dev/sdb`），再用 BOOT 拨码开关选中 SD 卡启动；另有 USB、eMMC、NAND 启动方式。
- **编辑器**：VS Code，装 `Arm Assembly` 插件做汇编高亮。
- **现象验证**：原文以「烧写 → 上电 → 看 LED 或屏幕」为主，未涉及串口打印与在线调试器。

## 三、知识脉络

系列按「体系结构/汇编 → 裸机点灯与 BSP 工程管理 → 中断 → 定时器/时钟 → IIC → LCD → PWM/ADC → SPI/触摸屏」递进，每一层都给下一层准备好工具：

1. **体系结构与汇编（01～02）**：从 SoC（System on Chip，片上系统）、RAM/ROM、CISC（Complex Instruction Set Computer）与 RISC（Reduced Instruction Set Computer）、Cortex-A/R/M 讲到 R0～R15、CPSR/SPSR、Cache 与 MMU（Memory Management Unit），再落到启动代码要用的指令、栈与异常向量表。
2. **裸机点灯与 BSP 工程管理（03～04）**：先汇编点亮 `GPIO1_IO03`，跑通查寄存器、写宏、编译链接、烧写、观察；再用 C、SDK（Software Development Kit，软件开发工具包）头文件、BSP（Board Support Package，板级支持包）分层与链接脚本把这套流程工程化。
3. **中断（05）**：按键 → GPIO → GIC（Generic Interrupt Controller，通用中断控制器）→ IRQ（Interrupt Request，中断请求）→ 中断服务函数，第一次把外部事件引到 CPU。
4. **定时器/时钟（06）**：先弄清 PLL（Phase Locked Loop，锁相环）、PFD（Phase Fractional Divider，分数分频器）与预分频器组成的时钟树，再用 EPIT（Enhanced Periodic Interrupt Timer）做周期中断、用 GPT（General Purpose Timer）做精准延时与捕获/比较。
5. **IIC（Inter-Integrated Circuit，集成电路总线）（06a）**：把时序亲手写一遍——START/STOP、ACK/NACK、重复 START，读写对象是 AT24C08。
6. **LCD（Liquid Crystal Display，液晶显示）（07）**：时钟树、帧缓冲、LCDIF 与时序参数汇到一起，第一次有「人能看到」的输出。
7. **PWM（Pulse Width Modulation，脉宽调制）与 ADC（Analog-to-Digital Converter，模数转换器）（08）**：一个往外输出可调的效果，一个把外部模拟量读进来。
8. **SPI（Serial Peripheral Interface，串行外设接口）与触摸屏（09）**：补上四线同步总线的概念与四种模式，再用 IIC 接口的 GT9147 把显示与触摸凑成简易界面。

## 四、逐篇速览

| 篇号 | 标题 | 一句话概括 | 关键知识点 |
| --- | --- | --- | --- |
| 01 | [基本概念](01-基本概念.md) | 建立嵌入式系统、处理器类型与 ARM 内核组成的整体认知 | `CPSR`/`SPSR`、`R13`～`R15`、Cache、MMU、三级流水线、AHB/APB |
| 02 | [ARM汇编基础](02-ARM汇编基础.md) | 围绕启动代码掌握 ARM 指令、栈与异常向量表 | `MOV`/`ADD`/`SUB`、`LDR`/`STR`、`BIC`/`ORR`、`CMP` 加条件码、`STMFD`/`LDMFD`、12 位立即数 |
| 03 | [i.MX6ULL—LED点灯](03-i.MX6ULL—LED点灯.md) | 用汇编点亮 LED，并打通编译、链接、烧写链路 | IOMUXC 复用、`GPIOx_GDIR`、`GPIOx_DR`、`-Ttext 0x87800000`、`imxdownload`、Makefile |
| 04 | [C语言点灯、蜂鸣器裸机驱动、BSP工程管理](04-i.MX6ULL-C语言点灯、蜂鸣器裸机驱动、BSP工程管理.md) | 把点灯改写成 C，并整理出 BSP 分层工程与链接脚本 | `volatile`、`CCM_CCGR0`～`CCM_CCGR6`、`IOMUXC_SetPinMux`、S8550、`.text`/`.data`/`.bss`、`ALIGN(4)` |
| 05 | [Cortex-A7中断、GIC与GPIO中断](05-Cortex-A7中断、GIC与GPIO中断.md) | 打通按键 → GPIO → GIC → IRQ → 中断服务函数的完整路径 | `VBAR`、`mcr p15`、向量 `0x18`、`ICR2`/`IMR`/`ISR`、`GPIO1_Combined_16_31_IRQn` |
| 06 | [时钟、PLL、EPIT与GPT定时器](06-时钟、PLL、EPIT与GPT定时器.md) | 理清 i.MX6ULL 时钟树，并用 EPIT/GPT 做定时与延时 | PLL/PFD/Prescaler、`AHB_CLK_ROOT` 132MHz、IPG 与 PERCLK 66MHz、计数公式 |
| 06a | [IIC通信与AT24C08](06a-IIC通信与AT24C08.md) | 手写 IIC 时序，完成对 AT24C08 EEPROM 的读写 | START/STOP、ACK/NACK、地址 `0x50`、重复 START、`I2CR`/`I2SR`/`I2DR`/`IFDR` |
| 07 | [LCD液晶显示](07-LCD液晶显示.md) | 配置 LCDIF 与 PLL_VIDEO，让 800×480 屏幕显示纯色 | 24 根 RGB 数据线、HSYNC/VSYNC、`VDCTRL0`～`VDCTRL4`、帧缓冲 `0x89000000`、时序参数 |
| 08 | [PWM与ADC](08-PWM与ADC.md) | 掌握占空比调亮度的原理与 ADC 数字量换算电压的方法 | `f = 1/T`、占空比、周期寄存器与比较寄存器、12 位 4095 级、量化误差 |
| 09 | [SPI 与 GT9147](09-SPI-与-GT9147.md) | 认识 SPI 四线四模式，并用 GT9147 坐标做软按键 | `SCLK`/`MOSI`/`MISO`/`CS`、CPOL/CPHA、全双工、坐标高低温字节、区域判断 |

## 五、核心要点

### 5.1 体系结构与汇编

- **内核组成**：`R0`～`R15` 通用寄存器、ALU（Arithmetic Logic Unit）、Cache（`iCache`/`dCache`）、MMU（Memory Management Unit）与 `CPSR`。`R13`=`SP`（Stack Pointer）、`R14`=`LR`（Link Register）、`R15`=`PC`（Program Counter），函数返回与异常返回都靠后两者。
- **12 位立即数**：一条指令里的立即数被编码成「4 位 rotate 加 8 位 imm8」，只有能被偶数位循环右移、且高 24 位为 0 的数才合法。所以 `MOV r0, #0x40001000` 编不过，要写 `LDR sp, =0x40001000`。
- **位操作套路**：`BIC` 指定位清 0、`ORR` 指定位置 1、`MVN` 按位取反；`CMP` 不保存结果、只改 `N`/`Z`/`C`/`V`，再配 `EQ`/`GE`/`LT` 等条件码，就等价于 C 里的 `if`。
- **调用与现场**：`BL` 把返回地址存进 `LR`，`BX LR` 返回；嵌套调用前 `STMFD sp!, {r0-r12, lr}` 压栈，返回时 `LDMFD sp!, {r0-r12, pc}` 出栈，出栈时直接改 `PC` 就完成了跳回。栈分满/空、增/减四种组合，启动阶段初始化 `SP` 必须与编译器约定一致。
- **改工作模式**：先 `MRS` 读 `CPSR`，`BIC` 清模式位，`ORR` 写新模式，再 `MSR` 写回：

```asm
MRS r0, CPSR
BIC r0, r0, #(0x1FF << 0)
ORR r0, r0, #(0x10 << 0)
MSR CPSR, r0
```

- **启动代码五件事**：建异常向量表 → 初始化各模式 `SP` → 开中断 → 切 User 模式 → 进 `main()`。`cpsid i` 关 IRQ、`cpsie i` 打开，`cps #0x12` 与 `cps #0x1F` 分别切到 IRQ 与 System 模式。

### 5.2 裸机开发流程与 BSP

- **访问一个引脚的四步**：IOMUXC 复用（`IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO03 = 0x05`，低四位选 GPIO 功能）→ 电气特性（`IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO03 = 0x10B0`）→ 方向（`GPIO1_GDIR |= (1 << 3)` 设为输出）→ 数据（`GPIO1_DR` 写 0 或 1）。四步缺一，灯就不会亮。
- **寄存器映射成变量**：`#define GPIO1_DR *((unsigned int *)0x0209C000)`，再加 `volatile`，编译器才不会把重复读写优化掉。`GPIO1_IO03` 是低电平点亮，所以 `DR &= ~(1 << 3)` 亮、`DR |= (1 << 3)` 灭、`DR ^= (1 << 3)` 翻转。
- **编译链**：`.S` 经 `gcc -c` 得 `.o`，经 `ld -Ttext 0x87800000` 得 `.elf`，经 `objcopy -O binary` 得 `.bin`，再由 `imxdownload` 写入 SD 卡；`objdump -D` 生成的 `.dis` 只用于读机器码，不参与运行。
- **链接脚本**：`.text` 从 `. = 0x87800000` 起排，`.rodata`/`.data`/`.bss` 各自 `ALIGN(4)`；`.bss` 与 `COMMON` 被 `__bss_start`、`__bss_end` 括住，启动时整段清零，因此 `.bin` 里不必保存一堆 0。
- **BSP 分层**：`project/`（`main.c`、`start.S`）管流程，`imx6ull/`（`cc.h`、`core_ca7.h`、`fsl_common.h`、`fsl_iomuxc.h`、`MCIMX6Y2.h`）管处理器定义，`bsp/`（`led`、`beep` 等）管具体外设，上层只调接口、不碰寄存器。
- **SDK 的收益**：从「自己查地址写宏」变成 `IOMUXC_SetPinMux(IOMUXC_GPIO1_IO03_GPIO1_IO03, 0)`、`IOMUXC_SetPinConfig(..., 0x10B0)`、`GPIO1->GDIR`，同一份代码可读性明显变好。

### 5.3 中断系统

- **完整路径**：按键动作 → `GPIO1_IO18` 电平变化（10kΩ 上拉到 DCDC3V3，按下接地）→ GPIO 产生中断请求 → GIC（Generic Interrupt Controller，通用中断控制器）→ CPU 进 IRQ → 异常向量 `0x18` → `IRQ_Handler` → 中断服务函数。
- **GIC 两段**：Distributor 管使能、优先级与目标 CPU，CPU Interface 管与 CPU 的交接。初始化就是 `GIC_SetPriority(99, 0)` 与 `GIC_EnableIRQ(99)`（99 为示例中断号），基地址先用 `mrc p15, 4, r0, c15, c0, 0` 取，再偏移 `0x2000`。
- **向量表基址**：`VBAR`（Vector Base Address Register）用 `mcr p15, 0, r0, c12, c0, 0` 指到 `0x87800000`，异常向量表必须落在这个基址上。
- **入口两条汇编**：`sub lr, lr, #4` 先修正返回地址，`stmfd sp!, {r0-r12, lr}` 再保护现场，两步顺序不能颠倒。
- **GPIO 中断寄存器**：

| 寄存器 | 作用 | 实验中的用法 |
| --- | --- | --- |
| `GPIO1->ICR2` | 设定触发方式（边沿或电平） | 对应位写 `3 << 4` |
| `GPIO1->IMR` | 中断屏蔽与使能 | 第 18 位置 1 |
| `GPIO1->ISR` | 中断状态标志与清除 | 先读判位，再写回清标志 |

- **服务函数两层判断**：先用中断号确认是 `GPIO1_Combined_16_31_IRQn`，再用 `ISR` 的第 18 位确认是 `GPIO1_IO18`；处理完立刻清 `ISR`，否则会反复进中断。

### 5.4 时钟与定时器

- **时钟树**：晶体振荡器（压电效应）给出稳定基准 → PLL（Phase Locked Loop，锁相环）倍频 → PFD（Phase Fractional Divider，分数分频器）与 Prescaler（预分频器）分频 → 供给 CPU、AHB、IPG、PERCLK 与各外设。
- **三个要记住的频率**：`AHB_CLK_ROOT = 132MHz`、`IPG_CLK_ROOT = 66MHz`、`PERCLK_CLK_ROOT = 66MHz`，通常 `AHB = 2 × IPG`。ARM 内核时钟来自 `CCM_ANALOG_PLL_ARM`，528 PLL 与 480 PLL 各经自己的 PFD 供外设。
- **改 PLL 的顺序**：先切 `OSC_CLK`，让 `STEP_CLK`（24MHz）临时当班 → 改 PLL1 倍频参数 → 配置 PLL 后分频 → 切回 `PLL1_MAIN_CLK`。改倍频前必须先设好二分频，否则内核时钟会瞬间冲高、直接跑飞。
- **分频字段**：

| 目标时钟 | 关键字段 |
| --- | --- |
| `AHB_CLK_ROOT` | `CBCMR[PRE_PERIPH_CLK_SEL]`、`CBCDR[PERIPH_CLK_SEL]`、`CBCDR[AHB_PODF]` |
| `IPG_CLK_ROOT` | `CBCDR[IPG_PODF]` |
| `PERCLK_CLK_ROOT` | `CSCMR1[PERCLK_CLK_SEL]`、`CSCMR1[PERCLK_PODF]` |

- **定时器只有一个核心公式**：`Ftimer = Fclock / Prescaler`，`Tcount = 1 / Ftimer`，`Count = T × Ftimer`。1MHz 计数时一个计数就是 1μs，定时 1 秒要数 1,000,000 次。注意 `1MHz = 1,000,000Hz` 是十进制，`1MiB = 1,048,576Byte` 是二进制，别混用。
- **EPIT 与 GPT 的分工**：EPIT（Enhanced Periodic Interrupt Timer，增强型周期中断定时器）专职周期中断，1 秒一次中断里翻转 LED 最典型；GPT（General Purpose Timer，通用定时器）可自由运行（0～65535 循环），靠前后两次计数值之差做精准延时，也支持输入捕获与输出比较。

### 5.5 显示与触摸

- **通路**：帧缓冲（Frame Buffer）→ LCDIF（LCD Interface，LCD 接口控制器）→ `LCD_DATA00`～`LCD_DATA23` 共 24 根 RGB 数据线，外加 `LCDIF_CLK`、`HSYNC`、`VSYNC`、`LCDIF_ENABLE` → 800×480 屏幕。
- **像素时钟**：24MHz → `PLL_VIDEO`（`PLL_VIDEO_NUM = 0`、`PLL_VIDEO_DENOM = 1`、`DIV_SELECT = 31`，按原文的 `24MHz × 31` 得 744MHz）→ `VIDEO_DIV`、`LCDIF1_PRE_CLK_SEL`、`LCDIF1_PRED`、`LCDIF1_CLK_SEL`、`LCDIF1_PODF` 逐级分频 → `LCDIF_CLK`。
- **时序参数**：`hspw = 48`、`hfp = 40`、`hbp = 88`、`vspw = 3`、`vfp = 13`、`vbp = 32`，最终落到 `VDCTRL0`～`VDCTRL4`；`LCDIF->TRANSFER_COUNT = (height << 16) | (width << 0)` 把分辨率交给控制器。
- **显存**：`pix_size = 4` 字节每像素，800×480 需要 `800 × 480 × 4 = 1536000` 字节（约 1.46MiB），帧缓冲起始地址 `0x89000000`，`CUR_BUF` 与 `NEXT_BUF` 都指向它。
- **画点就是写内存**：`unsigned int (*pF)[800] = (unsigned int (*)[800])lcd_dev.frame_addr;`，然后 `pF[y][x] = color;`。前景色 `0x00FF0000`（红），背景色 `0x00FFFFFF`（白）。
- **别忘复位与背光**：`LCDIF->CTRL |= (1 << 31)` 复位，`delay_ms(20)` 后清掉该位；背光由 `GPIO1_IO08` 控制，`GPIO1->GDIR |= (1 << 8)` 设输出、`GPIO1->DR |= (1 << 8)` 拉高打开。
- **触摸**：GT9147 是电容式触摸控制器，走 IIC 读状态、点数与坐标；`x = X_L | (X_H << 8)`，如 `0x012C` 即 300，坐标范围 X 为 0～799、Y 为 0～479，程序据此判断按钮区域。

### 5.6 通信外设

- **IIC（Inter-Integrated Circuit）**：`SDA`（Serial Data）与 `SCL`（Serial Clock）两线，同步、半双工、多设备靠地址区分。START 是 `SCL` 为高时 `SDA` 由 1 变 0，STOP 是 `SCL` 为高时 `SDA` 由 0 变 1；每 8 位数据后第 9 个时钟给 ACK，读最后 1 字节回 NACK 表示不再接收。
- **AT24C08 的读写时序**（设备地址 `0x50`，写地址 `(0x50 << 1) | 0`，读地址末位为 1）：

```text
写：START → 0x50+W → ACK → 内部存储地址 → ACK → 数据 → ACK → STOP
读：START → 0x50+W → ACK → 内部存储地址 → ACK → 重复 START → 0x50+R → ACK → 数据 → NACK → STOP
```

- **控制器寄存器**：`I2CR`（I2C Control Register）管使能与 START/STOP，`I2SR`（I2C Status Register）看 ACK 与总线状态，`I2DR`（I2C Data Register）收发数据，`IFDR`（I2C Frequency Divider Register）分频（实验值 `0x15`）。I2C1 的 `SDA`、`SCL` 由 `UART4_RX_DATA`、`UART4_TX_DATA` 经 IOMUX 复用而来。
- **写函数参数**：`i2c_write(I2C1, 0x50, 0, 1, data, size)` 依次是控制器、从机地址、内部地址、地址长度、数据、数据长度；字符串长度用 `strlen()`，别忘了结尾的 `'\0'` 也占一个字节。
- **SPI（Serial Peripheral Interface）**：`SCLK`、`MOSI`、`MISO`、`CS` 四线，同步、全双工，一字节 8 个时钟；四种模式由 `CPOL`（Clock Polarity，空闲电平）与 `CPHA`（Clock Phase，采样边沿）组合，主从必须同模式。
- **一个容易被标题带偏的点**：GT9147 实际用 IIC 与主控交换触摸数据，SPI 这一篇的重点是总线概念与四模式对比。

## 六、易错点与踩坑

1. **寄存器地址张冠李戴**：`0x020E0068` 是复用、`0x020E02F4` 是电气属性、`0x0209C000` 与 `0x0209C004` 才是 `GPIO1_DR`、`GPIO1_GDIR`，抄错一个数就是灯不亮。
2. **只配 GDIR 没配 IOMUXC**：引脚默认并非 GPIO 功能，只有把复用值 `0x05` 写进 MUX 寄存器，`GDIR` 与 `DR` 才会生效。
3. **`.S` 写成小写**：大写 `.S` 才会过预处理，小写 `.s` 会让依赖宏的写法失效。
4. **用 `MOV` 装大立即数**：32 位地址多半塞不进 12 位立即数，应改用 `LDR Rd, =addr`；同时别把 `=` 伪指令和 `LDR Rt, [Rn]` 的内存访问混为一谈。
5. **低电平点亮写反**：`GPIO1_IO03` 输出 0 才亮，`&= ~(1 << 3)` 与 `|= (1 << 3)` 一旦对调，点灯与灭灯就会整体反过来。
6. **中断号对不上、标志也不清**：`GIC_EnableIRQ()` 的中断号要与 `GPIO1_Combined_16_31_IRQn` 对应；一个 GPIO 组有 16 个引脚，进函数后还得用 `ISR` 判具体引脚；处理完不写回 `ISR` 对应位，中断标志一直挂着，会反复重入。
7. **IRQ 入口漏了 `sub lr, lr, #4`**：原文要求先调整 `LR` 再压栈，顺序颠倒时保存下来的返回地址就是错的。
8. **改 PLL 没先设二分频**：倍频参数一动，内核时钟瞬间冲高，板子可能直接跑飞；正确顺序是「切安全时钟 → 改 PLL → 设分频 → 切回」。
9. **MHz 当 MiB 用**：`1MHz = 1,000,000Hz` 与 `1MiB = 1,048,576Byte` 混用，算定时和算显存都会差一截（800×480×4 结果是 1,536,000 字节，约 1.46MiB）。
10. **EEPROM 写完立刻读**：AT24C08 有内部写周期，连续操作不能假设数据发完就生效；读最后 1 字节要给 NACK 再 STOP，否则从机还会继续发。
11. **SPI 模式不匹配**：`CPOL` 与 `CPHA` 四选一选错，数据会整体错位，主机与从机必须是同一个 Mode。
12. **LCD 只盯数据、漏了时序和背光**：`hspw`/`hfp`/`hbp`、`vspw`/`vfp`/`vbp` 有一个不对就会偏移、撕裂或黑屏；背光没开时，配置全对也照样看不见。

## 七、关键术语

| 术语 | 说明 |
| --- | --- |
| CPSR | Current Program Status Register，当前程序状态寄存器，存条件标志、工作状态、处理器模式与中断屏蔽 |
| SPSR | Saved Program Status Register，异常发生时用于保存原 CPSR |
| IOMUXC | IOMUX Controller，引脚复用控制器，决定一个引脚做 GPIO 还是 IIC、LCD 等 |
| GIC | Generic Interrupt Controller，通用中断控制器，负责使能、优先级与分发 |
| VBAR | Vector Base Address Register，异常向量表基地址寄存器，经 CP15 设置 |
| CP15 | Cortex-A 的系统控制协处理器，管 Cache、MMU 与向量基址 |
| BSP | Board Support Package，板级支持包，把外设驱动与上层流程分开 |
| PLL | Phase Locked Loop，锁相环，对输入时钟倍频 |
| PFD | Phase Fractional Divider，分数分频器，对 PLL 输出再分频 |
| EPIT | Enhanced Periodic Interrupt Timer，增强型周期中断定时器 |
| GPT | General Purpose Timer，通用定时器，支持自由运行、输入捕获与输出比较 |
| LCDIF | LCD Interface，LCD 接口控制器，负责像素数据与显示时序 |
| PWM | Pulse Width Modulation，脉宽调制，用占空比调亮度或转速 |
| ADC | Analog-to-Digital Converter，模数转换器 |
| IIC | Inter-Integrated Circuit，两线同步串行总线 |
| SPI | Serial Peripheral Interface，四线同步全双工串行总线 |
| EEPROM | Electrically Erasable Programmable Read-Only Memory，电可擦除可编程只读存储器 |
| GT9147 | 电容式触摸屏控制器，经 IIC 上报触点数量与坐标 |

## 八、延伸与衔接

- **裸机经验如何迁到 Linux 驱动**：本系列手写过的每一类外设，在内核里都有对应子系统接手——时钟从直接改 `CCM` 寄存器变成 clock framework，中断从手动配 GIC 变成 `request_irq()` 加中断子系统，IIC/SPI 从自己拼时序变成控制器驱动加设备驱动，LCD 的帧缓冲思路直接对应 framebuffer，触摸坐标则归到 input 子系统。先懂寄存器与时序，再看框架会轻松得多。
- **与本库 04-linux-sysprog 的衔接**：那一系列讲 Shell、标准 IO、文件 IO、进程与线程、进程间通信、网络与数据库，例如 [文件IO与目录IO](../04-linux-sysprog/03-文件IO与目录IO.md)、[进程](../04-linux-sysprog/04-进程.md)、[网络（二）——TCP通信](../04-linux-sysprog/10-网络（二）——TCP通信.md)，提供的是「在 Linux 用户态写程序」的能力；本系列提供的是「在 Linux 之下直接操纵硬件」的能力。两者合起来，才够得着字符设备驱动、平台设备模型与设备树。
- **与 05-mcu-8051 的衔接**：单片机那两篇里的 GPIO、定时器、UART 与中断经验，在这里被放大成 PLL 时钟树、EPIT/GPT 与 GIC 中断；原文本身就多次用「51 与 i.MX6ULL 定时器对比」来做过渡，可从 [单片机学习笔记](../05-mcu-8051/01-STC89C52的GPIO、LED、数码管、定时器和中断.md) 回看。
- **建议的复现顺序**：03 → 04 → 05 → 06 → 06a → 07 → 08 → 09，每篇都落到板子上验证一次。06 的时钟树与 07 的 PLL_VIDEO 是同一条思路，先弄懂前者，后者只是换一个 PLL 再分频。
- **原文留白**：全系列没有讲 UART 串口打印，现象验证依赖 LED 与屏幕，缺一个稳定的调试输出；按键中断也没有讨论消抖，定时器的输入捕获与 PWM 测量只在概念层面出现，都可作为下一步自学的切入点。
