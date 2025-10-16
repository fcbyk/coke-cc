# C++ 变量

---

<CCollapseGroup>

<CCollapse title="什么是变量？">

> 1. 变量就是装数据的盒子
> 2. 变量名就是盒子标签
> 3. 不同的数据，用不同的盒子装

**变量** 是程序中用于存储数据的基本单元，每个变量都有一个名称（标识符）和特定的数据类型。变量在内存中占用一定的空间，用于存储和操作数据。

关键点：
1. 变量需要先声明后使用
2. 每个变量都有特定的数据类型
3. 变量名需要遵循标识符命名规则
4. 变量可以在声明时或声明后赋值

</CCollapse>

<CCollapse title="如何声明和初始化变量？">

- 声明语法：`数据类型 变量名`，比如 `string name`。
- 第一次赋值，称为变量的初始化。
- 可通过 `赋值运算符 =` 改变变量的值


```cpp
// 先声明后初始化
int age;
age = 25;

// 声明时直接初始化
double price = 99.99;

// 自动类型推导 (C++11)
auto count = 10;        // int类型
auto rate = 3.14;       // double类型
```

</CCollapse>

<CCollapse title="什么是变量的作用域？">

变量的作用域决定了其在程序中的可见范围：

1. **局部变量**：在函数或代码块内部声明
   ```cpp
   void function() {
       int localVar = 10;  // 局部变量
   }
   ```

2. **全局变量**：在所有函数外部声明
   ```cpp
   int globalVar = 100;    // 全局变量
   
   int main() {
       // 可以访问globalVar
   }
   ```

3. **块作用域**：在{}内部声明

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="什么是标识符？">

`标识符` 是程序中用来命名变量、函数、类等程序实体的名称。在C++中，标识符必须遵循以下命名规则：

- 只能由字母、数字、下划线构成
- 必须以字母或下划线开头，不能以数字开头
- 区分大小写（`myVar ≠ myvar`）
- 不能用C++关键字（`int`/`for`/`return`等）

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="什么是常量？">

**常量**是在程序运行期间其值不能被修改的命名实体，而**变量**的值可以改变。

| 特性 | 常量 | 变量 |
|------|------|------|
| **值可变性** | 不可变 | 可变 |
| **声明关键字** | `const` | 无特定关键字 |
| **安全性** | 更高（防止意外修改） | 需要更多检查 |


```cpp
// 变量 - 值可修改
int counter = 0;
counter = 1;  // 允许

// 常量 - 值不可修改
const int MAX_SIZE = 100;
// MAX_SIZE = 200;  // 编译错误

```

**最佳实践**：尽可能使用 `const` 声明不应被修改的值，提高代码安全性和可读性。

</CCollapse>

<CCollapse title="什么是字面量？">

**`字面量（Literal）`** 是直接出现在代码中的 **`常量值`**

字面量不需要标识符，其类型和值由书写形式决定。

常见字面量类型：

::: code-group

```cpp [整数]
42        // 十进制
052       // 八进制（前导0）
0x2A      // 十六进制
100'000   // C++14数字分隔符
```

```cpp [浮点数]
3.14
6.02e23   // 科学计数法
1.0f      // float类型（后缀f）

```

```cpp [字符]
'A'       // 字符
'\n'      // 转义字符
u'猫'     // Unicode字符(C++11)
```

```cpp [字符串]
"Hello"
R"(Raw\nString)"  // 原始字符串(C++11)
```

```cpp [布尔]
true
false
```

```cpp [指针]
nullptr   // C++11空指针
```

:::

字面量的类型可以通过后缀指定，如`3.14f`（float）

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>


<CCollapse title="什么是驼峰命名法？">

**小驼峰式**：
- 第一个单词首字母小写，后续单词首字母大写
- 常用于变量名、函数名
```cpp
int studentCount;
double averageScore;
string firstName;
```

**大驼峰式**：
- 每个单词首字母都大写
- 常用于类名、类型名
```cpp
class StudentInfo;
struct UserData;
enum ColorPalette;
```

</CCollapse>

<CCollapse title="什么是下划线命名法？">

> 也称蛇形命名法

- 所有字母小写，单词间用下划线连接
```cpp
int student_count;
double average_score;
const int MAX_ATTEMPTS = 3;
```

</CCollapse>


<CCollapse title="变量命名规范有哪些？">

- 使用驼峰或下划线命名法
- ​变量名应具有描述性​​，避免使用无意义的单字母（如 `a`, `b`）
- 常量命名采用全大写格式
- 布尔变量以`is`、`has`、`can`前缀开头

</CCollapse>

</CCollapseGroup>

---