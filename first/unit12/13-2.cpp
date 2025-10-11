#include <iostream>
using namespace std;

// 每天进步一点点
int main(){
    double n = 60;
    for (int i = 1; i <= 30; ++i) {
        n *= 1.01;
    }
    cout << n << endl;
    return 0;
}