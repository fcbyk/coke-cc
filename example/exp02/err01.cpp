// #region a
#include <iostream>
using namespace std;

int main() {
    cout << a;
    int a = 100;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    cout << a;  // [!code error]
    int a = 100;
    return 0;
}

/**
错误解释：
变量需要先声明，后使用。
*/
// #endregion b