# src/hardware

> 统计: 49 文件 / 2562 行 / 29 类 / 169 方法 / 185 自由函数 / 28 成员变量 / 2 全局变量 / 70 宏 / 4 typedef / 4 枚举

## hardware/block_dev.cpp (31 行)

### 宏 #define (1)
- `BLOCK_DEV_TEST` = 0  `L20`

### 函数 (4)
- `Cblock_dev::my_init()` — 定义  `L2`
- `Cblock_dev::Cblock_dev()` — 定义  `L9`
- `Cblock_dev::Cblock_dev()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cblock_dev::my_init(void *p)`、`Cblock_dev::Cblock_dev()`、`Cblock_dev::~Cblock_dev()`、`int main(int argc, char *argv[])`

## hardware/block_dev.h (19 行)

### 宏 #define (1)
- `BLOCK_DEV_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_block_dev::Cblock_dev  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cblock_dev()` （声明） `L9`
  - `~Cblock_dev()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/bus.cpp (31 行)

### 宏 #define (1)
- `BUS_TEST` = 0  `L20`

### 函数 (4)
- `Cbus::my_init()` — 定义  `L2`
- `Cbus::Cbus()` — 定义  `L9`
- `Cbus::Cbus()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cbus::my_init(void *p)`、`Cbus::Cbus()`、`Cbus::~Cbus()`、`int main(int argc, char *argv[])`

## hardware/bus.h (19 行)

### 宏 #define (1)
- `BUS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_bus::Cbus  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cbus()` （声明） `L9`
  - `~Cbus()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/clock_tree.cpp (32 行)

### 宏 #define (1)
- `CLOCK_TREE_TEST` = 0  `L20`

### 函数 (4)
- `Cclock_tree::my_init()` — 定义  `L2`
- `Cclock_tree::Cclock_tree()` — 定义  `L9`
- `Cclock_tree::Cclock_tree()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cclock_tree::my_init(void *p)`、`Cclock_tree::Cclock_tree()`、`Cclock_tree::~Cclock_tree()`、`int main(int argc, char *argv[])`

## hardware/clock_tree.h (20 行)

