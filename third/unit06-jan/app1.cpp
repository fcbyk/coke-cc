#include <iostream>
#include <string>
using namespace std;

// 参数：表达式字符串
// 返回值：字符串的运算结果
long long eval(string expr) {
    long long result = 0;         // 最终结果
    long long currentProduct = 1; // 当前乘法段
    long long num = 0;            // 当前解析的数字

    for (int i = 0; i < expr.size(); i++) {
        char c = expr[i];

        // 解析当前数字
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }

        // 遇到运算符 或 到达末尾，进行结算
        if (c == '+' || c == '*' || i == expr.size() - 1) {
            currentProduct *= num;
            num = 0;

            // + 或末尾：结束一段乘法
            if (c == '+' || i == expr.size() - 1) {
                result += currentProduct;
                currentProduct = 1;
            }
        }
    }

    return result;
}

// 第一题：表达式求值
int main() {
    string s;
    cin >> s;
    long long result = eval(s)%10000;
    cout << result << endl;
    return 0;
}