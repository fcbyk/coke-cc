#include <iostream>
using namespace std;

int big(int a) {
    return a+10;
}

int main() {
    cout << big(big(5+5));
    return 0;
}