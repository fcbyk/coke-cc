#include <iostream>

using namespace std;

// 幸运大抽奖
int main(){
    int a,b;
    int ren_shu = 0;
    cin >> a;

    for (int i = 1; i <= 6; ++i) {
        cin >> b;
        if(b%a == 0){
            ren_shu ++;
            cout << b << " ";
        }
    }

    cout << endl << ren_shu;
    return 0;
}