#include <iostream>
using namespace std;

/**
 * 分数加减法
 * 示例输入：1/8+3/8
 * 示例输出：1/2
 */
int main(){

    // n为新分子，m为新分母
    int a,b,c,d,n,m;
    char o;

    while (scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d)!=EOF){
        m = b*d;
        a = a*d;
        c = c*b;
        if (o == '+') n = a+c;
        else if ( o == '-') n = a-c;
        if (n==0){
            cout << 0 << endl;
            continue;
        }
        if (n<0){
            cout << "-";
            n = -n;
        }

        // 求最大公约数
        int tn = n, tm = m;
        while (tn%tm!=0){
            int  r = tn%tm;
            tn = tm;
            tm = r;
        }

        // 输出结果
        if (m/tm == 1){
            cout << n/tm << endl;
        } else{
            cout << n/tm << "/" << m/tm << endl;
        }
    }

    return 0;
}