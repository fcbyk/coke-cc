#include <iostream>

using namespace std;

// 习题2：分离位数
int main(){

    // 定义变量
    int gewei,shiwei,baiwei;
    int number;

    // 接收输入
    cin >> number;

    // 获取个位数
    gewei = number%10;

    // 获取十位数
    shiwei = (number/10)%10;

    // 获取百位数
    baiwei = number/100;
    
    // 输出结果
    cout << gewei + shiwei +baiwei << endl;
    
    return 0;
}

