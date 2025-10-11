#include <iostream>

using namespace std;

int main(){
    double high = 0;
    double sum = 0;
    double temp;

    for (int i = 1; i <=10; ++i) {
        cin >> temp;
        sum += temp;
        if (temp >= 35){
            high++;
        }
    }

    cout << high << endl;
    cout << sum/10;
    return 0;
}