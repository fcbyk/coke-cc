// #region a
#include <iostream>
using namespace std;

int main() {
    int c = 10;
    double c = 3.14;
    cout << c;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int c = 10;
    double c = 3.14;  // [!code error]
    cout << c;
    return 0;
}

/**
错误解释：
同一作用域内标识符重复定义（且类型冲突）。
*/
// #endregion b