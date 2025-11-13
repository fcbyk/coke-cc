#include <iostream>
#include <cmath>
using namespace std;

// 逻辑运算符
void demo1(bool a = true, bool b = false) {
    cout << boolalpha;  // 启用布尔值文本输出
    cout << ( a && b ) << endl;
    cout << ( a || b ) << endl;
    cout << ( !a ) << endl;
    cout << ( !b ) << endl;
    cout << noboolalpha;  // 恢复数字输出（可选）
}

void demo2() {
                bool a = true;
                bool b = false;
    cout << (   a && b && 1                ) << endl;
    cout << (   a || b && true                     ) << endl;
    cout << (   10 || b || a || "222"           ) << endl;
    cout << (   !b && !"www"                         ) << endl;
    cout << (   3<10 && a>1                         ) << endl;
}

void demo3() {

    cout << abs(-10) + 10          << endl;
    cout << sqrt(4) + sqrt(9)       << endl;
    cout << log2(4) + log10(1000)  << endl;
}

int a(int num) { return 100+num; }
bool b() { return true; }
void demo4() {
    cout << ( a(1) > b() ) << endl;
    cout << a(-10) + !b() << endl;
}

int main() {
    demo4();
    return 0;
}
