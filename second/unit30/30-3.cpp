#include <iostream>
using namespace std;

/**
 * 参数：一个整数
 * 返回：消耗的火柴数
 */
int huoCai(int x){
    // 定义一个变量用于存储火柴数
    int num = 0;

    // 使用一个数组存储每个数字需要的火柴数
    int arr[10] = {6,2,5,5,4,5,6,3,7,6};

    // 逐位计算火柴数
    while (x/10!=0){
        num+=arr[x%10];
        x=x/10;
    }
    num+=arr[x];

    // 返回火柴数
    return num;
}

/**
 * 火柴棒等式
 * 输入：整数n，表示拥有的火柴数
 * 输出：能拼成不同等式的数目
 */
int main(){

    // 定义三个变量， 用于存储等式的数据
    int a, b, c;

    // 接收输入（拥有的火柴数）
    int n;
    cin >> n;

    // 定义一个变量，存储结果
    int count = 0;

    // 循环枚举 A值
    for (a = 0; a <= 999 ; a++) {

        // 循环枚举 B值
        for(b = 0; b <= 999; b++){

            // 计算 c 的值
            c = a + b;

            // 判断消耗火柴数是否等于拥有的火柴数
            if(n == huoCai(a) + huoCai(b) + huoCai(c) + 4)
                count ++;
        }

    }

    // 输出火柴数
    cout << count ;

    return 0;
}