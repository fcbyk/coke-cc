#include <iostream>
using namespace std;

int main() {

    int a;
    cin >> a;

    if(a>100 || a<0){
        cout << "err";
        return 0;
    }

    if(a>=90){
        cout << "A";
    }else if(a>=80){
        cout << "B";
    } else if(a>=70){
        cout << "C";
    }


    return 0;
}