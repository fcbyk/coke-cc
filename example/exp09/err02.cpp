// #region a
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    cout << p << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    cout << p << endl;
    return 0;
}

/**
当前代码无错误：
输出的是变量a的内存地址
*/
// #endregion b