// #region a
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3};
    int *p = arr;
    cout << *p << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3};
    int *p = arr;
    cout << *p << endl;
    return 0;
}

/**
当前代码无错误：
数组名就是数组首地址，*p输出第一个元素1
*/
// #endregion b