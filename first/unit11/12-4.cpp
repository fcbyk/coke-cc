#include <iostream>

using namespace std;

int main(){
    double max = 0;

    for (int i = 1; i <= 10; ++i) {
        double temp;
        cin >> temp;
        if (temp > max){
            max = temp;
        }
    }

    cout << max;
    return 0;
}
