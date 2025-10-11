#include <iostream>
using namespace std;

// 斐波那契数列
int main(){

    int k;
    cin >> k;

    int a = 1,b = 1,c = 0;

    if (k == 1 || k == 2){
        cout << 1;
    } else {
        for (int i = 3; i <= k; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c;
    }
    return 0;
}

