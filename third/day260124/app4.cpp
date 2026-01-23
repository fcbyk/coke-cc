#include <iostream>
using namespace std;

// 求阶乘
int fun(int n) {
    // 终止条件，也是问题的最简单情况
    if (n == 1) return 1;

    // 递归关系
    return n * fun(n - 1);
}

// 递归打印 n 次 hello
void coutNum(int n) {
    // 终止条件，也是问题的最简单情况
    if (n == 0) return;

    // 递归关系
    cout << "hello" << endl;
    coutNum(n - 1);
}


int main() {
    coutNum(2);
    // cout << fun(5) << endl;
    return 0;
}

