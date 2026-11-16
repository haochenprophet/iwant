# src/uuid

> 统计: 3 文件 / 122 行 / 2 类 / 9 方法 / 7 自由函数 / 1 成员变量 / 0 全局变量 / 5 宏 / 1 typedef / 0 枚举

## uuid/uuid.cpp (59 行)

### 函数 (7)
- `Cuuid::Cuuid()` — 定义  `L4`
- `Cuuid::Cuuid()` — 定义  `L10`
- `Ouuid::Ouuid()` — 定义  `L14`
- `Ouuid::Ouuid()` — 定义  `L19`
- `Ouuid::create()` — 定义  `L24`
- `Ouuid::create_uuid()` — 定义  `L29`
- `main()` — 定义  `L50`

> 完整签名见 JSON。

## uuid/uuid.h (47 行)

### 宏 #define (4)
- `UUID_H`（无值，通常为头文件守卫）  `L2`
- `GUID_LEN` = 64  `L16`
- `UUID_FORMAT` = "%08X%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X"  `L17`
- `UUID_FORMAT_2` = "%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X"  `L18`

### typedef / using (1)
- `typedef unionUUID_U`  `L20`

### 类 (1)
#### n_uuid::Ouuid  `L31`  `class`
- 成员变量 (1): `std::string uuid`
- 方法 (7):
  - `Ouuid()` （声明） `L35`
  - `~Ouuid()` （声明） `L37`
  - `int create_uuid(std::string & uuid_s, char * format = (char *)UUID_FORMAT)` （声明） `L38`
  - `int create(char * format=(char *)UUID_FORMAT)` （声明） `L39`
  - `bool operator==(Ouuid& uuid)` （定义） `L40`
  - `bool operator==(Ouuid *uuid)` （定义） `L41`
  - `bool operator==(std::string uuid)` （定义） `L42`

## uuid/uuid_class.h (16 行)

### 宏 #define (1)
- `UUID_CLASS_H`（无值，通常为头文件守卫）  `L2`

### 类 (1)
#### n_uuid::Cuuid  `L7`  `class`
- 继承: `Object`
- 方法 (2):
  - `Cuuid()` （声明） `L9`
  - `~Cuuid()` （声明） `L11`
