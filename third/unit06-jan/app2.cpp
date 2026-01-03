#include <iostream>
#include <string>
using namespace std;

// 全局变量
int t ;                 // 秒数
int x = 0, y = 0;       // 角色坐标

// 角色移动函数
void move(char c) {
    if (c == 'E') x++;
    else if (c == 'S') y--;
    else if (c == 'W') x--;
    else if (c == 'N') y++;
}

// 第二题：东风谷早苗
int main() {
    string str;
    cin >> str;
    cin >> t;
    int len = (int) str.length();

    // 当不超过一轮时，直接模拟t次移动
    if (t <= len) {
        for (int i = 0; i < t; i++) {
            move(str[i]);
        }
        cout << x << " " << y;  // 输出结果
        return 0;   // 结束程序
    }

    // 如果要走多轮，则先求出一轮的的x和y变化
    for (int i = 0; i < len; i++) {
        move(str[i]);
    }

    // 用常量 A, B 存储每一轮的数据
    const int A = x, B = y;
    x = 0, y = 0;   // 恢复坐标

    // 计算经过 t/len 轮之后的坐标
    x = x + A * t/len;
    y = y + B * t/len;

    // 模拟剩下的移动
    for (int i = 0; i < t%len; i++) {
        move(str[i]);
    }

    cout << x << " " << y;  // 输出结果
    return 0;
}
