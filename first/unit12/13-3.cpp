#include <iostream>

using namespace std;

// 体能训练
int main(){
    int n;
    cin >> n;
    double ti_neng = 10;
    for (int i = 1; i <= n; ++i) {
        ti_neng *= 1.1;
    }
    cout << ti_neng;
    return 0;
}