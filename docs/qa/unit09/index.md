# C++ 指针

---

<CCollapseGroup>

<CCollapse title="什么是指针？">

**指针** 是存储内存地址的变量，它提供了对内存中数据的间接访问方式。

</CCollapse>

<CCollapse title="指针的三大基本操作？">

1. **指针声明**：使用`*`符号声明指针变量
2. **取地址**：使用`&`获取变量的地址
3. **解指针**：表达式中使用`*`访问指针指向的值

```cpp
int num = 42;
int *ptr = &num;  // ptr指向num的地址

cout << "num的值: " << num << endl;      // 输出: 42
cout << "num的地址: " << &num << endl;   // 输出: 0x7ffd...
cout << "ptr存储的地址: " << ptr << endl; // 输出: 0x7ffd...
cout << "ptr指向的值: " << *ptr << endl; // 输出: 42
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>
</CCollapse>

<CCollapse title="什么是空指针和野指针？">

**空指针**：不指向任何有效内存地址的指针，通常用`nullptr`表示。

**野指针**：指向无效内存地址或已释放内存的指针，使用野指针会导致未定义行为。

```cpp
int *p1 = nullptr;  // 空指针，安全
int *p2;           // 未初始化，野指针，危险
int *p3 = new int(5);
delete p3;        // p3现在成为野指针
p3 = nullptr;     // 安全处理
```

</CCollapse>

<CCollapse title="指针和数组有什么关系？">

数组名本质上是一个指向数组第一个元素的常量指针

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;  // 等同于 &arr[0]

// 输出的地址相同
cout << ptr << endl;
cout << arr << endl;
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="什么是动态内存分配？">

动态内存分配就是程序运行时根据需要申请内存。比如用 **`new`** 申请，**`delete`** 释放，不像数组大小必须提前固定。适合处理不确定大小的数据。

```cpp
// 使用new为数据分配内存
int *p = new int(10);  
int *arr = new int[5]{1, 2, 3, 4, 5};  

// 使用 delete 释放内存
delete p;      
delete[] arr;  // 数组需要加[]
```

- 必须配对使用 **`new`** 和 **`delete`**
- 忘记释放会导致内存泄漏

<template #extra>
    <CBadge text="进阶" variant="outline" color="#b300dbff" />
</template>

</CCollapse>

<CCollapse>

<template #title>
    在C++中，<code>*</code> 符号的三种用途
</template>

1. **​乘法运算符**​​：`int c = a * b;`
2. **​指针声明符​**​：`int *ptr;`
3. **​解指针操作符**​​：`int val = *ptr;`

</CCollapse>

<CCollapse>

<template #title>
    在C++中，<code>&</code> 符号的三种用途
</template>

在C++中，**`&` 符号** 是一个多功能操作符，具体用途取决于上下文。

| **`&` 的用途** | **类别** | **示例** | **操作数数量** |
|----------------|---------|---------|---------------|
| **位与运算** | 运算符（算术/位运算） | `a & b` | 双目（两个操作数） |
| **取地址** | 操作符（内存操作） | `&x` | 单目（一个操作数） |
| **引用声明** | 类型修饰符（非运算符） | `int& ref = x;` | - |

</CCollapse>

<CCollapse title="什么是多级指针？">

多级指针是指 **`指向指针的指针`**，在C++中可以有多层间接寻址。

#### 基本概念

1. **一级指针**：指向普通变量的指针
   ```cpp
   int a = 10;
   int *p = &a;  // p是一级指针，指向整型变量a
   ```

2. **二级指针**：指向指针的指针
   ```cpp
   int **pp = &p;  // pp是二级指针，指向指针p
   ```

3. **多级指针**：可以继续延伸，如三级指针、四级指针等
   ```cpp
   int ***ppp = &pp;  // ppp是三级指针
   ```

#### 多级指针的解引用

每一级指针都需要一次解引用操作：
```cpp
int a = 10;
int *p = &a;
int **pp = &p;
int ***ppp = &pp;

cout << a;    // 10
cout << *p;   // 10
cout << **pp; // 10
cout << ***ppp; // 10
```

<template #extra>
    <CBadge text="进阶" variant="outline" color="#b300dbff" />
</template>
</CCollapse>

</CCollapseGroup>