### 宏 #define (1)
- `CLOCK_TREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_clock_tree::Cclock_tree  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cclock_tree()` （声明） `L9`
  - `~Cclock_tree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## hardware/cmos.cpp (260 行)

### 宏 #define (1)
- `CMOS_TEST` = 0  `L247`

### 函数 (21)
- `CcmosActionParameter::CcmosActionParameter()` — 定义  `L4`
- `Ccmos::my_init()` — 定义  `L12`
- `Ccmos::Ccmos()` — 定义  `L19`
- `Ccmos::Ccmos()` — 定义  `L27`
- `Ccmos::read()` — 定义  `L34`
- `Ccmos::write()` — 定义  `L45`
- `Ccmos::and_cmd()` — 定义  `L57`
- `Ccmos::and_cmd()` — 定义  `L65`
- `Ccmos::or_cmd()` — 定义  `L70`
- `Ccmos::or_cmd()` — 定义  `L78`
- `Ccmos::read_cmd()` — 定义  `L83`
- `Ccmos::read_cmd()` — 定义  `L92`
- `Ccmos::write_cmd()` — 定义  `L97`
- `Ccmos::rw_cmd()` — 定义  `L102`
- `Ccmos::dump_cmd()` — 定义  `L108`
- `Ccmos::dump_cmd()` — 定义  `L129`
- `Ccmos::chksum_cmd()` — 定义  `L134`
- `Ccmos::do_action()` — 定义  `L150`
- `Ccmos::set_action_parameter()` — 定义  `L164`
- `Ccmos::deal_cmd()` — 定义  `L210`
- `main()` — 定义  `L252`

> 完整签名见 JSON。

## hardware/cmos.h (58 行)

### 宏 #define (6)
- `CMOS_H`（无值，通常为头文件守卫）  `L2`
- `CMOS_INDEX` = 0x70  `L7`
- `CMOS_DATA` = 0x71  `L8`
- `CMOS_INDEX_MAX` = 0x7F  `L9`
- `EXT_CMOS_INDEX` = 0x72  `L11`
- `EXT_CMOS_DATA` = 0x73  `L12`

### 类 (2)
#### n_cmos::CcmosActionParameter  `L16`  `class`
- 成员变量 (4): `int index`、`int data`、`int start`、`int end`
- 方法 (1):
  - `CcmosActionParameter()` （声明） `L18`

#### n_cmos::Ccmos  `L27`  `class`
- 继承: `Object`
- 成员变量 (1): `CcmosActionParameter cmos_action_parameter`
- 方法 (20):
  - `Ccmos()` （声明） `L31`
  - `~Ccmos()` （声明） `L33`
  - `int my_init(void *p=nullptr)` （声明） `L34`
  - `size_t my_size()` （定义） `L35`
  - `int read(unsigned char index, unsigned char* data)` （声明） `L36`
  - `int write(unsigned char index, unsigned char data)` （声明） `L37`
  - `int and_cmd(unsigned char index, unsigned char data)` （声明） `L38`
  - `int and_cmd()` （声明） `L39`
  - `int or_cmd(unsigned char index, unsigned char data)` （声明） `L40`
  - `int or_cmd()` （声明） `L41`
  - `int read_cmd(unsigned char index)` （声明） `L42`
  - `int read_cmd()` （声明） `L43`
  - `int write_cmd()` （声明） `L44`
  - `int rw_cmd()` （声明） `L45`
  - `int dump_cmd(int start ,int end)` （声明） `L46`
  - `int dump_cmd()` （声明） `L47`
  - `int chksum_cmd()` （声明） `L48`
  - `int do_action(void* a = nullptr)` （声明） `L49`
  - `int set_action_parameter(int argc, char* argv[])` （声明） `L50`
  - `int deal_cmd(int argc, char *argv[])` （声明） `L51`

## hardware/cmos_action.h (48 行)

### 宏 #define (1)
- `CMOS_ACTION_H`（无值，通常为头文件守卫）  `L2`

### 枚举 enum class CmosAtcionClass   `L5`
- none、read、write、rw、dump、_and、_or、chksum

### 枚举 enum class CmosAtcion   `L17`
- none、read、r、R、dump、d、D、write、w、W、rw、RW、_and、a、A、_or、o、O、chksum、C、c

## hardware/cpu.cpp (31 行)

### 宏 #define (1)
- `CPU_TEST` = 0  `L20`

### 函数 (4)
- `Ccpu::my_init()` — 定义  `L2`
- `Ccpu::Ccpu()` — 定义  `L9`
- `Ccpu::Ccpu()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ccpu::my_init(void *p)`、`Ccpu::Ccpu()`、`Ccpu::~Ccpu()`、`int main(int argc, char *argv[])`

## hardware/cpu.h (19 行)

### 宏 #define (1)
- `CPU_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_cpu::Ccpu  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Ccpu()` （声明） `L9`
  - `~Ccpu()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/device.cpp (31 行)

### 宏 #define (1)
- `DEVICE_TEST` = 0  `L20`

### 函数 (4)
- `Cdevice::my_init()` — 定义  `L2`
- `Cdevice::Cdevice()` — 定义  `L9`
- `Cdevice::Cdevice()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cdevice::my_init(void *p)`、`Cdevice::Cdevice()`、`Cdevice::~Cdevice()`、`int main(int argc, char *argv[])`

## hardware/device.h (19 行)

### 宏 #define (1)
- `DEVICE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_device::Cdevice  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cdevice()` （声明） `L9`
  - `~Cdevice()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/driver.cpp (31 行)

### 宏 #define (1)
- `DRIVER_TEST` = 0  `L20`

### 函数 (4)
- `Cdriver::my_init()` — 定义  `L2`
- `Cdriver::Cdriver()` — 定义  `L9`
- `Cdriver::Cdriver()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cdriver::my_init(void *p)`、`Cdriver::Cdriver()`、`Cdriver::~Cdriver()`、`int main(int argc, char *argv[])`

## hardware/driver.h (19 行)

### 宏 #define (1)
- `DRIVER_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_driver::Cdriver  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cdriver()` （声明） `L9`
  - `~Cdriver()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/gpio.cpp (163 行)

### 宏 #define (1)
- `GPIO_TEST` = 0  `L152`

