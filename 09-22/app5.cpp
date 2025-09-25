#include <iostream>
using namespace std;

/**
 * 输出斐波那契数列前20项
 */
int main(){
    int a=1, b=1, c;
    cout << "输出斐波那契数列前20项是：" << endl;
    cout << a << " " << b;

    for (int i = 3; i <= 20; ++i) {
        c = a + b;
        a = b;
        b = c;
        cout << " " << c;
    }
    return 0;
}