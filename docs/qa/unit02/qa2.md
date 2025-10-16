# C++ 数据类型

---

<CCollapseGroup>

<CCollapse title="什么是数据类型？">

**数据类型** 定义了数据的性质、取值范围、存储方式和可执行操作。

**类比**：就像不同形状的容器（杯子、瓶子、桶），每种容器适合存放不同的内容，有不同的容量和使用方式。

</CCollapse>

<CCollapse title="C++基础数据类型有哪些？">

C++基础数据类型是语言内置的、用于表示基本值的最小数据单元。

包括 **`整型`**、**`浮点型`**、**`字符型`**、**`布尔型`**、**`空类型（void）`**。

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="什么是整型？">

**整型** 是C++中用于存储整数的数据类型，特点是：
- 只能存储整数（无小数部分）
- 运算速度快于浮点型

**4种基础整型对比**：

| 类型 | 存储大小 | 取值范围 | 示例 |
|------|---------|--------------|------|
| `short` | 2字节 | -32,768 ~ 32,767 | `short days = 30;` |
| `int` | 4字节 | -2.1亿 ~ 2.1亿 | `int price = 1999;` |
| `long` | 4/8字节 | -21亿 ~ 21亿 | `long distance = 150000;` |
| `long long` | 8字节 | -9.2×10¹⁸ ~ 9.2×10¹⁸ | `long long stars = 1e18;` |

*实际大小与编译器和平台相关*

</CCollapse>


<CCollapse title="什么是浮点型？">

**浮点型**是C++中用于存储小数的数据类型，特点是：
- 可以存储带小数点的数值
- 采用科学计数法表示

**2种浮点型对比**：

| 类型 | 存储大小 | 精度 | 示例 |
|------|---------|----------|------|
| `float` | 4字节 | 6-7位有效数字 | `float pi = 3.14f;` |
| `double` | 8字节 | 15-16位有效数字 | `double price = 9.99;` |

</CCollapse>

<CCollapse title="什么是字符型？">

**字符型**是C++中用于存储单个字符的数据类型，特点是：
- 存储单个ASCII/Unicode字符
- 实际存储的是字符对应的编码值
- 用单引号`''`表示字符字面量

**主要字符类型**：

| 类型 | 存储大小 | 存储范围 | 示例 |
|------|---------|----------|------|
| `char` | 1字节 | -128~127 或 0~255 | `char grade = 'A';` |
| `wchar_t` | 2/4字节 | 更大字符集 | `wchar_t ch = L'中';` |
| `char16_t`(C++11) | 2字节 | Unicode字符 | `char16_t c = u'字';` |
| `char32_t`(C++11) | 4字节 | Unicode字符 | `char32_t c = U'🍎';` |

</CCollapse>

<CCollapse title="什么是布尔类型？">

布尔类型是编程中用来表示 **`真`** 或 **`假`** 的数据类型。

**关键特性**
- 只有两个可能值：`true`（真）或`false`（假）
- 常用于条件判断和逻辑运算
- 存储大小通常为1字节
- 任何非零值转换为`true`，零值转换为`false`
- 输出时`true`显示为 `1`，`false`显示为 `0`

</CCollapse>


<CCollapse title="什么是空类型？">

**空类型**是C++中的特殊数据类型，特点是：
- 用`void`关键字表示
- 不存储任何实际数据
- 不能声明`void`类型变量，只能在特定场景使用


</CCollapse>


<CCollapse title="如何确定数据类型的大小？">

使用`sizeof`运算符获取类型或变量的大小：

```cpp
cout << sizeof(bool) << endl;
cout << sizeof(int) << endl;
cout << sizeof(double) << endl;
```

注意：大小可能因编译器和平台而异

</CCollapse>

<CCollapse title="什么是类型转换？">

类型转换是将一种数据类型转换为另一种类型：

- **隐式转换**（自动）：
   ```cpp
   int i = 3.14;  // 3.14被截断为3
   ```

- **显式转换**（强制）：
   ```cpp
   double d = (double)42 / 5;
   ```

</CCollapse>


</CCollapseGroup>