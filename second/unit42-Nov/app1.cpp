#include <iostream>
using namespace std;

void q1(){
    // 之前学的
    cout << 100 << endl;
    cout << 22.9 << endl;
    cout << "www" << endl;
    cout << 'c' << endl;
    cout << "\"" << endl;

    // 其他
    cout << 013 << endl;   // 八进制数
    cout << 1.7e5  << endl; // 科学计数法
}

//
void q2(){
    // 整型
    int a = 71236862146124912;
    short b = 100;
    long c= 100;
    long long d = 100;
    long int e = 100;
    cout << a << endl;

    // 浮点型
    float f = 123.3232f;
    double g = 23.3231;

    // 字符类型
    char h = 'w';
    wchar_t i = L'中';

    // 布尔类型
    bool j = true;
    bool k = false;
}

// 常量
void q3(){
    const int a = 1000;
//    a = 200;
//    const int b;
}

// 变量的作用域
void q4(){
//    {{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}

    for (int i = 0; i < 3; ++i) {
        int a = 100;
    }

//    cout << a << endl;

    {
        int b = 100;
        {
            int b = 200;
            cout << b << endl;
        }
    }

}

int main(){
    q2();
    return 0;
}
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

