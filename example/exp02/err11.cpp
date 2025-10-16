// #region a
#include <iostream>
using namespace std;

int main() {
    int cout = 100;
    int for = 200;
    int if = 300;
    cout << cout << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int cout = 100;
    int for = 200;   // [!code error]
    int if = 300;    // [!code error]
    cout << cout << endl;   // [!code error]
    return 0;
}

/**
不能以C++关键字做变量名
以std标准库的函数命名，会导致命名冲突
*/
// #endregion b