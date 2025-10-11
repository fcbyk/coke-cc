#include <iostream>
using namespace std;

int myMinus(int a = 100, int b = 200) {
    int result = a - b;
    return result;
}

int main() {
    int hhh = myMinus() + myMinus(300,100);
    cout << hhh;
    return 0;
}