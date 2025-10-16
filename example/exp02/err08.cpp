// #region a
#include <iostream>
using namespace std;

int main() {

    {
        int a = 100;
        int b = 200;
    }

    {
        int a = 100;
        int b = 200;
    }

    cout << a + b;

}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {

    {
        int a = 100;
        int b = 200;
    }

    {
        int a = 100;
        int b = 200;
    }

    cout << a + b;   // [!code error]

}

/**
无法访问不在同一个作用域的变量
*/
// #endregion b