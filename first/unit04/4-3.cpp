#include <iostream>

using namespace std;

// 习题1：判断倍数
int main(){

    // 定义变量
    int a;

    // 提示用户输入
    cout << "请输入一个数字:";

    // 接收用户输入
    cin >> a;

    if (a%5){
        // 条件为真（非0），执行这里的语句
        cout << "no" << endl;
    } else{
        // 条件为假（0），执行这里的语句
        cout << "yes" << endl;
    }

    return 0;
}
