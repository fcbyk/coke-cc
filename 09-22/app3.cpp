#include <iostream>
using namespace std;

/**
 * 有三个正整数 a、b、c
 * 其中 c不等于 b 。若 a 和 c 的最大公约数为 b
 * 现已知 a 和 b，求满足条件的最小的c
 * 输入：输入两个正整数 a, b
 * 输出：输出对应的 c
 */
int main(){
    int a, b;
    cin >> a >> b;

    if (a % b != 0) {
        cout << "无解" << endl;
        return 0;
    }

    int m = a / b;
    int n = 2;

    while (true) {
        int x = m, y = n;
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        if (x == 1) break;
        n++;
    }

    cout << b * n << endl;
    return 0;
}