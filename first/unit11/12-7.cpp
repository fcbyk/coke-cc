#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "输入金字塔层数：";
    cin >> n;

    for (int i = 1; i <= n; i++) {  // 外层循环控制行数（1到n）
        // 1. 打印左侧空格（每行空格数为n-i）
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // 2. 打印左侧升序数字（从1到i）
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // 3. 打印右侧降序数字（从i-1到1）
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // 换行进入下一行
        cout << endl;
    }

    return 0;
}