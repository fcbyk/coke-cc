#include <iostream>

using namespace std;

// 分离位数
int main(){

    // 定义变量
    int number, gewei, shiwei, baiwei;

    // 输入一个3三位数
    cout << "请输入一个3位数：";
    cin >> number;

    // 获取个位数
    gewei = number%10;

    // 获取十位数
    shiwei = number/10%10;

    // 获取百位数
    baiwei = number/100;

    // 输出结果
    cout << gewei + shiwei + baiwei << endl;

    return 0;
}

