#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << a++ << endl;
    cout << ++a << endl;

    a = 3;
    int b = 3;
    int c = b-- + --a;
    cout << c << endl;
    return 0;
}
