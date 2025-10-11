#include <iostream>
#include <windows.h>
using namespace std;

void hello(int a){

    // 终止条件
    if (a == 5) return;

    // 递归关系
    cout << a << endl;
    a = a+1;
    hello(a);
    cout << a << endl;
}

void box(){
    MessageBox(0,"扫码付费关闭窗口","我是病毒",0);
    box();
}


/**
 * 第一题：台阶走法
 * 走楼梯，每次可以走1阶或2阶，问走n阶有几种方法？
 */
int q1(int a){
    // （基线条件）终止条件
    if(a==1) return 1;
    if(a==2) return 2;

    // 递归关系
    return q1(a-1) + q1(a-2);
}

int main(){
    cout << q1(3);
    return 0;
}

