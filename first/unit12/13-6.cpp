#include <iostream>
using namespace std;

// 统计数字
int main(){
    int n , num;
    cin >> n;
    int count3 = 0 , count4 = 0, count5 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if(num < 1000) count3++;
        else if (num < 10000) count4++;
        else count5++;
    }
    cout << count3 << " " << count4 << " " << count5;
    return 0;
}
