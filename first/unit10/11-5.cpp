#include <iostream>
using namespace std;

int main() {
    int m, d;
    cin >> m >> d;

    int days = d;

    switch(m - 1) {
        case 11: days += 30;
        case 10: days += 31;
        case 9: days += 30;
        case 8: days += 31;
        case 7: days += 31;
        case 6: days += 30;
        case 5: days += 31;
        case 4: days += 30;
        case 3: days += 31;
        case 2: days += 29;
        case 1: days += 31;
    }

    cout << days << endl;
    return 0;
}