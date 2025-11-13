#include <iostream>
using namespace std;

void secTOTime(int sec){
    int h = sec/3600;
    int m = sec%3600/60;
    int s = sec%60;
    // 计算分钟，秒
    cout
    << h << "小时"
    << m << "分钟"
    << s << "秒"
    << endl;
}

int main(){
    int s;
    cin >> s;
    secTOTime(s);
    return 0;
}
// 关系运算符
void demo1(int a = 10, int b = 20) {
    cout << ( a>b ) << endl;
    cout << ( a<b ) << endl;
    cout << ( a==b ) << endl;
    cout << ( a>=b ) << endl;
    cout << ( a<=b ) << endl;
    cout << ( a!=b ) << endl;
}

void demo2() {
                int a = 10;
                int b = 20;
    cout << (   a+1>b                        ) << endl;
    cout << (   a<b-10                          ) << endl;
    cout << (   a==(b-=10)                              ) << endl;
    cout << (   a++>=b                          ) << endl;
    cout << (   --a<=b                           ) << endl;
    cout << (   a!=b<10                          ) << endl;
}


int main() {
    demo2();
    return 0;
}
