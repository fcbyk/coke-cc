#include <iostream>
using namespace std;

int hello() {
    cout << "Hello" << endl;
    return 10;
}

int main() {
    int b = hello() + 100;
    cout << b;
    return 0;
}