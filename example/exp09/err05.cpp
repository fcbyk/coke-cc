// #region a
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1,2,3};
    int *p = arr;
    cout << p[1] << endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1,2,3};
    int *p = arr;
    cout << p[1] << endl;
    return 0;
}

/**
当前代码无错误：
数组名就是数组首地址，指针可以像数组一样使用下标访问元素
*/
// #endregion b