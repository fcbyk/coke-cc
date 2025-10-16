// #region a
#include <iostream>
using namespace std;

int main() {
    auto y = 3.14;
    y = "hello";
    cout << y;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    auto y = 3.14;
    y = "hello"; // [!code error]
    cout << y;
    return 0;
}

/**
错误解释：
推断类型为 double，不能再赋值为字符串字面量。
*/
// #endregion b