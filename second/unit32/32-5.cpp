#include <iostream>
using namespace std;

// 矩阵旋转
int main(){

    // 接收4*4矩阵输入
    int juZhenA[4][4];
    int juZhenB[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> juZhenA[i][j];
        }
    }

    // 矩阵顺时针旋转,并输出
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            juZhenB[i][j] = juZhenA[3-j][i];
        }
    }

    // 输出旋转后的矩阵
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << juZhenB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


//    for (int i = 0; i < 4; ++i) {
//        for (int j = 3; j >= 0; j--) {
//            cout << juZhenA[j][i] << " ";
//        }
//        cout << endl;
//    }