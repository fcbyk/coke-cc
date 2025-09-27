#include <iostream>
using namespace std;

/**
 * 回文数
 */
int main(){

    // 接收输入
    long num;
    cin >> num;

    // 求逆序数
    long num_r = 0;
    long num_copy = num;
    while (num_copy){
        num_r = num_r*10 + num_copy%10;
        num_copy = num_copy/10;
    }

    // 输出结果
    if (num == num_r){
        cout << "yes";
    } else{
        cout << "no";
    }

    return 0;
}
