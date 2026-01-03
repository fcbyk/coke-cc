#include <iostream>
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


int main() {
    system("chcp 65001 > nul");
    // q1();
    // chickenRabbit(20,44);
    return 0;
}