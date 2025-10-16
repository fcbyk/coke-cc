// #region a
#include <iostream>
using namespace std;

void 123greet(string name) {
    cout << "Hello, " << name << endl;
}

int main() {
    123greet("Alice");
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

void 123greet(string name) {   // [!code error]
    cout << "Hello, " << name << endl;
}

int main() {
    123greet("Alice");
    return 0;
}

/**
（标识符）函数命名规则和变量命名规则一样，不能以数字开头
*/
// #endregion b