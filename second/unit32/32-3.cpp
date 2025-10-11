#include <iostream>
using namespace std;

// 杨辉三角
int main(){

    // 接收输入
    int n;
    cin >> n;

    // 先用二维数组保存杨辉三角
    int sanJiao[30][30] = {};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (i == 0 || j == 0) sanJiao[i][j] = 1;
            else sanJiao[i][j] = sanJiao[i-1][j-1] + sanJiao[i-1][j];
        }

    }

    // 输出杨辉三角
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << sanJiao[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}