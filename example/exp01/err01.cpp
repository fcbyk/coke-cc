// #region a
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl // [!code error]
    return 0;
}

/**
错误解释：
缺少分号，普通的C++语句,需要分号结束。
就像我们语文课写作文，句号代表一句话的结束。
*/
// #endregion b