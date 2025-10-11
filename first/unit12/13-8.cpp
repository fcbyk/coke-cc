#include <iostream>

using namespace std;

int main(){
    int pm = 1;
    int xtcj,rs,cj;

    cin >> rs >> xtcj;

    for (int i = 0; i < rs-1; ++i) {
        cin >> cj;
        if(cj>xtcj) pm++;
    }

    cout << pm;

    return 0;
}