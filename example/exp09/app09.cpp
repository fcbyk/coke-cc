#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    char *p = str;
    p += 2;
    cout << *p << endl;
    return 0;
}