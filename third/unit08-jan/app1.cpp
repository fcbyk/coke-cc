#include <iostream>
using namespace std;

int main() {
    // 改控制台字符集为 UTF-8
    system("chcp 65001 > nul");

    // 三元运算符
    // 条件表达式 ? 表达式1 : 表达式2
    // 条件为真时，返回表达式1，否则返回表达式2
    {
        int a = true ? 100:200;
        cout << a << endl;
        cout << (false ? 100:200) << endl;
    }

    // 例子1，判断奇偶数
    {
        int num = 100;
        cout << (num%2 == 0 ? "偶数":"奇数") << endl;
    }

    // 例子2，判断正负数
    // 不适合用三元运算符，因为 0 不是正数也不是负数
    // 一共有三种情况
    {
        int num = 100;
        cout << (num > 0 ? "正数": "负数") << endl;
    }

    // 例子3,判断成绩是否及格
    {
        int score = 100;
        cout << (score >= 60 ? "合格":"不合适") << endl;
    }

    return 0;
}
