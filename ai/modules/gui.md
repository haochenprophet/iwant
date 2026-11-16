# src/gui

> 统计: 4 文件 / 104 行 / 2 类 / 8 方法 / 8 自由函数 / 0 成员变量 / 0 全局变量 / 4 宏 / 0 typedef / 0 枚举

## gui/gui.cpp (32 行)

### 宏 #define (1)
- `GUI_TEST` = 0  `L20`

### 函数 (4)
- `Cgui::my_init()` — 定义  `L2`
- `Cgui::Cgui()` — 定义  `L9`
- `Cgui::Cgui()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cgui::my_init(void *p)`、`Cgui::Cgui()`、`Cgui::~Cgui()`、`int main(int argc, char *argv[])`

## gui/gui.h (20 行)

### 宏 #define (1)
- `GUI_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_gui::Cgui  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cgui()` （声明） `L9`
  - `~Cgui()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`

## gui/gui_qt.cpp (32 行)

### 宏 #define (1)
- `GUI_QT_TEST` = 0  `L20`

### 函数 (4)
- `Cgui_qt::my_init()` — 定义  `L2`
- `Cgui_qt::Cgui_qt()` — 定义  `L9`
- `Cgui_qt::Cgui_qt()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Cgui_qt::my_init(void *p)`、`Cgui_qt::Cgui_qt()`、`Cgui_qt::~Cgui_qt()`、`int main(int argc, char *argv[])`

## gui/gui_qt.h (20 行)

### 宏 #define (1)
- `GUI_QT_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_gui_qt::Cgui_qt  `L7`  `class`
- 继承: `Object`
- 方法 (4):
  - `Cgui_qt()` （声明） `L9`
  - `~Cgui_qt()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
