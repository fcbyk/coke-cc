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