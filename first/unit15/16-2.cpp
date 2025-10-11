#include <iostream>
using namespace std;

int main(){
    // 多少个石头
    int st = 0;
    // 字符
    char zf;
    while (cin >> zf){
        if (zf != '$') st++;
        else break;
    }

    cout << st;
    return 0;
}

