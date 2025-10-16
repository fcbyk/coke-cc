# 结构体

---

<CCollapseGroup>

<CCollapse title="什么是结构体？">

**`结构体`** 就是把多个不同类型的数据打包成一个整体。

比如学生结构体可以包含姓名、学号、成绩这些信息。用起来比单个变量更方便。

</CCollapse>

<CCollapse title="如何创建一个结构体类型？">

用 `struct` 关键字定义一个结构体类型

::: code-group

```cpp [语法]
struct 结构体名称 {
    成员类型 成名名称;
    成员类型 成名名称;
    ...
};
```

```cpp [示例]
struct Student {
    string name;
    int age;
    float score;
};
```

:::

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="如何创建一个结构体变量？">

直接像普通变量那样声明即可：

::: code-group

```cpp [方法1]
int a;  // 声明int类型的变量
Student stu1;  // 声明学生类型的变量
Student stu2 = {"李四", 21, 89.5}; // 声明并初始化
```

```cpp [方法2]
// 定义结构体时同时声明变量
struct Student {
    string name;
    int age;
    float score;
} stu1,stu2;
```

:::

</CCollapse>

<CCollapse title="什么是匿名结构体？">

匿名结构体就是没有名字的结构体，定义时直接声明变量：

```cpp
struct {  // 没有类型名
    int x;
    string s;
} myVar;  // 直接跟变量名
```

- 不能重复使用这个类型
- 适合临时用一次的小数据组合

</CCollapse>

<CCollapse title="如何访问结构体变量的成员？">

用点号 **`.`** 访问成员

如果是结构体指针就用 **`->`**，比如 `p->name`

::: code-group

```cpp [基础]
Student stu;
stu.name = "张三";
stu.age = 20;

cout << stu.name << endl;
```

```cpp [结构体指针]
Student *stu;
stu->name = "张三";
stu->age = 20;

cout << stu->name << endl;
```

:::

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="结构体可以嵌套吗？">

结构体可以嵌套，比如：

```cpp
struct Address {
    string city;
    string street;
};

struct Student {
    string name;
    Address addr;  // 嵌套Address结构体
    int age;
};
```

用的时候逐层访问：`stu.addr.city`

</CCollapse>

</CCollapseGroup>