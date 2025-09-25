#include <iostream>
using namespace std;

/**
 * 有一头母牛，它每年年初生一头小母牛。
 * 每头小母牛从第四个年头开始，每年年初也生一头小母牛。
 * 计算在第 n 年的时候，共有多少头母牛？
 */
int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int f1 = 1, f2 = 2, f3 = 3, result;

    if (n == 1) result = f1;
    else if (n == 2) result = f2;
    else if (n == 3) result = f3;
    else {
        for (int i = 4; i <= n; i++) {
            result = f3 + f1;  // f(n) = f(n-1) + f(n-3)
            f1 = f2;
            f2 = f3;
            f3 = result;
        }
    }

    cout << result << endl;
    return 0;
}