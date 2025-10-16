// #region a
#include <iostream>
using namespace std;

int main() {
    cout << 1+1 << endl;
    cout << 100 << endl;
    return 0;
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    cout << 1+1 << endl;
    cout << 100 << endl;
    return 0; // [!code error]

/**
错误解释：
main函数，缺少花括号。
{ }，花括号围起来的是称为函数体。
我们的cout语句得写在函数体里面。

（了解一下）
函数体内写的是可执行代码，用于实现具体的逻辑
函数体外写的是声明和定义，用于描述程序的结构和类型
*/
// #endregion b