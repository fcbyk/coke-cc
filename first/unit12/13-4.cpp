#include <iostream>
using namespace std;

// 阶乘
int main(){
    int n;
    cin >> n;
    long long jieGuo = 1;
    for (int i = 1; i <= n; ++i) {
        jieGuo *= i;
    }
    cout << jieGuo;
    return 0;
}