#include <iostream>
using namespace std;

// 打印 4*5 井号阵
int main(){

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++i) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}