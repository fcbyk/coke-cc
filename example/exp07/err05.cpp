// #region a
#include <iostream>
using namespace std;

void a() {
    return 0;
}

int main() {
    a();
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

void a() {
    return 0;  // [!code error]
}

int main() {
    a();
    return 0;
}

/**
实际的返回值与声明的返回值不一致
*/
// #endregion b