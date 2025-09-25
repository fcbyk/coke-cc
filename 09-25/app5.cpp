#include <iostream>
using namespace std;

// 定义时间结构体
struct gameTime{
    int begin;
    int end;
};

/**
 * 小黑的不眠计划
 */
int main(){

    int n,count = 0;
    gameTime a[100];

    // 接收输入
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].begin >> a[i].end;
    }

    // 按结束时间排序
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (a[j].end > a[j+1].end){
                swap(a[j],a[j+1]);
            }
        }
    }

//    打印 gameTime 数组
//    for (int i = 0; i < n; ++i) {
//        cout << a[i].begin << " " << a[i].end << endl;
//    }

    // 检查开始时间是否大于上一个游戏的结束时间
    gameTime temp = a[0];
    count++;
    for (int i = 1; i < n; ++i) {
        if (a[i].begin >= temp.end){
            temp = a[i];
            count++;
        }
    }

    // 打印结果
    cout << count;

    return 0;
}