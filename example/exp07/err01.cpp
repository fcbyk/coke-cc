// #region a
#include <iostream>
using namespace std;

void printMessage() {
    cout << "Hello from function!" << endl;
}

int main() {
    printMessage;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

void printMessage() {
    cout << "Hello from function!" << endl;
}

int main() {
    printMessage;  // [!code warning]
    return 0;
}

/**
该代码无语法错误，单个函数名不加括号也是合法的表达式
但函数调用缺少括号，无运行效果。
调用函数时，即使没有参数也需要加上括号。
*/
// #endregion b