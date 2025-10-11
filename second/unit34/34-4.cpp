#include <iostream>
using namespace std;

void test(){
    int b = 100;
    b++;
    cout << b << endl;
}

// 变量的生命周期
int main(){

    for (int i = 0; i < 3; ++i) {
        int a = 10;
        cout << a << endl;
        a++ ;
    }
    
    test();
    test();

    return 0;
}

/**
 * 变量的生命周期
 * 局部变量，离开作用域时销毁
 * 全局变量，程序运算结束时销毁
 */