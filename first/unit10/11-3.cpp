#include <iostream>
using namespace std;

/**
 * 输入：两个实数
 * 输出：yes 或 no
 */
int main(){
    int a,b;
    cin >> a >> b;

    if(a==100 || b==100){
        cout << "yes";
    } else{
        cout << "no";
    }

    return 0;
}
