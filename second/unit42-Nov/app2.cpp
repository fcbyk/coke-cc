#include <iostream>
using namespace std;

// 赋值运算符
void demo1() {
    int a    ;
    a=10     ;
    a+=10    ;
    a-=10    ;
    a*=2     ;
    a/=10    ;
}

void demo2() {
    int a = 1;
    int b = 2;
    a+=b=100  ;
    cout << a << endl;
}

int main() {
    demo2();
    return 0;
}

