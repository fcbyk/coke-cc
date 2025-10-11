#include <iostream>
using namespace std;

// 梦想直通车
int main(){

    // 接收 m，n的输入
    int m,n;
    cin >> m >> n;

    // 接收数组输入
    int duiWu[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> duiWu[i][j];
        }
    }

    // 找出绝对值最大的数
    int max = 0;
    int max_m = 0;
    int max_n = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (abs(duiWu[i][j]) > abs(max)){
                max = duiWu[i][j];
                max_m = i + 1;
                max_n = j + 1;
            }
        }
    }

    // 输出结果
    cout << max_m << " " << max_n << " " << max;

    return 0;
}