#include <iostream>
using namespace std;

// 使用 & 查看变量的内存地址
int main1(){
    int a = 100;
    cout << &a << endl;
    return 0;
}

// 使用 * 声明指针变量
int main2(){
    int a = 100;
    int *b = &a;
    cout << &a << endl;
    cout << b << endl;
    return 0;
}

// 使用 * 解指针
int main3(){
    int a = 100;
    int *b = &a;
    cout << a << endl;
    cout << *b << endl;
    return 0;
}