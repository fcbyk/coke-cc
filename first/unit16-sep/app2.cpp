#include <iostream>
#include <iomanip>  // 格式化输入/输出
using namespace std;

/**
 * 打印九九乘法表
 */
int main(){
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << "x" << j << "=" <<  setw(2) << left << i*j << " ";
        }
        cout << endl;
    }
    return 0;
}

