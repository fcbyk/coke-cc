#include <iostream>
using namespace std;

int main() {
    int a = 5;
    {
        int a = 10;
        cout << a;
    }
    cout << a;
    return 0;
}