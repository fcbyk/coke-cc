#include <iostream>
// using namespace std;

// 声明一个命名空间
namespace coke {
    // 函数
    template <typename T>
    void cout(T a) {
        std::cout << a << std::endl;
    }

    // 变量
    int a = 200;

    // 结构体
    // 类
    // ......
}

int main() {

    int cout = 100;
    std::cout << cout << std::endl;
    coke::cout(cout);

    return 0;
}
