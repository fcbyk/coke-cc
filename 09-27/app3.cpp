#include <iostream>
using namespace std;

/**
 * 蛇爬树
 */
int main(){

    // 接收输入
    int a,b,v;
    cin >> a >> b >> v;

    // 计算天数
    int day = 1;
    int height = 0;
    while (height<v){
        height+=a;
        if (height >= v) break;
        height-=b;
        day++;
    }

    // 输出结果
    cout << day;

    return 0;
}