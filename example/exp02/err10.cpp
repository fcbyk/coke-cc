// #region a
#include <iostream>
using namespace std;

int main() {
    bool www = false;
    int 2H = 100;
    long long a = 12321313123LL;
    int #@abc = 435;
    int a+b = 23;
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    bool www = false;
    int 2H = 100;  //  变量名不能以数字开头   // [!code error]
    long long a = 12321313123LL;
    int #@abc = 435;  //  只能由数字、字母、下划线、美元符号组成  // [!code error]
    int a+b = 23;    // [!code error]
    return 0;
}
// #endregion b