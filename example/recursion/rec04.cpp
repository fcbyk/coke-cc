#include <iostream>
using namespace std;

void hello(int a){

    if(a==4) return;

    cout << a << endl;
    a = a + 2;
    hello(a);
}

int main() {
    hello(0);
    return 0;
}