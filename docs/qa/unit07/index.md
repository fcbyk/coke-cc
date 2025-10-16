# 函数

---

<CCollapseGroup>

<CCollapse title="什么是函数?">

函数就是一段可以重复使用的代码块。你给它输入数据，它处理后返回结果。

</CCollapse>

<CCollapse title="怎么编写函数，语法是怎么样的？">

> 函数其实我们不陌生，回忆一下main函数是怎么写的

::: code-group
```cpp [函数定义]
返回值类型 函数名(参数列表) {
    // 函数体
    return 返回值;
}
```

```cpp [示例1]
// 无参数，无返回值
void hello() {
    cout << "hello world" << endl;
    cout << "你好，C++" << endl;
}
```

```cpp [示例2]
// 有参无返
void greet(string name) {
    cout << "你好, " << name << "!";
}
```

```cpp [示例3]
// 有参有返
// 计算两个数的和
int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
```

```cpp [示例4]
// 无参有返
int test() {
    return 100;
}
```
:::

1. **返回类型**：指定函数返回的数据类型（如 `int`, `double`, `string` 等），如果不需要返回值，使用 `void`
2. **函数名**：遵循变量命名规则，最好使用描述性的名称
3. **参数列表**：可以没有参数 `()`，多个参数用逗号分隔 `(int a, double b)`
4. **函数体**：包含要执行的代码块，用大括号 `{}` 包围
5. **return语句**：非`void`返回值，必须包含`return`

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="如何调用函数?">

- C++表达式中，函数是一个操作数，类型为返回值类型

::: code-group

```cpp [语法]
函数名(参数列表);
```

```cpp [示例1]
// 定义函数
void printMessage() {
    cout << "函数被调用了!" << endl;
}

int main() {
    // 调用函数
    printMessage();  // 输出：函数被调用了!
    return 0;
}
```

```cpp [示例2]
// 定义函数
int square(int num) {
    return num * num;
}

int main() {
    // 调用函数并将返回值赋给变量
    int result = square(5);  // result = 25
    
    // 直接在表达式中使用函数调用
    cout << "5的平方是：" << square(5) << endl;
    
    return 0;
}
```
::: 

</CCollapse>

<CCollapse title="什么是形式参数?">

- **`形式参数`** 也称为 **`形参`**
- 函数声明或定义时的参数
- 用于描述函数需要什么类型的参数
- 作用域仅限于函数内部

```cpp 
// 括号里的 a 和 b 称为 形参
int add(int a, int b){
    return a + b;
}
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="什么是实际参数？">

- **`实际参数`** 也称为 **`实参`**
- 实参 是 函数调用时传入的具体值
- 实参必须与形参的类型和顺序匹配
- 实参的值会传递给形参


```cpp
add(5, 3);  // 5和3是实参
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>

<CCollapse title="形参和实参的关系?">

- **形参**：就像菜单上的 "主菜" 和 "饮料"（只是占位描述）
- **实参**：实际点的 "红烧肉" 和 "可乐"（具体内容）

</CCollapse>

<CCollapse title="什么是默认参数?">

**`默认参数`** 就是函数定义时给参数设的默认值。

调用时如果不传这个参数，就自动使用默认值。

```cpp
// 不传a就默认打印10。
void print(int a = 10){
    cout << a << endl;
}
```

</CCollapse>

<CCollapse title="什么是值转递，什么是地址传递?">

值传递就是复制一份数据传给函数，函数里改不了原变量。

地址传递是传变量的内存地址，函数里能直接修改原数据。

比如 **`func(a)`** 是值传递，**`func(&a)`** 是地址传递。

</CCollapse>


</CCollapseGroup>