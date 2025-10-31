#include <iostream>
#include <string>
#include <algorithm> // 用于reverse函数
using namespace std;

// 11. 计算BMI指数
double calcBMI(double height, double weight) {
    if (height <= 0) {
        return 0; // 防止除零错误
    }
    return weight / (height * height);
}

// 12. 计算阶乘
long factorial(int n) {
    if (n < 0) {
        return -1; // 错误处理：负数没有阶乘
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 13. 反转字符串
string rString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

// 14. 判断闰年
bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}

int main(){
    cout << rString("das");
    return 0;
}