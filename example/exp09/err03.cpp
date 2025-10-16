// #region a
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int *p = x;
    cout << *p << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int *p = x;  // [!code error]
    cout << *p << endl;
    return 0;
}

/**
错误解释：
指针初始化错误，应该用地址初始化指针。
正确写法：int *p = &x;
*/
// #endregion b