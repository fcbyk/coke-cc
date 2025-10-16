#include <iostream>
using namespace std;

void hello(int a){

    if(a==3) return;

    cout << "递阶段" << endl;
    hello(++a);
    cout << "归阶段" << endl;
}

int main() {
    hello(1);
    return 0;
}