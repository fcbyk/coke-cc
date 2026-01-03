#include <iostream>
#include <windows.h>
using namespace std;

/**
 * 买鸡问题
 * 公鸡5元、母鸡3元、小鸡1元3只
 * 列出100块钱买100只鸡的所有方案
 */
void buyChicken(){
    int money = 100;
    for (int gj = 0; gj <= money/5; ++gj) {
        for (int mj = 0; mj <= money/3; ++mj) {
            int xj = 100-gj-mj;
            if (xj%3 == 0 && (gj*5 + mj*3 + xj*1/3) == 100){
                cout << "公鸡" << gj << "只,";
                cout << "母鸡" << mj << "只,";
                cout << "小鸡" << xj << "只";
                cout << endl;
            }
        }
    }
}


// 鸡兔同笼
void chickenRabbit(int heads, int legs) {

    // 枚举鸡的数量
    for (int chicken = 0; chicken <= heads; chicken++) {
        int rabbit = heads - chicken;

        if (2 * chicken + 4 * rabbit == legs) {
            cout << "鸡：" << chicken << endl;
            cout << "兔：" << rabbit << endl;
            return;
        }
    }

    cout << "无解" << endl;
}

// 模拟交通信号灯
void rg_led() {
    // // 用Beep模拟声音
    // cout << "🔴 红灯" << endl;
    // Beep(400, 1000);  // 频率400Hz，持续1秒
    //
    // cout << "🟢 绿灯" << endl;
    // Beep(800, 1000);  // 频率800Hz

    while(true) {
        cout << "红灯 - 停！" << endl;
        Sleep(3000);    // 等待3秒（3000毫秒）

        cout << "黄灯 - 准备！" << endl;
        Sleep(1000);

        cout << "绿灯 - 走！" << endl;
        Sleep(3000);
    }
}


int main() {
    system("chcp 65001 > nul");
    // q1();
    // chickenRabbit(20,44);
    rg_led();
    return 0;
}