// #region a
#include <iostream>
using namespace std;

int main() {
    const int x;
    x = 100;
    cout << x;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    const int x;   // [!code error]
    x = 100;
    cout << x;
    return 0;
}

/**
错误解释：
const 常量必须在声明时初始化。
*/
// #endregion b