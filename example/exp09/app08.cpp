#include <iostream>
using namespace std;

// 多级指针，不要求掌握
int main() {
    int x = 5;
    int *p = &x;
    int **pp = &p;
    **pp = 10;
    cout << x << endl;
    return 0;
}