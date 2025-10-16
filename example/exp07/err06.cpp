// #region a
#include <iostream>
using namespace std;

int a() {
    return 3.14;
}

int main() {
    cout << a();
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int a() {
    return 3.14;
}

int main() {
    cout << a();
    return 0;
}

/**
当前代码无编译错误
浮点型会自动转成整型，丢失小数部分
*/
// #endregion b