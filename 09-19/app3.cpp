#include <iostream>
using namespace std;

// 交换两个变量的值
void mySwap(int *x, int *y) {
    // 解指针
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    mySwap(&a, &b); // 传递地址

    cout << a << " " << b << endl;
    return 0;
}