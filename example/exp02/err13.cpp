// #region a
#include <iostream>

int main() {
    const int var = 100;
    var = 200;
    cout << var << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>

int main() {
    const int var = 100;
    var = 200;   // [!code error]
    cout << var << endl;
    return 0;
}

/**
常量的值不能改变
声明时必须赋值
 */
// #endregion b