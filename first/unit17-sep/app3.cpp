#include <iostream>
using namespace std;

/**
 * 幸运整数
 * 一个整数中，如果有 6 和 8 ,就叫做幸运整数
 * 输入：整数n 和 整数m
 * 输出：n ~ m 之间的所有幸运整数
 */
int main() {

    // 接收输入
    int n,m;
    cin >> n >> m;

    // 遍历 n - m 的所有数字
    for (int i = n; i <= m; i++) {

        int temp = i;
        bool flag = false;

        // 逐位判断当前 i 是否包含 6 或 8
        while (temp) {
            if (temp % 10 == 6 || temp % 10 == 8) {
                flag = true;
                break;
            }
            temp /= 10;
        }

        if (flag) {
            cout << i << " ";
        }

    }

    return 0;
}