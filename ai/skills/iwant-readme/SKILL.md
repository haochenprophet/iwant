---
name: iwant-readme
description: 按 iwant 的 README 工作前加载。给出八条编码铁律的可执行版本、package/class 命名布局、构建的正确姿势，以及 README 与现实不符的五处偏差。
---

# iwant：按 README 写代码

## 何时用我

- 要在这个仓库里新增/修改类（尤其是造新包、新动作）
- 要按项目自己的风格写构造、回调、返回码
- 要构建/运行，或在 README 指令失败时找原因

## 一句话定位

README 定位：I want Library —— 一切皆 Object、对象自带时空、程序能造自己的代码。
所以「写代码」的第一性问题永远是：这个类是不是 Object？命名和文件是否符合约定？动作是否进了动作表？

## 五条铁律（违反即返工）

1. 类必须继承 Object（或经 Osetting），构造函数必须设 name 与 alias。
2. 文件主类 = 文件名 + C：car_door.cpp -> class Ccar_door。
3. 命名三前缀：O + 名 = Object 体系数据结构；n_ + 包 = 命名空间；U/u = union。
4. 返回码语义：小于 0 无事可做 / 等于 0 成功 / 大于 0 失败；库代码里不要 exit()。
5. 回调统一签名：typedef int(*MyFunc)(void *p)；类内回调叫 runme(void*)。
## 八条 Coding rule 的落地写法

### R1 返回码
```cpp
int Cfoo::do_something(void *p)
{
	if (!p) return -1;   // 无事可做 / 参数缺失
	return 0;            // 成功
}
```

### R2 回调签名
```cpp
typedef int (*MyFunc)(void *p);        // 全局已是 typedef
this->add_ex_func("my_func", my_func);// 登记
this->execute("my_func", p);          // 按名字执行
```

### R3 继承 + name/alias（README 示例要修正一处）
```cpp
class Ccar_door : public Object {
public:
	Ccar_door() { this->my_init(); }
	int my_init(void *p = nullptr)
	{
		this->name  = "Ccar_door";  // C + 文件名
		this->alias = "car_door";   // 去 C 前缀的 tag（不要写 alias = name）
		return 0;
	}
};
```
id 由基类 Object 构造自动分配（id = ++object_id），name 会被追加 id 后缀，子类 my_init() 再覆盖。
### R4 文件布局（一个文件一个主类）
```
src/<pkg>/<file>.h      -> namespace n_<pkg> { class C<file> : public Object {...}; }
src/<pkg>/<file>.cpp    -> my_init / 业务方法 / 文件尾 #if <FILE>_TEST main
```

### R5 前缀
| 前缀 | 用途 | 例 |
| --- | --- | --- |
| O | Object 体系数据结构 | Osetting Otime Orange Ocoord |
| n_ | 命名空间 | n_car n_object |
| U/u | union | Udata |
| C | 具体类 | Ccar Ccode |
| g_ | 全局实例 | g_code g_class |

### R6 字符串抽离
- 模板 -> src/template/temp_def.h
- 语法 -> src/syntax/syntax_def.h
- 命令帮助 -> <pkg>_action.i 的 #define XXX_HELP
- 代码生成片段 -> src/code/code.h 的 G_CODE_*

不要在业务代码里散落字面量（现存 671 处 cout/printf 是反例）。

### R7 libc 函数加 _c 后缀
```cpp
class Cprintf : public Object {
public:
	static int printf_c(const char *format, ...);   // 静态成员，不是自由函数
};
```
cstdio 包内 46 处、全库 78 处已如此实现。

### R8 类内回调 runme
```cpp
class Ctree_func : public Object {
public:
	virtual int runme(void *node);   // 供其它类回调
};
```
## 包/命令对象的标准结构

```
src/<pkg>/
  <pkg>.h / .cpp              主类 C<pkg>
  <pkg>_<noun>.h / .cpp       子类（如 car_door）
  <pkg>_action.h              动作枚举（XxxAtcionClass + XxxAtcion）
  <pkg>_action.i              帮助宏 + Action <pkg>_action[] + COUNT
  Makefile                    MK_TAG=<pkg>
```

动作对象的六步协议（详见 ai/kb/15-cli-construction.md）：
deal_cmd -> 存 cmd -> 读 silent -> get_action -> set_action_parameter -> do_action。

## 构建（README 的写法要修正）

```bash
sudo apt-get install uuid-dev make g++ libmysqlclient-dev

cd src
make main=CODE            # 生成 code 工具
sh build.sh code          # 等价，产物移到仓库根

sh ../batch/build_control_class.sh
cd collect && make main=COLLECT_FILE
```

Windows：winIwant/winIwant.sln（VS2015+）或 winIwant/winIwant-vs2022.sln；libmysql.dll 必须与 exe 同目录。

## README 与现实的五处偏差（照抄会踩）

| # | README | 实际 |
| --- | --- | --- |
| 1 | cd src; make | 必须 make main=XXX |
| 2 | git clone --recursive | 无 .gitmodules，无效 |
| 3 | alias = this->name | alias = 去 C 前缀的 tag |
| 4 | winIwant.sln | winIwant/winIwant.sln |
| 5 | Ctimetree 描述宇宙演化 | 空壳类，无算法 |

## 自检清单（提交前逐条打勾）

- [ ] 类继承 Object，my_init() 同时设 name（C+文件名）与 alias（tag）
- [ ] 文件名 = 类名去 C；一个文件一个主类
- [ ] 命名空间 n_<pkg> + 文件尾 using namespace n_<pkg>;
- [ ] 返回码符合 小于0/0/大于0，未使用 exit()
- [ ] 新动作已进 <pkg>_action.i 且有 HELP 文案
- [ ] 字符串抽到宏/常量，没有硬编码长文本
- [ ] 文件尾保留 #if <FILE>_TEST 测试 main
- [ ] 新包已加入 src/Makefile 的 source_code

## 深入阅读

ai/kb/00-readme.md、05-modules.md、08-conventions.md、10-pitfalls.md、15-cli-construction.md。
