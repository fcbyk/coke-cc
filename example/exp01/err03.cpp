// #region a
#include <iostream>
using namespace std;

int main() {
    cout >> "可乐" >> endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    cout >> "可乐" >> endl; // [!code error]
    return 0;
}

/**
错误解释：
cout语句的流运算符错误。
同学们可以把cout想象为一个屏幕，数据流向屏幕。
流运算符的箭头应指向cout。
*/
// #endregion b