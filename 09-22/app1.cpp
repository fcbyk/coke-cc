#include <iostream>
using namespace std;

/**
 * 输入整数 a,b
 * 输出他们得最大公约数
 */

/**
 * 暴力枚举法
 */
int main1(){
    // 接收两个整数的输入
    int a,b;
    cin >> a >> b;

    // 计算
    int ans;
    for (int i = 1; i <= min(a,b); ++i) {
        if (a%i==0 && b%i==0){
            ans = i;
        }
    }

    // 输出结果
    cout << ans;
    return 0;
}

/**
 * 辗转相除法
 * gcd(a, b) = gcd(b, a mod b)
 */
int main(){
    // 接收两个整数的输入
    int a,b;
    cin >> a >> b;

    // 计算
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // 输出结果
    cout <<  a;
}