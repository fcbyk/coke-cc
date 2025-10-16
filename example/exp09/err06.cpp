// #region a
#include <iostream>
using namespace std;

int main() {
    double d = 3.14;
    int *p = &d;
    cout << *p << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    double d = 3.14;
    int *p = &d;  // [!code error]
    cout << *p << endl;
    return 0;
}

/**
错误解释：
指针类型与指向的变量类型不匹配。
double类型变量应该用double*指针
*/
// #endregion b