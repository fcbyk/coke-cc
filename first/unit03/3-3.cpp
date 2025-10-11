#include <iostream>

using namespace std;

// 判断倍数
int main(){

    // 定义一个变量
    int number;

    // 使用变量接收输入
    cin >> number;

    // 条件判断语句
    if(number%4){
        // 表达式为真时（非0），执行这里的语句
        cout << "no" << endl;
    } else{
        // 表达式为假时（0），执行这里的语句
        cout << "yes" << endl;
    }

    return 0;
}

