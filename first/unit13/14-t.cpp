#include <iostream>

using namespace std;

// 判断位数
int q1(){
    int num,weishu = 0;
    cin >> num;

    while (num != 0){
        weishu++;
        num = num/10;
    }

    cout << weishu;

    return 0;
}

// 判断回文数
int q2(){

    // 接收一个数的输入
    int start;
    cin >> start;

    // 把开始的数倒过来
    int end = 0;
    int startc = start;
    while(startc != 0){
        end = end * 10 + startc%10;
        startc = startc/10;
    }

    // 判断开始的数 和 倒过来的数是否相等
    if (start == end){
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}

// 循环求和
int q3(){
    int n;
    cin >> n;

    int sum = 0;
    while(n!=0){
        sum += n;
        n--;
    }

    cout << sum;
    return 0;
}

// 区间求和
int q4(){
    int a,b;
    cin >> a >> b;

    int sum = 0;
    while(a<=b){
        sum += a;
        a++;
    }

    cout << sum;

    return 0;
}

// 最高的分数
int q5(){
    double num, max = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        if (num > max){
            max = num;
        }
    }
    cout << max;
    return 0;
}

// 奇偶数之和
int main(){
    int n,s1=0,s2=0;
    cin >> n;

    while (n!=0){
        if (n%2 == 0) s2 += n;
        else s1 +=n;
        n--;
    }

    cout << s1 << endl << s2;

    return 0;
}