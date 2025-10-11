#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *p = &num;
    cout << *p << endl;
    return 0;
}