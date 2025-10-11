#include <iostream>
using namespace std;

void hello(){
    cout << "hello" << endl;
    hello();
    cout << "world" << endl;
}

int main() {
    hello();
    return 0;
}