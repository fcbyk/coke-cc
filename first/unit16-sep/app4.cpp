#include <iostream>
using namespace std;

/**
 * 输入两个正整数 a 和 b , 求它们的最大公约数
 */
int main(){
    int a,b;
    cin >> a >> b;

    // 检查输入是否为正整数
    if (a <= 0 || b <= 0) {
        cout << "输入必须为正整数！" << endl;
        return 1;  // 非正常退出
    }

    // 从较小的数开始递减检查
    for (int i = min(a,b); i > 0; i--) {
        if (a%i == 0 && b%i == 0){
            cout << i;
            return 0;
        }
    }
    return 0;
}
