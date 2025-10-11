#include <iostream>

using namespace std;

int main(){
    int a;

    a = 0;
    a = a + 10;  // 10
    a = a - 5;
    a = a * 100;
    a = a / 2;
    a = a % 100;
    cout << a << endl;


    a = 0;
    a += 10;
    a -= 5;
    a *= 100;
    a /= 2;
    a %= 100;
    cout << a << endl;

    return 0;
}

