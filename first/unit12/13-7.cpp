#include <iostream>
using namespace std;

// 正常血压
int main(){
    int n;
    cin >> n;
    double num, zuiJing=0,count = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        if (num > 90 && num < 140){
            count++;
        } else if(num <=90 || num >= 140){
            zuiJing = count;
            count = 0;
        }
    }
    if (count!=0) zuiJing = count;
    cout << zuiJing;
    return 0;
}