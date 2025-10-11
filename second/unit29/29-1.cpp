#include <iostream>
using namespace std;

/**
 * 火柴棒问题
 * 输入：n根火柴
 * 输出：可以拼成多少个等式（A+B=C）
 */
int main(){

    // 使用一个数组存储每个数字需要的火柴数
    int huoCai[10] = {6,2,5,5,4,5,6,3,7,6};

    // 定义三个变量，拥有的火柴数，消耗的火柴数，方案数
    int n, sum, ans = 0;
    cin >> n;

    // 循环枚举 A值
    for (int a = 0; a <= 9 ; a++) {

        // 循环枚举 B值
        for(int b = 0; b <= 9; b++){
            sum = 0;

            // 如果和是两位数，消耗的火柴数需要加上十位的消耗
            if(a+b>=10){
                sum += huoCai[(a+b)/10];
            }

            // 消耗的火柴数 = A的火柴数 + B的火柴数 + 结果的火柴数（个位） + 4
            sum += huoCai[a] + huoCai[b] + huoCai[(a+b)%10] + 4;

            // 如果消耗的火柴数等于拥有的火柴数，方案数 + 1
            if(sum == n){
                cout << a << "+" << b << "=" << a+b << endl;
                ans++;
            };
        }

    }

    // 输出火柴数
    cout << ans;

    return 0;
}