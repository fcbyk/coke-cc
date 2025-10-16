#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;
    int *p = &a;

    cout << a << endl;

    *p = 10;
    cout << a << endl;

    p = &b;
    *p = 20;
    cout << a << " " << b << endl;

    return 0;
}