### 函数 (26)
- `Cgpio::my_init()` — 定义  `L2`
- `Cgpio::Cgpio()` — 定义  `L9`
- `Cgpio::Cgpio()` — 定义  `L14`
- `Cgpio::get_native()` — 定义  `L19`
- `Cgpio::set_to_native()` — 定义  `L25`
- `Cgpio::set_gpio_owner()` — 定义  `L31`
- `Cgpio::get_gpio_owner()` — 定义  `L37`
- `Cgpio::get_gpio()` — 定义  `L43`
- `Cgpio::set_to_gpio()` — 定义  `L49`
- `Cgpio::get_gpi()` — 定义  `L55`
- `Cgpio::set_to_gpi()` — 定义  `L61`
- `Cgpio::get_gpo()` — 定义  `L67`
- `Cgpio::set_to_gpo()` — 定义  `L73`
- `Cgpio::get_level()` — 定义  `L79`
- `Cgpio::set_level()` — 定义  `L85`
- `Cgpio::get_invert()` — 定义  `L91`
- `Cgpio::set_invert()` — 定义  `L97`
- `Cgpio::get_gpi_interrupt()` — 定义  `L103`
- `Cgpio::set_gpi_interrupt()` — 定义  `L109`
- `Cgpio::get_gpi_interrupt_mode()` — 定义  `L115`
- `Cgpio::set_gpi_interrupt_mode()` — 定义  `L121`
- `Cgpio::get_gpio_pin_power()` — 定义  `L127`
- `Cgpio::set_gpio_pin_power()` — 定义  `L133`
- `Cgpio::get_gpio_pin_reset()` — 定义  `L139`
- `Cgpio::set_gpio_pin_reset()` — 定义  `L145`
- `main()` — 定义  `L157`

> 完整签名见 JSON。

## hardware/gpio.h (41 行)

### 宏 #define (1)
- `GPIO_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_gpio::Cgpio  `L7`  `class`
- 继承: `Object`
- 方法 (25):
  - `Cgpio()` （声明） `L9`
  - `~Cgpio()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `virtual int get_native(void * gpio)` （声明） `L13`
  - `virtual int set_to_native(void* gpio)` （声明） `L14`
  - `virtual int set_gpio_owner(void* gpio)` （声明） `L15`
  - `virtual int get_gpio_owner(void* gpio)` （声明） `L16`
  - `virtual int get_gpio(void* gpio)` （声明） `L17`
  - `virtual int set_to_gpio(void* gpio)` （声明） `L18`
  - `virtual int get_gpi(void* gpio)` （声明） `L19`
  - `virtual int set_to_gpi(void* gpio)` （声明） `L20`
  - `virtual int get_gpo(void* gpio)` （声明） `L21`
  - `virtual int set_to_gpo(void* gpio)` （声明） `L22`
  - `virtual int get_level(void* gpio)` （声明） `L23`
  - `virtual int set_level(void* gpio)` （声明） `L24`
  - `virtual int get_invert(void* gpio)` （声明） `L25`
  - `virtual int set_invert(void* gpio)` （声明） `L26`
  - `virtual int get_gpi_interrupt(void* gpio)` （声明） `L27`
  - `virtual int set_gpi_interrupt(void* gpio)` （声明） `L28`
  - `virtual int get_gpi_interrupt_mode(void* gpio)` （声明） `L29`
  - `virtual int set_gpi_interrupt_mode(void* gpio)` （声明） `L30`
  - `virtual int get_gpio_pin_power(void* gpio)` （声明） `L31`
  - `virtual int set_gpio_pin_power(void* gpio)` （声明） `L32`
  - `virtual int get_gpio_pin_reset(void* gpio)` （声明） `L33`
  - `virtual int set_gpio_pin_reset(void* gpio)` （声明） `L34`

## hardware/hardware.cpp (31 行)

### 宏 #define (1)
- `HARDWARE_TEST` = 0  `L20`

### 函数 (4)
- `Chardware::my_init()` — 定义  `L2`
- `Chardware::Chardware()` — 定义  `L9`
- `Chardware::Chardware()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Chardware::my_init(void *p)`、`Chardware::Chardware()`、`Chardware::~Chardware()`、`int main(int argc, char *argv[])`

