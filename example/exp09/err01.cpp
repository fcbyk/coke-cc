// #region a
#include <iostream>
using namespace std;

int main() {
    int num = 100;
    int *p;
    p = num;
    cout << *p << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int num = 100;
    int *p;   // [!code warning]
    p = num;  // [!code error]
    cout << *p << endl;
    return 0;
}

/**
错误解释：
使用未初始化的指针（野指针），危险
指针p应该存储地址，而不是直接存储值。
正确写法：int *p = &num;
*/
// #endregion b