#include <iostream>
using namespace std;

// 写一个交换两个变量的值
void jiaoHuan(int& a, int& b){
    int temp;
    temp = a;
    a = b ;
    b = temp;
}

// 值转递与地址传递
int main1(){

    // 接收输入
    int a,b;
    cin >> a >> b;

    // 变量交换
    jiaoHuan(a,b);

    // 输出结果
    cout << a << " " << b;
    return 0;
}

/**
 * 什么是引用
 * 引用就是变量的别名
 * 引用通常不占用内存
 */
int main2(){
    int a = 100;
    int& b = a;

    b--;

    cout << a;
}