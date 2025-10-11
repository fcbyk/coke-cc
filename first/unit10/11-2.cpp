#include <iostream>
using namespace std;

/**
 * 输入：一个整数
 * 输出：yes 或 no
 */
int main(){
    int a;
    cin >> a;

    if(a%3==0 && a%5==0 && a%7==0){
        cout << "yes";
    } else{
        cout << "no";
    }

    return 0;
}