## hardware/hardware.h (19 行)

### 宏 #define (1)
- `HARDWARE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_hardware::Chardware  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Chardware()` （声明） `L9`
  - `~Chardware()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/i2c.cpp (31 行)

### 宏 #define (1)
- `I2C_TEST` = 0  `L20`

### 函数 (4)
- `Ci2c::my_init()` — 定义  `L2`
- `Ci2c::Ci2c()` — 定义  `L9`
- `Ci2c::Ci2c()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ci2c::my_init(void *p)`、`Ci2c::Ci2c()`、`Ci2c::~Ci2c()`、`int main(int argc, char *argv[])`

## hardware/i2c.h (19 行)

### 宏 #define (1)
- `I2C_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_i2c::Ci2c  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Ci2c()` （声明） `L9`
  - `~Ci2c()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/io.cpp (219 行)

### 宏 #define (1)
- `IO_TEST` = 0  `L208`

### 函数 (26)
- `Cio::my_init()` — 定义  `L3`
- `Cio::Cio()` — 定义  `L10`
- `Cio::Cio()` — 定义  `L18`
- `Cio::read()` — 定义  `L25`
- `Cio::read()` — 定义  `L33`
- `Cio::read()` — 定义  `L44`
- `Cio::read()` — 定义  `L55`
- `Cio::write()` — 定义  `L67`
- `Cio::write()` — 定义  `L75`
- `Cio::write()` — 定义  `L85`
- `Cio::write()` — 定义  `L95`
- `Cio::read()` — 定义  `L107`
- `Cio::write()` — 定义  `L116`
- `CioHwRw::CioHwRw()` — 定义  `L125`
- `CioHwRw::CioHwRw()` — 定义  `L130`
- `CioHwRw::my_init()` — 定义  `L135`
- `CioHwRw::delay()` — 定义  `L142`
- `CioHwRw::byte_read()` — 定义  `L151`
- `CioHwRw::word_read()` — 定义  `L159`
- `CioHwRw::dword_read()` — 定义  `L166`
- `CioHwRw::qword_read()` — 定义  `L173`
- `CioHwRw::byte_write()` — 定义  `L180`
- `CioHwRw::word_write()` — 定义  `L187`
- `CioHwRw::dword_write()` — 定义  `L194`
- `CioHwRw::qword_write()` — 定义  `L201`
- `main()` — 定义  `L213`

> 完整签名见 JSON。

## hardware/io.h (53 行)

### 宏 #define (1)
- `IO_H`（无值，通常为头文件守卫）  `L2`

### 类 (2)
#### n_io::Cio  `L12`  `class`
- 继承: `Object`
- 方法 (13):
  - `Cio()` （声明） `L14`
  - `~Cio()` （声明） `L16`
  - `int my_init(void *p=nullptr)` （声明） `L17`
  - `static int read( unsigned short port,unsigned char * data)` （声明） `L18`
  - `static int read( unsigned short port,unsigned short * data)` （声明） `L20`
  - `static int read( unsigned short port,unsigned int * data)` （声明） `L21`
  - `static int read( unsigned short port,unsigned long long * data)` （声明） `L22`
  - `static int write(unsigned short port,unsigned char data)` （声明） `L23`
  - `static int write(unsigned short port,unsigned short data)` （声明） `L24`
  - `static int write(unsigned short port,unsigned int data)` （声明） `L25`
  - `static int write(unsigned short port,unsigned long long data)` （声明） `L26`
  - `static int read(unsigned short index_port, unsigned char index, unsigned short data_port,…` （声明） `L27`
  - `static int write(unsigned short index_port, unsigned char index, unsigned short data_port…` （声明） `L28`

#### n_io::CioHwRw  `L31`  `class`
- 继承: `Chardware_rw, Cio`
- 方法 (12):
  - `CioHwRw()` （声明） `L33`
  - `~CioHwRw()` （声明） `L35`
  - `int my_init(void* p=nullptr)` （声明） `L36`
  - `void delay(int count)` （声明） `L37`
  - `int byte_read(hardware_register* hw_reg)` （声明） `L39`
  - `int word_read(hardware_register* hw_reg)` （声明） `L40`
  - `int dword_read(hardware_register* hw_reg)` （声明） `L41`
  - `int qword_read(hardware_register* hw_reg)` （声明） `L42`
  - `int byte_write(hardware_register* hw_reg)` （声明） `L43`
  - `int word_write(hardware_register* hw_reg)` （声明） `L44`
  - `int dword_write(hardware_register* hw_reg)` （声明） `L45`
  - `int qword_write(hardware_register* hw_reg)` （声明） `L46`

