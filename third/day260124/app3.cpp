#include <iostream>
using namespace std;

// 期末测评第三题，鸡兔同笼
int main() {

    // 总脚数
    int foot = 60;

    for (int c = 1; c <= foot/2; c++) {
        for (int r = 1; r <= foot/4; r++) {
            if (2*c + 4*r == foot) {
                cout << c << " "<< r << endl;
            }
        }
    }

    return 0;
}
