#include <iostream>

using namespace std;

int main(){

    int year;
    cin >> year;

    bool a = year%4 == 0;
    bool b = year%100 != 0;
    bool c = year%400 == 0;

    if (  (a&&b) || c  ){
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}