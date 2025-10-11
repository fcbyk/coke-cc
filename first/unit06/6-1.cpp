#include <iostream>
using namespace std;
int main(){

    // 定义一个变量存储分数
    int score;
    cin >> score;

    // 判断分数是不是在70-80这个区间
    if (score >= 70 && score <= 80) cout << "yes";
    else cout << "no";

    return 0;
}

