# src/recognition

> 统计: 6 文件 / 272 行 / 6 类 / 15 方法 / 15 自由函数 / 10 成员变量 / 3 全局变量 / 19 宏 / 5 typedef / 1 枚举

## recognition/recognition.cpp (37 行)

### 宏 #define (1)
- `RECOGNITION_TEST` = 0  `L25`

### 函数 (5)
- `Crecognition::my_init()` — 定义  `L2`
- `Crecognition::Crecognition()` — 定义  `L9`
- `Crecognition::Crecognition()` — 定义  `L14`
- `Cdata_information::Cdata_information()` — 定义  `L19`
- `main()` — 定义  `L30`

> 完整签名见 JSON: `int Crecognition::my_init(void *p)`、`Crecognition::Crecognition()`、`Crecognition::~Crecognition()`、`Cdata_information::Cdata_information()`、`int main(int argc, char *argv[])`

## recognition/recognition.h (61 行)

### 宏 #define (1)
- `RECOGNITION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class granularity_type   `L11`
- none=0、bit=1、byte=8、word=16、dword=32、qword=64

### typedef / using (5)
- `typedef int (*data_infor_func)(void* input,void *output)`  `L8`
- `typedef unsigned long long base_address_type`  `L9`
- `typedef struct data_information;`  `L31`
- `typedef unsigned int bit_value_type`  `L33`
- `typedef struct bit_information;`  `L38`

### 类 (4)
#### n_recognition::data_information_struct (typedef 别名 `data_information`)  `L22`  `struct`
- 成员变量 (7): `granularity_type type`、`base_address_type base_address`、`base_address_type offset`、`base_address_type end_address`、`void * information`、`char * description`、`int count`

#### n_recognition::bit_information_struct (typedef 别名 `bit_information`)  `L34`  `struct`
- 成员变量 (2): `bit_value_type value`、`char* informarion`

#### n_recognition::Cdata_information  `L40`  `class`
- 成员变量 (1): `data_information * infor`
- 方法 (1):
  - `Cdata_information()` （声明） `L44`

#### n_recognition::Crecognition  `L48`  `class`
- 继承: `Object`
- 方法 (4):
  - `Crecognition()` （声明） `L50`
  - `~Crecognition()` （声明） `L52`
  - `int my_init(void *p=nullptr)` （声明） `L53`
  - `size_t my_size()` （定义） `L54`

## recognition/recognition_intel_gpio.cpp (86 行)

### 宏 #define (6)
- `GPIO_RX_STATE_DESC` = " GPIO RX State (GPIORXSTATE): This is the current internal RX pad …  `L10`
- `GPIO_RX_STATE_COUNT` = (sizeof(GPIO_RX_State)/sizeof(bit_information))  `L17`
- `GPIO_TX_STATE_DESC` = "GPIO TX State (GPIOTXSTATE):TX state in when PMode = 0 ONLY.No eff…  `L20`
- `GPIO_TX_STATE_COUNT` = (sizeof(GPIO_TX_State)/sizeof(bit_information))  `L27`
- `PAD_CONFIGURATION_DW_0_COUNT` = (sizeof(pad_configuration_dw_0)/data_information)  `L35`
- `RECOGNITION_INTEL_GPIO_TEST` = 0  `L74`

### 函数 (6)
- `Crecognition_intel_gpio::my_init()` — 定义  `L33`
- `Crecognition_intel_gpio::Crecognition_intel_gpio()` — 定义  `L40`
- `Crecognition_intel_gpio::Crecognition_intel_gpio()` — 定义  `L45`
- `Crecognition_intel_gpio::analysis()` — 定义  `L50`
- `Crecognition_intel_gpio::analysis()` — 定义  `L64`
- `main()` — 定义  `L75`

> 完整签名见 JSON: `int Crecognition_intel_gpio::my_init(void *p)`、`Crecognition_intel_gpio::Crecognition_intel_gpio()`、`Crecognition_intel_gpio::~Crecognition_intel_gpio()`、`int Crecognition_intel_gpio::analysis(bit_value_type bit_va…`、`int Crecognition_intel_gpio::analysis(unsigned long dw_data…`、`int main(int argc, char *argv[])`

### 全局变量 (3)
- `bit_information GPIO_RX_State`  `L8`
- `bit_information GPIO_TX_State`  `L18`
- `data_information pad_configuration_dw_0`  `L25`

## recognition/recognition_intel_gpio.h (34 行)

### 宏 #define (9)
- `RECOGNITION_INTEL_GPIO_H`（无值，通常为头文件守卫）  `L2`
- `INTEL_SBREG_BAR` = 0xFD000000  `L7`
- `INTEL_PID_GPIOCOM0` = 0x6E0000  `L8`
- `INTEL_PID_GPIOCOM1` = 0x6D0000  `L9`
- `INTEL_PID_GPIOCOM2` = 0x6C0000  `L10`
- `INTEL_PID_GPIOCOM3` = 0x6B0000  `L11`
- `INTEL_PID_GPIOCOM4` = 0x6A0000  `L12`
- `INTEL_PID_GPIOCOM5` = 0x690000  `L13`
- `PAD_CFG_DW0_GPPC_A_0` = (INTEL_SBREG_BAR+INTEL_PID_GPIOCOM0+0x700)  `L15`

### 类 (1)
#### n_recognition_intel_gpio::Crecognition_intel_gpio  `L18`  `class`
- 继承: `Object`
- 方法 (6):
  - `Crecognition_intel_gpio()` （声明） `L20`
  - `~Crecognition_intel_gpio()` （声明） `L22`
  - `int my_init(void *p=nullptr)` （声明） `L23`
  - `size_t my_size()` （定义） `L24`
  - `int analysis(bit_value_type bit_value, bit_information* infor, int infor_count)` （声明） `L25`
  - `int analysis(unsigned long dw_data, data_information *infor,int infor_count)` （声明） `L26`

## recognition/recognition_tab.cpp (32 行)

### 宏 #define (1)
- `RECOGNITION_TAB_TEST` = 0  `L20`

### 函数 (4)
- `Crecognition_tab::my_init()` — 定义  `L2`
- `Crecognition_tab::Crecognition_tab()` — 定义  `L9`
- `Crecognition_tab::Crecognition_tab()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Crecognition_tab::my_init(void *p)`、`Crecognition_tab::Crecognition_tab()`、`Crecognition_tab::~Crecognition_tab()`、`int main(int argc, char *argv[])`

## recognition/recognition_tab.h (22 行)

### 宏 #define (1)
- `RECOGNITION_TAB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_recognition_tab::Crecognition_tab  `L9`  `class`
- 继承: `Object`
- 方法 (4):
  - `Crecognition_tab()` （声明） `L11`
  - `~Crecognition_tab()` （声明） `L13`
  - `int my_init(void *p=nullptr)` （声明） `L14`
  - `size_t my_size()` （定义） `L15`
