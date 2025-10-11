#include <iostream>
using namespace std;

int a = 100;

// 变量的作用域
int main(){

    int a = 200;

    if (true){
//        int a = 300;
        cout << a << endl;
    }

    cout << a << endl;

    return 0;
}

// 这里输出什么？
int q2(){
    cout << a << endl;
}


/**
 * 总结
 * 变量仅在其定义的块 {} 内可见
 * 内层同名变量覆盖外层
 */




