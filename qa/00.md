# HelloWorld

---

<CCollapseGroup>

<CCollapse title="什么是HelloWorld程序？">

在学习任何编程语言时，第一个程序通常都是打印出“Hello World!”。这是编程世界的“敲门砖”，就像你第一次拿起笔写下自己的名字一样。

HelloWorld是编程世界的"第一步"，是最简单的程序示例：

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
```

执行后，屏幕会输出：
<RunningResult>
Hello World!
</RunningResult>

</CCollapse>

<CCollapse title="C++程序的基本结构是怎样的？">

基本结构包括：
1. **头文件引入**：`#include <iostream>`，提供基本工具
2. **命名空间声明**：`using namespace std;`，简化代码书写
3. **主函数**：`int main() { }`，程序的起点和终点
4. **语句**：`cout << "Hello World!" << endl;` 
5. **返回值**：`return 0;`，表示程序正常结束

</CCollapse>

<CCollapse title="C++中有哪两大类语句？">

C++代码分为两类：
1. **预处理器指令**：
   - 以`#`开头
   - 编译前处理
   - 不需要分号结束
   - 例如：`#include <iostream>`

2. **普通语句**：
   - 程序的主体部分
   - 必须以分号结束
   - 例如：`cout << "Hello World!" << endl;`

</CCollapse>

<CCollapse title="如何使用cout输出内容？">

`cout`是C++输出内容到屏幕的工具：

```cpp
cout << "你要输出的内容" << endl;
```

它支持链式调用，可以连续输出多个内容：
```cpp
cout << "我的名字是小明。" << " 我今年" << 12 << "岁。" << endl;
```

输出：
<RunningResult>
我的名字是小明。 我今年12岁。
</RunningResult>

</CCollapse>

<CCollapse title="如何控制输出内容换行？">

- **使用`endl`换行**：
```cpp
cout << "这是第一行。" << endl;
cout << "这是第二行。" << endl;
```
输出：
<RunningResult>
这是第一行。<br/>
这是第二行。
</RunningResult>

- **不使用`endl`（不换行）**：
```cpp
cout << "这是第一行。";
cout << "这是第二行。";
```
输出：
<RunningResult>
这是第一行。这是第二行。
</RunningResult>

</CCollapse>

<CCollapse title="如何输出数学表达式的结果？">

使用`cout`可以直接输出表达式结果（不加引号）：

```cpp
cout << 10 + 5 << endl;  // 加法
cout << 10 - 5 << endl;  // 减法
cout << 10 * 5 << endl;  // 乘法
cout << 10 / 5 << endl;  // 除法
```

输出：
<RunningResult>
15<br/>
5<br/>
50<br/>
2
</RunningResult>

</CCollapse>

<CCollapse title="如何在C++程序中添加注释？">

C++有两种注释方式：

1. **单行注释**（使用`//`）：
```cpp
// 这是单行注释
cout << "Hello World!" << endl; // 这也是注释
```

2. **多行注释**（使用`/*` 和 `*/`）：
```cpp
/*
这是多行注释
可以跨越多行
*/
cout << "Hello World!" << endl;
```

注释不会被编译执行，只是给人看的说明。

</CCollapse> 

</CCollapseGroup>