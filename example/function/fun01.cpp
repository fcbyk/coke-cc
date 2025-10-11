#include <iostream>
using namespace std;

int hello() {
    cout << "Hello" << endl;
    return 10;
}

int main() {
    hello();
    hello();
    return 0;
}