// #region a
#include <iostream>

int main() {
    cout << "鸡蛋鸭蛋荷包蛋" << endl;
    return 0;
}

// #endregion a

// #region b
#include <iostream>

int main() {
    cout << "鸡蛋鸭蛋荷包蛋" << endl; // [!code error]
    return 0;
}

/**
错误解释：
cout和endl错误。
计算机不知道是使用哪个cout工具

我们需要添加std::前缀
或者在函数体外添加 using namespace std;
告诉计算机，是使用std里面的cout工具
*/
// #endregion b