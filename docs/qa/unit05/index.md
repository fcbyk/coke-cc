# 字符与字符串

---

<CCollapseGroup>

<CCollapse title="什么是字符？">

**字符** 是编程中最基本的数据类型之一，用于表示单个文本符号。

- `char`类型通常占用1字节内存
- 字符常量用单引号表示：`'A'`, `'1'`, `'#'`
- 字符本质上是存储其ASCII码值

```cpp
char letter = 'B';
char digit = '7';
char symbol = '@';
```
</CCollapse>

<CCollapse title="什么是ASCII码？">

**`ASCII码`** 就是一套给字符编号的规则，用数字表示字母、符号这些。比如大写 **`A`** 是 **`65`**，小写 **`a`** 是 **`97`**。电脑里存文字其实存的就是这些数字。

</CCollapse>

<CCollapse title="ASCII码有哪些重要的规律？">

- 前32个是 **`控制字符`**（比如换行、回车）
- 48-57是 **`数字0-9`**，65-90是 **`大写字母`**
- 97-122是 **`小写字母`**
- 数字和字母的编码都是连续排列的

</CCollapse>

<CCollapse title="什么是转义字符？">

以反斜杠 **`\`** 开头的字符称为 **`转义字符`**

通过转义，可以让

- **`普通字符`** => **`特殊字符`**，比如 **`\n`** 表示换行符
- **`特殊字符`** => **`普通字符`**，比如 **`\"`** 表示普通的双引号

| 转义字符 | 含义 | ASCII码 |
|---------|------|--------|
| **`\n`**    | 换行 | 10     |
| **`\t`**    | 制表符 | 9      |
| **`\\`**    | 反斜杠 | 92     |
| **`\'`**    | 单引号 | 39     |
| **`\"`**    | 双引号 | 34     |
| **`\0`**    | 空字符 | 0      |

```cpp
cout << "Hello\nWorld";  // 输出两行
cout << "Tab\tTest";     // 输出Tab间隔
cout << "Path: C:\\";    // 输出反斜杠
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="介绍一下String类型。">

**`string类型`** 就是用来存文本的，比如一句话、一个名字。

本质是一个 **`char类型`** 的 **`数组`**

</CCollapse>

</CCollapseGroup>