## hardware/memory.cpp (31 行)

### 宏 #define (1)
- `MEMORY_TEST` = 0  `L20`

### 函数 (4)
- `Cmemory::my_init()` — 定义  `L2`
- `Cmemory::Cmemory()` — 定义  `L9`
- `Cmemory::Cmemory()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cmemory::my_init(void *p)`、`Cmemory::Cmemory()`、`Cmemory::~Cmemory()`、`int main(int argc, char *argv[])`

## hardware/memory.h (19 行)

### 宏 #define (1)
- `MEMORY_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_memory::Cmemory  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cmemory()` （声明） `L9`
  - `~Cmemory()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/network.cpp (31 行)

### 宏 #define (1)
- `NETWORK_TEST` = 0  `L20`

### 函数 (4)
- `Cnetwork::my_init()` — 定义  `L2`
- `Cnetwork::Cnetwork()` — 定义  `L9`
- `Cnetwork::Cnetwork()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cnetwork::my_init(void *p)`、`Cnetwork::Cnetwork()`、`Cnetwork::~Cnetwork()`、`int main(int argc, char *argv[])`

## hardware/network.h (19 行)

### 宏 #define (1)
- `NETWORK_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_network::Cnetwork  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cnetwork()` （声明） `L9`
  - `~Cnetwork()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/pcie.cpp (31 行)

### 宏 #define (1)
- `PCIE_TEST` = 0  `L20`

### 函数 (4)
- `Cpcie::my_init()` — 定义  `L2`
- `Cpcie::Cpcie()` — 定义  `L9`
- `Cpcie::Cpcie()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cpcie::my_init(void *p)`、`Cpcie::Cpcie()`、`Cpcie::~Cpcie()`、`int main(int argc, char *argv[])`

## hardware/pcie.h (19 行)

