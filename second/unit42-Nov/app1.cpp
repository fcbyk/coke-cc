#include <iostream>
using namespace std;

// 算术运算符
void demo1() {
    cout <<   10/3      << endl;
    cout <<   10/3.0     << endl;
    cout <<   1+2*3     << endl;
    cout <<   4*5/2      << endl;
    cout <<   5/2*3      << endl;
}

void demo2() {
    cout << 20/3         << endl;
    cout << 20%3         << endl;
    cout << 2%3          << endl;
    cout << 2%3*2        << endl;
    cout << 1+2*3-7%2    << endl;
}

void demo3() {
    int a = 5;
    cout << a++ << endl;
    cout << ++a << endl;
}

void demo4() {
    int a = 3;
    int b = 3;
    cout << b-- + --a << endl;
    cout << b-- << endl;
}

int main() {
    demo4();
    return 0;
}

