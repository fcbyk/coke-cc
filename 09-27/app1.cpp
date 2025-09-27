#include <iostream>
using namespace std;

/**
 * 水池何时干枯
 */
int main(){

    // 接收输入
    double n;
    cin >> n;

    // 持续消耗
    int day = 0;
    while (n>0){
        n+=0.05;
        n-=3;
        day++;
    }

    // 输出结果
    cout << day;

    return 0;
}