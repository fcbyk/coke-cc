// #region a
#include <iostream>
using namespace std;

int main() {
    int b;
    cout << b;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int b;
    cout << b;  // [!code warning]
    return 0;
}

/**
错误解释：
可以通过编译
使用未初始化的局部变量，行为未定义（应初始化后再使用）。
*/
// #endregion b