// 写法二：else-if 结构

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "输入三角形的三条边: ";
    cin >> a >> b >> c;

    // 可以添加输入验证
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "边长必须为正数！" << endl;
        return 0;
    }

    // 检查是否能构成三角形
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "无法构成三角形！" << endl;
        return 0;
    }

    // 判断三角形类型
    if (a == b && b == c) {
        cout << "这是等边三角形！" << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "这是等腰三角形！" << endl;
    }
    else {
        cout << "这是普通三角形。" << endl;
    }

    return 0;
}
