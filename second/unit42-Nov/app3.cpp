#include <iostream>
using namespace std;

// 关系运算符
void demo1(int a = 10, int b = 20) {
    cout << ( a>b ) << endl;
    cout << ( a<b ) << endl;
    cout << ( a==b ) << endl;
    cout << ( a>=b ) << endl;
    cout << ( a<=b ) << endl;
    cout << ( a!=b ) << endl;
}

void demo2() {
                int a = 10;
                int b = 20;
    cout << (   a+1>b                        ) << endl;
    cout << (   a<b-10                          ) << endl;
    cout << (   a==(b-=10)                              ) << endl;
    cout << (   a++>=b                          ) << endl;
    cout << (   --a<=b                           ) << endl;
    cout << (   a!=b<10                          ) << endl;
}


int main() {
    demo2();
    return 0;
}
