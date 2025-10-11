#include <iostream>
using namespace std;

void hello(int a){

    if(a==3) return;

    cout << "hello" << endl;
    a++;
    hello(a);

}

int main() {
    hello(1);
    return 0;
}