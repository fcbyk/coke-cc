#include <iostream>

using namespace std;

// 定义函数
void hi(){
    cout <<  "hello";
}

// 加法函数
int add(int a,int b){
    return a+b;
}

// 判断素数
bool isShuSu(int a){
    for (int i = 2; i < a; ++i) {
        if (a%i == 0) return false;
    }
    return true;
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

string ssHuiWen(int a){
    if(  isShuSu(a) && isShuSu(  rNum(a)  )  ){
        return "yes";
    } else{
        return "no";
    }
}


// 调用函数
int main1(){

    // 直接调用
    cout << ssHuiWen(13);


    return 0;
}