# 函数

---

<CCollapseGroup>

<CCollapse title="什么是函数?">

函数是一段可以重复使用的代码块，用于完成特定任务。

**函数就像一个小工厂**：
- 接收原材料（输入参数）
- 进行加工处理（执行代码）
- 产出产品（返回结果）

</CCollapse>

<CCollapse title="为什么使用函数？">

- **代码复用**：一次编写，多次调用
- **模块化**：将大问题分解为小问题
- **易于维护**：修改只需改一处
- **可读性强**：函数名表达意图

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


</CCollapse>

<CCollapse title="如何调用函数?">

> 表达式中，函数是一个操作数，类型为返回值类型

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

<CCollapse title="什么是形参，什么是实参？">

#### 形参（形式参数）
- **定义位置**：函数声明或定义时的参数
- **作用**：描述函数需要什么类型的参数
- **特点**：
  - 只是占位符，没有实际值
  - 作用域仅限于函数内部
  - 在函数被调用时接收实参的值

#### 实参（实际参数）
- **定义位置**：函数调用时传入的具体值
- **作用**：为函数提供实际要处理的数据
- **特点**：
  - 可以是常量、变量或表达式
  - 必须与形参的类型和顺序匹配
  - 在调用时将其值传递给形参

```cpp
#include <iostream>
using namespace std;

// 函数定义中的a和b是形参
int add(int a, int b) {  // a和b在这里是形参
    return a + b;
}

int main() {
    int x = 5, y = 3;
    
    // 调用时的5和3是实参
    cout << add(5, 3) << endl;  // 5和3是实参
    
    // 调用时的x和y是实参
    cout << add(x, y) << endl;  // x和y是实参
    
    // 调用时的表达式是实参
    cout << add(x+1, y*2) << endl;  // x+1和y*2是实参
    
    return 0;
}
```

#### 类比说明

- **形参**：就像菜单上的"主菜"和"饮料"（只是占位描述）
- **实参**：实际点的"红烧肉"和"可乐"（具体内容）

</CCollapse>


</CCollapseGroup>