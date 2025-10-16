// #region a
#include <iostream>

int main() {
    int cout = 100;
    std::cout << cout << std::endl;
    return 0;
}
// #endregion a

// #region b
#include <iostream>

int main() {
    int cout = 100;
    std::cout << cout << std::endl;
    return 0;
}

/**
当前代码无错误
在当前作用域中没有默认使用std命名空间
std的cout 和 当前作用域的cout 没有冲突
*/
// #endregion b