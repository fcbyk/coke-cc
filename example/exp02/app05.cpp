#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    {
        int a = 30;
        cout << a+b << endl;
        {
            int b = 100;
            cout << a+b << endl;
        }
    }

    cout << a+b << endl;

    return 0;
}