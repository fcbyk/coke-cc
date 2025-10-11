#include <iostream>
using namespace std;

/**
 * 如果 abcde * a = eeeeee 成立
 * a 和 e 不为 0
 * 求 abcde 分别为什么数字
 */
int main(){

    // int a,b,c,d,e;

    for (int a = 1; a < 10; ++a) {
        for (int b = 0; b < 10; ++b) {
            for (int c = 0; c < 10; ++c) {
                for (int d = 0; d < 10; ++d) {
                    for (int e = 1; e < 10; ++e) {
                        int abcde = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
                        int eeeeee = e * 111111;
                        if (abcde * a == eeeeee) {
                            cout << a << b << c << d << e << endl;
                            return 0;   // 如果找到了，就提前结束程序
                        }
                    }
                }
            }
        }
    }

    return 0;
}