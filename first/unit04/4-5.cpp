#include <iostream>
using namespace std;

int main() {

    // 定义两个变量，用来矩形的长和宽
    double a, b;

    // 输入矩形的长和宽
    cin >> a >> b;

    // 按要求使用cout输出结果
    cout << "面积：" << a*b << endl;
    cout << "周长：" << (a+b)*2 << endl;

    return 0;
}