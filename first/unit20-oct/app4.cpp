#include <iostream>
using namespace std;

/**
 * 数字游戏
 */
int main(){

    // 定义变量
    char c;
    int count = 0;

    // 逐个输入 + 判断
    for (int i = 0; i < 8; ++i) {
        cin >> c;
        if (c=='1') count++;
    }

    // 输出结果
    cout << count;
    return 0;
}