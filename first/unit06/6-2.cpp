#include <iostream>
using namespace std;
int main(){

    // 定义两个变量，存储总头数，总脚数
    int z_head, z_foot;
    cin >> z_head >> z_foot;

    // 计算兔子和鸡的数量
    int rabbits = (z_foot - 2 * z_head) / 2;
    int chickens = z_head - rabbits;

    // 什么情况有解
    bool a = rabbits >= 0 && chickens >= 0;
    bool b = z_foot%2 == 0;
    // bool c = z_foot >= z_head*2 && z_foot <= z_head * 4;
    bool d = 2 * chickens + 4 * rabbits == z_foot;

    if (a && b && d){
        cout << "鸡的数量: " << chickens << endl;
        cout << "兔子的数量: " << rabbits << endl;
    } else {
        cout << "无解" << endl;
    }

    return 0;
}

