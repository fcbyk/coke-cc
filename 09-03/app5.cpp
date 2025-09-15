#include <iostream>
using namespace std;

/**
 * 输入两个正整数 a 和 b , 求它们的最小公倍数
 */
int main(){
    int a,b;
    cin >> a >> b;
    for (int i = max(a,b); i <= a*b; i++) {
        if (i%a == 0 && i%b == 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}