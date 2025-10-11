#include <iostream>

using namespace std;

int main(){

    // 接收输入
    int a;
    cin >> a;

    int weiShu = 0;

    while (a!=0){
        a = a/10;
        weiShu++;
    }

    return 0;
}