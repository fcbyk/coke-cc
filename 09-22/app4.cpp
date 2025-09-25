#include <iostream>
using namespace std;

/**
 * 输入一个正整数 n ，将 n 分解质因数
 */
int main() {
    int n;
    cin >> n;

    cout << n << "=";

    bool first = true; // 标记是否是第一个因数，用于控制*号的输出

    // 处理质因数2（唯一的偶质数）
    while (n % 2 == 0) {
        if (!first) {
            cout << "*";
        }
        cout << 2;
        n /= 2;
        first = false;
    }

    // 处理奇数质因数，从3开始，每次+2
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            if (!first) {
                cout << "*";
            }
            cout << i;
            n /= i;
            first = false;
        }
    }

    // 如果最后n>1，说明 n 本身是质数
    if (n > 1) {
        if (!first) {
            cout << "*";
        }
        cout << n;
    }

    cout << endl;
    return 0;
}