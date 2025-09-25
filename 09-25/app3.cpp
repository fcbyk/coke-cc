#include <iostream>
#include <cstring>
using namespace std;

// 定义学生结构体
struct Student{
    string name;
    int count;
};

/**
 * 班长竞选
 */
int main(){

    // 竞选者数组
    Student monitor[3] = {
            {"小黑",0},
            {"小红",0},
            {"小蓝",0}
    };

    // 统计投票
    string voteName;
    for (int i = 0; i < 7; ++i) {
        cin >> voteName;
        for (int j = 0; j < 3; ++j) {
            if (voteName == monitor[j].name){
                monitor[j].count++;
            }
        }
    }

    // 打印投票
    for (int i = 0; i < 3; ++i) {
        cout << monitor[i].name << " " << monitor[i].count << endl;
    }

    return 0;
}