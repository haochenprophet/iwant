# src/tree

> 统计: 8 文件 / 318 行 / 5 类 / 26 方法 / 21 自由函数 / 7 成员变量 / 1 全局变量 / 8 宏 / 3 typedef / 0 枚举

## tree/tree.cpp (60 行)

### 宏 #define (1)
- `TREE_TEST` = 0  `L34`

### 函数 (5)
- `Ctree::my_init()` — 定义  `L2`
- `Ctree::Ctree()` — 定义  `L9`
- `Ctree::Ctree()` — 定义  `L14`
- `Ctree::traversal()` — 定义  `L19`
- `main()` — 定义  `L39`

> 完整签名见 JSON: `int Ctree::my_init(void *p)`、`Ctree::Ctree()`、`Ctree::~Ctree()`、`int Ctree::traversal(Ctree* tree, Ctree_func* tree_func)`、`int main(int argc, char *argv[])`

## tree/tree.h (33 行)

### 宏 #define (1)
- `TREE_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (1)
- `typedef std::list<tree_node *> tree_list`  `L10`

### 类 (1)
#### n_tree::Ctree  `L12`  `class`
- 继承: `Object`
- 成员变量 (1): `tree_list list`
- 方法 (7):
  - `Ctree()` （声明） `L16`
  - `~Ctree()` （声明） `L18`
  - `int my_init(void *p=nullptr)` （声明） `L19`
  - `size_t my_size()` （定义） `L20`
  - `int traversal(Ctree * tree,Ctree_func* tree_func = nullptr)` （声明） `L21`
  - `void add(tree_node* tree)` （定义） `L23`
  - `public: void operator += (tree_node* tree)` （定义） `L25`

## tree/tree_db.cpp (31 行)

### 宏 #define (1)
- `TREE_DB_TEST` = 0  `L20`

### 函数 (4)
- `Ctree_db::my_init()` — 定义  `L2`
- `Ctree_db::Ctree_db()` — 定义  `L9`
- `Ctree_db::Ctree_db()` — 定义  `L14`
- `main()` — 定义  `L25`

> 完整签名见 JSON: `int Ctree_db::my_init(void *p)`、`Ctree_db::Ctree_db()`、`Ctree_db::~Ctree_db()`、`int main(int argc, char *argv[])`

## tree/tree_db.h (19 行)

### 宏 #define (1)
- `TREE_DB_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tree_db::Ctree_db  `L7`  `class`
- 继承: `Object`
- 方法 (3):
  - `Ctree_db()` （声明） `L9`
  - `~Ctree_db()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`

## tree/tree_func.cpp (40 行)

### 宏 #define (1)
- `TREE_FUNC_TEST` = 0  `L28`

### 函数 (5)
- `Ctree_func::my_init()` — 定义  `L4`
- `Ctree_func::Ctree_func()` — 定义  `L11`
- `Ctree_func::Ctree_func()` — 定义  `L16`
- `Ctree_func::runme()` — 定义  `L21`
- `main()` — 定义  `L33`

> 完整签名见 JSON: `int Ctree_func::my_init(void *p)`、`Ctree_func::Ctree_func()`、`Ctree_func::~Ctree_func()`、`int Ctree_func::runme(void* node)`、`int main(int argc, char *argv[])`

## tree/tree_func.h (22 行)

### 宏 #define (1)
- `TREE_FUNC_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_tree_func::Ctree_func  `L7`  `class`
- 继承: `Object`
- 方法 (5):
  - `Ctree_func()` （声明） `L9`
  - `~Ctree_func()` （声明） `L11`
  - `int my_init(void *p=nullptr)` （声明） `L12`
  - `size_t my_size()` （定义） `L13`
  - `virtual int runme(void * node)` （声明） `L14`

## tree/tree_node.cpp (65 行)

### 宏 #define (1)
- `TREE_NODE_TEST` = 0  `L53`

### 函数 (7)
- `tree_node::tree_node()` — 定义  `L5`
- `tree_node::get_id()` — 定义  `L12`
- `tree_node::traversal()` — 定义  `L21`
- `Ctree_node::my_init()` — 定义  `L35`
- `Ctree_node::Ctree_node()` — 定义  `L42`
- `Ctree_node::Ctree_node()` — 定义  `L47`
- `main()` — 定义  `L58`

> 完整签名见 JSON。

### 全局变量 (1)
- `int total_node_id`  `L3`

## tree/tree_node.h (48 行)

### 宏 #define (1)
- `TREE_NODE_H`（无值，通常为头文件守卫）  `L2`

### typedef / using (2)
- `typedef std::list<void *> tree_sub_node`  `L9`
- `typedef Udata tree_data`  `L10`

### 类 (2)
#### n_tree_node::tree_node  `L12`  `class`
- 成员变量 (5): `int node_id`、`int type`、`int property`、`tree_data data`、`tree_sub_node sub_node`
- 方法 (7):
  - `tree_node()` （声明） `L20`
  - `public: size_t sub_node_count()` （定义） `L22`
  - `void add_sub_node(tree_node* node)` （定义） `L24`
  - `int get_id(bool display = true)` （声明） `L25`
  - `int traversal(tree_node * node , Ctree_func * tree_func =nullptr)` （声明） `L26`
  - `public: void operator += (tree_node * node)` （定义） `L28`
  - `void operator += (void * node)` （定义） `L30`

#### n_tree_node::Ctree_node  `L33`  `class`
- 继承: `Object`
- 成员变量 (1): `tree_node node`
- 方法 (4):
  - `Ctree_node()` （声明） `L37`
  - `~Ctree_node()` （声明） `L39`
  - `int my_init(void *p=nullptr)` （声明） `L40`
  - `size_t my_size()` （定义） `L41`
