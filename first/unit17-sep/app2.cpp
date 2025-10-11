#include <iostream>
using namespace std;

/**
 * 判断素数
 * 输入一个整数 n，请你判断 n 是否是一个素数
 * 如果是素数，输出 yes ，否则输出 no
 */
int main() {
    int n;
    cin >> n;

    // 输入检查
    // 1 和 负数 都不是素数
    if (n <= 1) {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;

    // 检查是否可以整除 2 到 n-1
    for (int i = 2; i < n ; ++i) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}