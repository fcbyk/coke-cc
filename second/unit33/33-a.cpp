#include <iostream>
#include <algorithm>
using namespace std;

// hello函数
void hello(){
    cout << "hello world" << endl;
}

// 找最大值
int imax(int a,int b){
    if (a>b) return a;
    else return b;
}

// 判断素数
int isPrime(int a){
    for (int i = 2; i < a; ++i) {
        if (a%i == 0) return 0;
    }
    return 1;
}

// 倒序数
int rNum(int num){
    int res = 0;
    while (num != 0) {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}


// 打印数组
void coutShuZhu(int shuZu[],int size){
    for (int i = 0; i < size; i++) {
        cout << shuZu[i] << " ";
    }
    cout << endl;
}

// 调用函数
int test(){

    // 直接调用
    hello();

    // 输出返回值
    cout << rNum(12345) << endl;

    // 返回值参与运算
    int a = imax(50,100) + rNum(321);
    cout << a << endl;

    // 返回值作为其他函数的参数（嵌套调用）
    cout << rNum(imax(55, 122)) << endl;

    // 返回值作为条件
    if (isPrime(17)) {
        cout << "17是素数" << endl;
    }

    // 数组相关
    int b[] = {213,323,31,23,23};
    coutShuZhu(b,5);

    // 内置排序函数
    sort(b,b+5);
    coutShuZhu(b,5);
}