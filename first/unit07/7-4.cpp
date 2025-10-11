#include <iostream>

using namespace std;

int main(){
    // 输入包裹重量
    double a;
    cin >> a;

    // 计算运费
    if(a<15){
        cout << a*6;
    } else{
        cout << 15*6+(a-15)*9;
    }
    return 0;
}