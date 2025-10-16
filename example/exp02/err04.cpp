// #region a
#include <iostream>
using namespace std;

int main() {
    int d = "123";
    cout << d;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int d = "123";   // [!code error]
    cout << d;
    return 0;
}

/**
错误解释：
字符串字面量类型为 const char[N]，不能直接赋给 int。
*/
// #endregion b