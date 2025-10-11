#include <iostream>
using namespace std;

// 魔方阵
int main(){
    // 接收输入n
    int n;
    cin >> n;

    // 接收 n*n 矩阵输入
    int juZhen[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> juZhen[i][j];
        }
    }

    // 计算第一行的和，用于比较
    int target = 0 ;
    for (int i = 0; i < n; ++i) {
        target += juZhen[0][i];
    }

    // 判断每行是否相等
    for (int i = 0; i < n; ++i) {
        int temp  = 0;
        for (int j = 0; j < n; ++j) {
            temp +=juZhen[i][j];
        }
        if (temp != target){
            cout << "no";
            return 0;
        }
    }

    // 判断每列是否相等
    for (int i = 0; i < n; ++i) {
        int temp  = 0;
        for (int j = 0; j < n; ++j) {
            temp +=juZhen[j][i];
        }
        if (temp != target){
            cout << "no";
            return 0;
        }
    }

    // 判断对角线是否相等
    int duiJiao1 = 0;
    int duiJiao2 = 0;
    for (int i = 0; i < n; ++i) {
        duiJiao1 += juZhen[i][i];
        duiJiao2 += juZhen[i][n-1-i];
    }
    if (duiJiao1 != target || duiJiao2 != target){
        cout << "no";
        return 0;
    }

    cout << "yes";

    return 0;
}
