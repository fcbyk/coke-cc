#include <iostream>
using namespace std;

/**
 * 区间内所有素数
 * 输入：整数n 和 整数m
 * 输出：n ~ m 之间的所有素数
 */
int main() {

    // 接收输入
    int n,m;
    cin >> n >> m;

    // 遍历 n - m 的所有数字
    for (int i = n; i <= m; i++) {

        bool flag = true;

        // 判断当前的 i 是否是素数
        for (int j = 2; j < i ; ++j) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << i << " ";
        }

    }

    return 0;
}