#include <iostream>
#include <algorithm>
using namespace std;

// 定义hello函数
void hello(){
    cout << "Hello World!" << endl;
}

// 找最大值
int imax(int a,int b){
    if (a>b) return a;
    else return b;
}

// 判断素数
int isShuSu(int a){
    for (int i = 2; i < a; ++i) {
        if (a%i == 0) return 0;
    }
    return 1;
}

int add(int a,int b){
    return a + b;
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

string huiWen(int a){
    if(   isShuSu( a ) && isShuSu( rNum(a) )  ){
        return "yes";
    } else {
        return "no";
    }
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
    // 数组相关
    int b[] = {213,323,31,23,23,234,4234,234,234};
    coutShuZhu(b,9);

    // 排序
    sort(b,b+9);
    coutShuZhu(b,9);
}