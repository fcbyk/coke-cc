// #region a
#include <iostream>
using namespace std;

int main() {
    displayMessage();
    return 0;
}

void displayMessage() {
    cout << "欢迎学习C++函数!" << endl;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main() {
    displayMessage();  // [!code error]
    return 0;
}

void displayMessage() {
    cout << "欢迎学习C++函数!" << endl;
}


/**
函数需要先声明，后使用，和变量一样
*/
// #endregion b