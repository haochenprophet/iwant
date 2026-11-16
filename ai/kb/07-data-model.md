# 07 数据模型与存储

## 唯一入库的表：`organization`

文件：`database/organization.sql`（67 行，MySQL 8.0 dump，`utf8`）。这是一张**自带树结构的通用节点表**——不是业务表，而是"万物归档表"。

| 字段 | 类型 | 含义 |
| --- | --- | --- |
| `idorganization` | int AI | 自增主键 |
| `uuid` | varchar(45) UNIQUE | 节点全局标识（与 `Object::my_uuid()` 对应） |
| `node` | varchar(45) | 节点名 / 子组织名 |
| `type` | varchar(45) | `root` / `leaf` |
| `parents` | varchar(45) | 父节点 uuid |
| `child` | varchar(45) | 子节点链接（`child[0]..child[n]`） |
| `firstchild` | varchar(45) | 首子 uuid（左孩子） |
| `nextsibling` | varchar(45) | 右兄弟 uuid |
| `name` | varchar(45) | 显示名 |
| `value_type` / `value_uuid` / `value_url` / `value` | varchar | **值可以是标量、其它节点引用，或 URL** |
| `result` | varchar(45) | 计算结果存放位 |
| `feedback` | varchar(45) | "预测 vs 真实结果"的反馈评价值 |
| `time` | datetime | 创建时间 |
| `status` | varchar(45) = 'normal' | 状态 |
| `priority` | int | 优先级 |
| `author` / `location` | varchar(45) | 谁/在哪创建 |
| `remark` | text | 关系描述 |
| `relationship` | varchar(45) | 关系类型 |

**读法**：`parents + firstchild + nextsibling` 是"左孩子右兄弟"表示法 → 同层链表 + 跨层父指针，一棵可任意挂载的组织/知识树。`result + feedback` 这对字段暴露了作者的野心：这张表不只存事实，还想存**预测与校验**（README 那句 "insight into the future"）。

## C++ 侧：三层

```
Object (内核，含 Ouuid 身份 + Osetting 字段)
   └── Csql            src/public/sql.h      // 抽象：SqlOperate + db_name/tab_name/tab_field/col_value/sql_buf
          └── Cmy_sql  src/my_sql/my_sql.h   // 实现：持有 MYSQL*/MYSQL_RES*/MYSQL_ROW
```

### `Csql`（抽象层，`src/public/sql.h`）

```cpp
enum class SqlOperate { nothing, select, update, insert, create, delete_, alter };
class Csql : public Object {
    SqlOperate sql_opetate;
    char *db_name, *tab_name, *tab_field, *col_value, *sql_buf, *sql;
    int sql_buf_len;
};
```

### `Cmy_sql`（实现层，`src/my_sql/`，650 行）

字段：`MYSQL mysql_i, *mysql; MYSQL_RES *result; MYSQL_FIELD *fields; MYSQL_ROW row; host/user/password/use_db; bool is_connect; string uuid_s;`

能力清单（据 `my_sql.h`）：

| 能力 | 接口 |
| --- | --- |
| 连接 | `connect()`、构造 `Cmy_sql(password, user="root", host="127.0.0.1", db, sql)` |
| 查询 | `query(char *sql)`、`store_result(mysql)` |
| 取结果 | `get(result, fields)`、`get(result, row, Object *o)`、`get(result, Object *o)` |
| 执行 | `execute(Object *o)`、`execute(char *sql, Object *o)`、`execute(string *sql, Object *o)` |
| 建库建表 | `create_db(name)`、`create_tab(db, tab)`、`drop_db`、`drop_tab` |
| 元信息 | `show_db()`、`show_tab(db)`、`show_col(db, tab)` |
| 存在性 | `is_exist(db, tab, col, value)` |
| UUID 维护 | `verify_id_cmd/first/second`、`update_uuid_cmd/first/second`、`add_uuid_cmd`（action 回调） |

**注意**：虽然 `mysql_connect/` 提供的是 Connector/C++（`mysql_devapi.h`/`mysql_xapi.h`），但 `Cmy_sql` 用的是 **libmysqlclient 的 C API**（`MYSQL`/`MYSQL_RES`/`MYSQL_ROW`）。Windows 下 `mysql.h` 由 `src/os/os.h` 引入；Linux 下靠 `-lmysqlclient`。

## UUID 机制

`src/uuid/uuid.h`：

```cpp
#define GUID_LEN 64
#define UUID_FORMAT   "%08X%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X"      // 无连字符
#define UUID_FORMAT_2 "%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X"  // 标准形式
```

- Linux：`<uuid/uuid.h>`（依赖 `uuid-dev`）
- Windows：`<objbase.h>` 的 `CoCreateGuid`
- 每个 `Object` 通过 `Ouuid` 继承 uuid，`my_uuid()` 取字符串；与 `organization.uuid` 对齐。

## SQL 关键字为什么是类

`src/sql/`（370 文件 / 185 类）每个文件一个关键字对象（`sql_SELECT`、`sql_JOIN`…），`src/keywords/` 同理存 C++/PHP/Python/Java 关键字。这是"**把语法本身变成可查询的数据**"的做法：查询/生成 SQL 时不必拼字符串常量，而是取对象。

## 与内存模型的对偶

| 内存（`Object`） | 数据库（`organization`） |
| --- | --- |
| `uuid` | `uuid` |
| `family`（`list<void*>`） | `firstchild/nextsibling` |
| `l_relation` | `parents`/`relationship` |
| `Otime start/at/end` | `time` |
| `status`/`priority`/`value` | 同名字段 |
| `count/execute_count` | `result`/`feedback` |

→ 设计意图：**对象树可以整棵持久化到这张表，也能从表里重建**。目前仓库里只有建表脚本，没有完整的加载/序列化实现（见 11-open-questions）。
