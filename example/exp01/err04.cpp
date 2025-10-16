// #region a
#include <iostream>
using namespace std;

int main() {
    cout << 和平精英;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    cout << 和平精英; // [!code error]
    return 0;
}

/**
错误解释：
字符串要使用双引号括起来
*/
// #endregion b