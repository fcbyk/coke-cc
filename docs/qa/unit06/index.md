# 数组

---

<CCollapseGroup>

<CCollapse title="什么是数组？">

**数组** 是一种数据结构，用于存储固定大小的相同类型元素的顺序集合。数组中的每个元素都可以通过数字索引来访问。

- 数组大小在创建时确定且不可改变
- 数组索引从0开始
- 数组元素在内存中是连续存储的
- 数组名代表数组首元素的地址

</CCollapse>

<CCollapse title="如何声明和初始化数组？">

- 声明语法：**`数据类型 数组名[大小]`**
- 初始化可以在声明时进行
- 可以部分初始化，未初始化的元素自动设为0

```cpp
// 声明后逐个初始化
int nums[3];
nums[0] = 1;
nums[1] = 2;
nums[2] = 3;

// 声明时初始化
double prices[5] = {10.5, 20.0, 30.25};

// 自动确定数组大小
char letters[] = {'a', 'b', 'c'};  // 大小为3

// C++11统一初始化
int arr[] {1, 2, 3};
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>
</CCollapse>

<CCollapse title="如何访问数组元素？">

数组元素通过索引访问，索引范围从 **`0`** 到 **`数组大小-1`**

```cpp
int scores[5] = {85, 90, 78, 92, 88};

// 访问单个元素
int firstScore = scores[0];  // 85
int thirdScore = scores[2];  // 78

// 修改元素值
scores[1] = 95;  // 将第二个元素改为95

// 遍历数组
for (int i = 0; i < 5; i++) {
    cout << scores[i] << " ";
}
```

注意：访问越界会导致未定义行为

</CCollapse>

<CCollapse title="什么是多维数组？">

多维数组就是数组里面套数组。比如 **`二维数组`** 可以想象成表格，有行有列

**`三维数组`** 就像一摞表格，多个层

::: code-group

```cpp [二维数组]
// 声明和初始化
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// 访问元素
int val = matrix[1][2];  // 6
```

```cpp [三维数组]
// 声明
int cube[2][3][4];

// 访问并修改元素的值
cube[1][1][1] = 100;
```

:::

</CCollapse>

</CCollapseGroup>