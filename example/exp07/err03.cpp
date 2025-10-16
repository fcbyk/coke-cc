// #region a
#include <iostream>
using namespace std;

int addNumbers(int a, int b)
    return a + b;
}

int main() {
    cout << addNumbers(5, 3) << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int addNumbers(int a, int b)  // [!code error]
    return a + b;
}

int main() {
    cout << addNumbers(5, 3) << endl;
    return 0;
}

/**
错误解释：
函数体缺少大括号。
函数定义时，函数体需要用大括号{}括起来。
*/
// #endregion b