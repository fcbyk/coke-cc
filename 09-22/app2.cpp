#include <iostream>
using namespace std;

/**
 * 输入整数 a,b
 * 输出他们的最小公倍数
 * 最小公倍数 = 两数乘积 除 最大公因数
 */
int main(){
    // 接收两个整数的输入
    int a,b;
    cin >> a >> b;

    int a1 = a, b1 = b;

    // 求最大公因 s 数
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // 输出结果
    cout << (a1*b1)/a;
}