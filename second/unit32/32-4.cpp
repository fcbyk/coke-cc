#include <iostream>
#include <iomanip>

using namespace std;

// 仙人球的残影
int main(){

    // 接收输入
    int n;
    cin >> n;

    // 定义一个二维数组保存残影
    int canYin[10][10] = {};

    // 第一行残影
    int num = 1;
    for (int i = 0; i < n; ++i) {
        canYin[0][i] = num++;
    }

    // 最后一列残影
    for (int i = 1; i < n; ++i) {
        canYin[i][n-1] = num++;
    }

    // 最后一行残影
    for (int i = n-2; i >= 0; i--) {
        canYin[n-1][i] = num++;
    }

    // 第一列的残影
    for (int i = n-2; i > 0; i--) {
        canYin[i][0] = num++;
    }

    // 格式化输出
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (canYin[i][j]) cout << left << setw(3) << canYin[i][j];
            else cout << left << setw(3) << " ";
        }
        cout << endl;
    }

    return 0;
}