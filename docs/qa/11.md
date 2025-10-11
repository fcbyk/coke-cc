# C++ 指针

---

<CCollapseGroup>

<CCollapse title="什么是指针？">

**指针** 是存储内存地址的变量，它提供了对内存中数据的间接访问方式。指针是C++中强大但需要谨慎使用的特性。

关键点：
1. 指针变量存储的是内存地址，而不是实际的值
2. 通过指针可以间接访问或修改它所指向的数据
3. 指针类型决定了如何解释所指向的内存数据

类比：指针就像一张名片，上面写着某人的地址，通过这个地址你可以找到那个人。

<template #extra>
    <CBadge text="核心概念" variant="outline" color="#ff4d4f" />
</template>
</CCollapse>

<CCollapse title="如何声明和使用指针？">

1. **指针声明**：使用`*`符号声明指针变量
2. **取地址**：使用`&`获取变量的地址
3. **解引用**：使用`*`访问指针指向的值

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

数组名本质上是一个指向数组第一个元素的常量指针。

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;  // 等同于 &arr[0]

cout << *ptr << endl;    // 输出: 1
cout << *(ptr + 2) << endl; // 输出: 3 (指针算术运算)
```

指针可以像数组一样使用下标访问：
```cpp
cout << ptr[1] << endl;  // 输出: 2
```

</CCollapse>

<CCollapse title="什么是动态内存分配？">

C++中使用`new`和`delete`运算符进行动态内存管理：

```cpp
// 分配单个int
int *p = new int(10);  
// 分配int数组
int *arr = new int[5]{1, 2, 3, 4, 5};  

// 使用...

// 释放内存
delete p;      
delete[] arr;  // 数组需要加[]
```

**注意事项**：
1. 必须配对使用`new`和`delete`
2. 数组内存必须使用`delete[]`释放
3. 忘记释放会导致内存泄漏

</CCollapse>

<CCollapse>

<template #title>
    在C++中，<code>*</code> 符号的三种用途
</template>

1. **​乘法运算符**​​：`int c = a * b;`
2. **​指针声明符​**​：`int *ptr;`
3. **​解引用运算符**​​：`int val = *ptr;`

<template #extra>
    <CBadge text="总结" variant="outline" color="#b300dbff" />
</template>

</CCollapse>

<CCollapse>

<template #title>
    在C++中，<code>&</code> 符号的三种用途
</template>

在C++中，**`&` 符号** 是一个多功能操作符，具体用途取决于上下文。它既可以作为**运算符**（进行位运算），也可以作为其他类型的**操作符**（如取地址操作符）。以下是 `&` 的三种主要用法：

| **`&` 的用途** | **类别** | **示例** | **操作数数量** |
|----------------|---------|---------|---------------|
| **位与运算** | 运算符（算术/位运算） | `a & b` | 双目（两个操作数） |
| **取地址** | 操作符（内存操作） | `&x` | 单目（一个操作数） |
| **引用声明** | 类型修饰符（非运算符） | `int& ref = x;` | 不适用（声明时使用） |


<template #extra>
    <CBadge text="总结" variant="outline" color="#b300dbff" />
</template>

</CCollapse>

<CCollapse title="什么是多级指针？">

多级指针是指指向指针的指针，在C++中可以有多层间接寻址。下面我将详细解释多级指针的概念和使用。

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

#### 注意事项

1. 多级指针会增加代码的复杂性，应谨慎使用
2. 确保每一级指针都正确初始化，避免野指针
3. 多级指针的内存管理要特别注意，避免内存泄漏
4. 指针层级越多，代码可读性通常越差

<template #extra>
    <CBadge text="知道一下即可" variant="outline" color="#6456dcff" />
</template>
</CCollapse>

</CCollapseGroup>



