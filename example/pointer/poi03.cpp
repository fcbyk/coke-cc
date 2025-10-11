#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    int *p = &x;
    p = &y;
    cout << *p << endl;
    return 0;
}