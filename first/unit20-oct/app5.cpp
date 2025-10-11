#include <iostream>
using namespace std;

/**
 * 素数个数
 */
int main() {

    // 接收输入
    int n;
    cin >> n;

    // 遍历 2 - n 的所有数字
    int count = 0;
    for (int i = 2; i <= n; i++) {

        count++;

        // 判断当前的 i 是否是素数
        for (int j = 2; j < i ; ++j) {
            if (i % j == 0) {
                count--;
                break;
            }
        }

    }

    // 输出结果
    cout << count;

    return 0;
}