### 宏 #define (1)
- `PCIE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_pcie::Cpcie  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cpcie()` （声明） `L9`
  - `~Cpcie()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/pcie_class_code.cpp (260 行)

### 宏 #define (2)
- `CLASS_CODE_TABLE_COUNT` = (sizeof(class_code_tab)/sizeof(Cclass_code))  `L201`
- `PCIE_CLASS_CODE_TEST` = 0  `L245`

### 函数 (7)
- `Cclass_code::is_me()` — 定义  `L203`
- `Cpcie_class_code::my_init()` — 定义  `L209`
- `Cpcie_class_code::Cpcie_class_code()` — 定义  `L216`
- `Cpcie_class_code::Cpcie_class_code()` — 定义  `L221`
- `Cpcie_class_code::meaning()` — 定义  `L226`
- `Cpcie_class_code::meaning()` — 定义  `L239`
- `main()` — 定义  `L250`

> 完整签名见 JSON。

### 全局变量 (1)
- `Cclass_code class_code_tab`  `L4`

## hardware/pcie_class_code.h (34 行)

### 宏 #define (1)
- `PCIE_CLASS_CODE_H`（无值，通常为头文件守卫）  `L2`

### 类 (2)
#### n_pcie_class_code::Cclass_code  `L7`  `class`
- 成员变量 (4): `char base_class`、`char sub_class`、`char programming_interface`、`char* meaning`
- 方法 (1):
  - `bool is_me(unsigned char base, unsigned char sub, unsigned char programming_interface)` （声明） `L14`

#### n_pcie_class_code::Cpcie_class_code  `L18`  `class`
- 继承: `Object`
- 方法 (6):
  - `Cpcie_class_code()` （声明） `L20`
  - `~Cpcie_class_code()` （声明） `L22`
  - `int my_init(void *p=nullptr)` （声明） `L23`
  - `size_t my_size()` （定义） `L24`
  - `char* meaning(Cclass_code * tab,int tab_count, unsigned char base, unsigned char sub, uns…` （声明） `L25`
  - `char* meaning(unsigned char base, unsigned char sub, unsigned char programming_interface)` （声明） `L27`

## hardware/pin.cpp (31 行)

### 宏 #define (1)
- `PIN_TEST` = 0  `L20`

### 函数 (4)
- `Cpin::my_init()` — 定义  `L2`
- `Cpin::Cpin()` — 定义  `L9`
- `Cpin::Cpin()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cpin::my_init(void *p)`、`Cpin::Cpin()`、`Cpin::~Cpin()`、`int main(int argc, char *argv[])`

## hardware/pin.h (19 行)

### 宏 #define (1)
- `PIN_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_pin::Cpin  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cpin()` （声明） `L9`
  - `~Cpin()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/power_tree.cpp (32 行)

### 宏 #define (1)
- `POWER_TREE_TEST` = 0  `L20`

### 函数 (4)
- `Cpower_tree::my_init()` — 定义  `L2`
- `Cpower_tree::Cpower_tree()` — 定义  `L9`
- `Cpower_tree::Cpower_tree()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cpower_tree::my_init(void *p)`、`Cpower_tree::Cpower_tree()`、`Cpower_tree::~Cpower_tree()`、`int main(int argc, char *argv[])`

## hardware/power_tree.h (20 行)

### 宏 #define (1)
- `POWER_TREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_power_tree::Cpower_tree  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cpower_tree()` （声明） `L9`
  - `~Cpower_tree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## hardware/protocol.cpp (31 行)

### 宏 #define (1)
- `PROTOCOL_TEST` = 0  `L20`

### 函数 (4)
- `Cprotocol::my_init()` — 定义  `L2`
- `Cprotocol::Cprotocol()` — 定义  `L9`
- `Cprotocol::Cprotocol()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cprotocol::my_init(void *p)`、`Cprotocol::Cprotocol()`、`Cprotocol::~Cprotocol()`、`int main(int argc, char *argv[])`

## hardware/protocol.h (19 行)

### 宏 #define (1)
- `PROTOCOL_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_protocol::Cprotocol  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cprotocol()` （声明） `L9`
  - `~Cprotocol()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/register_hw.cpp (323 行)

### 宏 #define (3)
- `REGISTER_HW_TEST` = 0  `L301`
- `REG_BASE_ADDRESS` = 0x500  `L308`
- `IO_REG_TAB_COUNT` = (sizeof(io_register_tab)/sizeof(hardware_register))  `L314`

### 函数 (29)
- `Cregister_hw::my_init()` — 定义  `L2`
- `Cregister_hw::Cregister_hw()` — 定义  `L9`
- `Cregister_hw::Cregister_hw()` — 定义  `L15`
- `Cregister_hw::Cregister_hw()` — 定义  `L21`
- `Chardware_rw::Chardware_rw()` — 定义  `L26`
- `Chardware_rw::isMe()` — 定义  `L31`
- `Chardware_rw::set()` — 定义  `L36`
- `Chardware_rw::delay()` — 定义  `L42`
- `Chardware_rw::byte_read()` — 定义  `L50`
- `Chardware_rw::word_read()` — 定义  `L61`
- `Chardware_rw::dword_read()` — 定义  `L86`
- `Chardware_rw::qword_read()` — 定义  `L92`
- `Chardware_rw::byte_write()` — 定义  `L98`
- `Chardware_rw::word_write()` — 定义  `L104`
- `Chardware_rw::dword_write()` — 定义  `L110`
- `Chardware_rw::qword_write()` — 定义  `L116`
- `Cregister_hw::read()` — 定义  `L123`
- `Cregister_hw::write()` — 定义  `L135`
- `Cregister_hw::read_write()` — 定义  `L147`
- `Cregister_hw::write_read()` — 定义  `L155`
- `Cregister_hw::set()` — 定义  `L162`
- `Cregister_hw::set()` — 定义  `L168`
- `Cregister_hw::set()` — 定义  `L177`
- `Cregister_hw::reset()` — 定义  `L202`
- `Cregister_hw::execute()` — 定义  `L209`
- `Cregister_hw::execute()` — 定义  `L234`
- `Cregister_hw::execute()` — 定义  `L277`
- `Cregister_hw::time_action()` — 定义  `L290`
- `main()` — 定义  `L316`

> 完整签名见 JSON。

### 全局变量 (1)
- `hardware_register io_register_tab`  `L309`

## hardware/register_hw.h (141 行)

### 宏 #define (14)
- `REGISTER_HW_H`（无值，通常为头文件守卫）  `L2`
- `AND_DATA_NONE` = -1  `L6`
- `OR_DATA_NONE` = 0  `L7`
- `READ_DATA_INIT` = 0  `L8`
- `WRITE_DATA_INIT` = 0  `L9`
- `READ_BACK_NONE` = 0  `L10`
- `DELAY_NONE` = 0  `L11`
- `INPUT_NULL` = nullptr  `L12`
- `OUTPUT_NULL` = nullptr  `L13`
- `FUNC_NULL` = nullptr  `L14`
- `FUNC_RET_INIT` = -1  `L15`
- `HW_FUNC_DISABLE_INIT` = 0  `L16`
- `HW_REG_RET_INIT` = -1  `L17`
- `HW_REG_BUF_LEN` = (4*1024)  `L19`

### 枚举 enum class hw_reg_addr_type   `L27`
- none=0、io、mmio、memory、cpu_msr、cpu、pci、acpi、hdd、audio、ec、bmc、sio、cpld、fpga、me、network、gpu、i2c、usb、serial、gpio、can、cmos

### 枚举 enum class hw_reg_access_mode   `L55`
- byte、word、dword、qword

### typedef / using (4)
- `typedef long long hw_reg_addr`  `L21`
- `typedef long long hw_reg_data`  `L22`
- `typedef int (*hw_reg_func)(void* input, void* output)`  `L23`
- `typedef struct hardware_register;`  `L83`

### 类 (3)
#### n_register_hw::hardware_register_struct (typedef 别名 `hardware_register`)  `L64`  `struct`
- 成员变量 (16): `hw_reg_addr_type type`、`hw_reg_access_mode mode`、`hw_reg_addr address`、`hw_reg_data and_data`、`hw_reg_data or_data`、`hw_reg_data read_data`、`hw_reg_data write_data`、`int read_back`、`int delay`、`void * input`、`void * output`、`hw_reg_func function`、`int func_ret`、`int ret`、`int func_disable`、`void * timeline`

#### n_register_hw::Chardware_rw  `L86`  `class`
- 成员变量 (1): `hw_reg_addr_type hw_addr_type`
- 方法 (12):
  - `Chardware_rw()` （声明） `L90`
  - `bool isMe(hw_reg_addr_type type)` （声明） `L92`
  - `int set(hw_reg_addr_type type)` （声明） `L93`
  - `virtual void delay(int count)` （声明） `L94`
  - `virtual int byte_read(hardware_register* hw_reg)` （声明） `L96`
  - `virtual int word_read(hardware_register* hw_reg)` （声明） `L97`
  - `virtual int dword_read(hardware_register* hw_reg)` （声明） `L98`
  - `virtual int qword_read(hardware_register* hw_reg)` （声明） `L99`
  - `virtual int byte_write(hardware_register* hw_reg)` （声明） `L100`
  - `virtual int word_write(hardware_register* hw_reg)` （声明） `L101`
  - `virtual int dword_write(hardware_register* hw_reg)` （声明） `L102`
  - `virtual int qword_write(hardware_register* hw_reg)` （声明） `L103`

#### n_register_hw::Cregister_hw  `L106`  `class`
- 继承: `Object`
- 成员变量 (2): `Chardware_rw * hw_rw`、`char hw_reg_buf`
- 方法 (16):
  - `Cregister_hw()` （声明） `L111`
  - `Cregister_hw(Chardware_rw* hw_rw)` （声明） `L113`
  - `~Cregister_hw()` （声明） `L114`
  - `int my_init(void *p=nullptr)` （声明） `L115`
  - `int execute(hardware_register* hw_reg)` （声明） `L118`
  - `int execute(hardware_register* hw_reg, int count)` （声明） `L119`
  - `int execute(hw_reg_func function, void * input, void * output)` （声明） `L120`
  - `int read(hardware_register* hw_reg)` （声明） `L122`
  - `int write(hardware_register* hw_reg)` （声明） `L123`
  - `int read_write(hardware_register* hw_reg)` （声明） `L124`
  - `int write_read(hardware_register* hw_reg)` （声明） `L125`
  - `int set(Chardware_rw* hw_rw)` （声明） `L127`
  - `int set(hardware_register * hw_reg, hw_reg_func function, void* input, void* output,int d…` （声明） `L128`
  - `int set(hardware_register * hw_reg_tab, int count_tab, hardware_register* hw_reg,bool cle…` （声明） `L129`
  - `int reset(hardware_register* hw_reg, hw_reg_func function=nullptr, void* input=nullptr, v…` （声明） `L131`
  - `virtual int time_action(void* timeline)` （声明） `L133`

## hardware/reset.cpp (32 行)

### 宏 #define (1)
- `RESET_TEST` = 0  `L20`

### 函数 (4)
- `Creset::my_init()` — 定义  `L2`
- `Creset::Creset()` — 定义  `L9`
- `Creset::Creset()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Creset::my_init(void *p)`、`Creset::Creset()`、`Creset::~Creset()`、`int main(int argc, char *argv[])`

## hardware/reset.h (20 行)

### 宏 #define (1)
- `RESET_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_reset::Creset  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Creset()` （声明） `L9`
  - `~Creset()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## hardware/reset_tree.cpp (32 行)

### 宏 #define (1)
- `RESET_TREE_TEST` = 0  `L20`

### 函数 (4)
- `Creset_tree::my_init()` — 定义  `L2`
- `Creset_tree::Creset_tree()` — 定义  `L9`
- `Creset_tree::Creset_tree()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Creset_tree::my_init(void *p)`、`Creset_tree::Creset_tree()`、`Creset_tree::~Creset_tree()`、`int main(int argc, char *argv[])`

## hardware/reset_tree.h (20 行)

### 宏 #define (1)
- `RESET_TREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_reset_tree::Creset_tree  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Creset_tree()` （声明） `L9`
  - `~Creset_tree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## hardware/usb.cpp (31 行)

### 宏 #define (1)
- `USB_TEST` = 0  `L20`

### 函数 (4)
- `Cusb::my_init()` — 定义  `L2`
- `Cusb::Cusb()` — 定义  `L9`
- `Cusb::Cusb()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cusb::my_init(void *p)`、`Cusb::Cusb()`、`Cusb::~Cusb()`、`int main(int argc, char *argv[])`

## hardware/usb.h (19 行)

### 宏 #define (1)
- `USB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_usb::Cusb  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Cusb()` （声明） `L9`
  - `~Cusb()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## hardware/voltage.cpp (32 行)

### 宏 #define (1)
- `VOLTAGE_TEST` = 0  `L20`

### 函数 (4)
- `Cvoltage::my_init()` — 定义  `L2`
- `Cvoltage::Cvoltage()` — 定义  `L9`
- `Cvoltage::Cvoltage()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cvoltage::my_init(void *p)`、`Cvoltage::Cvoltage()`、`Cvoltage::~Cvoltage()`、`int main(int argc, char *argv[])`

## hardware/voltage.h (20 行)

### 宏 #define (1)
- `VOLTAGE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_voltage::Cvoltage  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cvoltage()` （声明） `L9`
  - `~Cvoltage()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## hardware/voltage_tree.cpp (32 行)

### 宏 #define (1)
- `VOLTAGE_TREE_TEST` = 0  `L20`

### 函数 (4)
- `Cvoltage_tree::my_init()` — 定义  `L2`
- `Cvoltage_tree::Cvoltage_tree()` — 定义  `L9`
- `Cvoltage_tree::Cvoltage_tree()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cvoltage_tree::my_init(void *p)`、`Cvoltage_tree::Cvoltage_tree()`、`Cvoltage_tree::~Cvoltage_tree()`、`int main(int argc, char *argv[])`

## hardware/voltage_tree.h (20 行)

### 宏 #define (1)
- `VOLTAGE_TREE_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_voltage_tree::Cvoltage_tree  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cvoltage_tree()` （声明） `L9`
  - `~Cvoltage_tree()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
