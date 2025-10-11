#include <iostream>
using namespace std;

int add(int a,int b) {
    a++;
    return a;
    return a+b;
}

int main() {
    cout << add(7,9);
    return 0;
}