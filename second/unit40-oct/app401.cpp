#include <iostream>
using namespace std;

/**
 * 第一题：矩阵对角求和
 */
int main(){

    // 输入
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            arr[i][j]= num;
        }
    }

    // 求和
    int sum1=0, sum2=0;
    for (int i = 0; i < n; ++i) {
        sum1 += arr[i][i];
        sum2 += arr[i][n-i-1];
    }

    // 输出
    cout << sum1 << endl << sum2;
    return 0;
}