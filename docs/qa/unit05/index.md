# 字符与字符串

---

<CCollapseGroup>

<CCollapse title="什么是字符？">

> 1. 字符是表示单个字母、数字或符号的数据
> 2. C++中使用`char`类型存储字符
> 3. 字符用单引号括起来

**字符** 是编程中最基本的数据类型之一，用于表示单个文本符号。

关键点：
1. `char`类型通常占用1字节内存
2. 字符常量用单引号表示：`'A'`, `'1'`, `'#'`
3. 字符本质上是存储其ASCII码值

```cpp
char letter = 'B';
char digit = '7';
char symbol = '@';
```

<template #extra>
    <CBadge text="基础概念" variant="outline" color="#ff4d4f" />
</template>
</CCollapse>

<CCollapse title="什么是ASCII码？">

ASCII（美国信息交换标准代码）是字符编码标准：

- 使用7位二进制数（0-127）表示128个字符
- 包括：
  - 控制字符（0-31）
  - 可打印字符（32-126）
  - 扩展ASCII码（128-255）

```cpp
// 字符与ASCII码互转
char c = 'A';
int ascii = (int)c;  // 65

int code = 97;
char ch = (char)code;  // 'a'
```

常见ASCII码：
- 'A'-'Z'：65-90
- 'a'-'z'：97-122
- '0'-'9'：48-57
- 空格：32

<template #extra>
    <CBadge text="重要" variant="outline" color="#ff4d4f" />
</template>
</CCollapse>

<CCollapse title="什么是转义字符？">

转义字符以反斜杠`\`开头，表示特殊字符：

| 转义字符 | 含义 | ASCII码 |
|---------|------|--------|
| `\n`    | 换行 | 10     |
| `\t`    | 制表符 | 9      |
| `\\`    | 反斜杠 | 92     |
| `\'`    | 单引号 | 39     |
| `\"`    | 双引号 | 34     |
| `\0`    | 空字符 | 0      |

```cpp
cout << "Hello\nWorld";  // 输出两行
cout << "Tab\tTest";     // 输出Tab间隔
cout << "Path: C:\\";    // 输出反斜杠
```

<template #extra>
    <CBadge text="常用" variant="outline" color="#52c41aff" />
</template>
</CCollapse>

<CCollapse title="什么是字符串？">

> 1. 字符串是字符的序列
> 2. C++中有两种字符串表示方式
> 3. 字符串以空字符`\0`结尾

**字符串** 是由多个字符组成的文本数据。

两种表示方式：
1. C风格字符串：字符数组
   ```cpp
   char str[] = "Hello";
   ```
2. C++ `string`类：
   ```cpp
   #include <string>
   std::string s = "World";
   ```

关键区别：
- C风格字符串需要手动管理内存
- `string`类自动管理内存，提供丰富方法

</CCollapse>

</CCollapseGroup>