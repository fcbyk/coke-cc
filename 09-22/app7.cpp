#include <iostream>
using namespace std;

// 分数约分
int main(){

    // 接收输入
    int a,b;
    cin >> a >> b;

    // 找最大公约数
    int n = a, m = b;
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    
    // 输出结果
    cout << a/n << " " << b/n;

    return 0;
}