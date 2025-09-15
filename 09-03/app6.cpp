#include <iostream>
using namespace std;

/**
 * 条件判断, 按要求输出
 * 输出一组两位数，要求十位数只能是1~3，个位数只能是6~9。四个数字换一行。
 * 输入1，则每行最后有逗号；
 * 输入0，则每行最后无逗号。
 */
int main(){

    int flag;
    cin >> flag;

    int count = 0;

    for (int i = 1; i <= 3; ++i) {
        for (int j = 6; j <= 9; ++j) {
            cout << i << j ;

            // 借助计数器, 判断条件后输出
            count++;
            if (count%4 == 0){
                if (flag == 1) cout << ",";
                cout << endl;
            } else{
                cout << ",";
            }

        }
    }
    
    return 0;
}
