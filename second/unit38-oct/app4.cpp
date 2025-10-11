#include <iostream>
using namespace std;

// 定义学生结构体
struct Student{
    int num;
    string name;
    float score[3];
    float ave;
};

/**
 * 分数最高的学生
 */
int main(){

    Student stu[3];

    // 接收输入，并计算平均分
    for (int i = 0; i < 3; ++i) {
        cin >> stu[i].num >> stu[i].name;
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            cin >> stu[i].score[j];
            sum+=stu[i].score[j];
        }
        stu[i].ave = sum/3.0;
    }
    
    // 找平均分最高的学生
    int top = 0;
    for (int i = 0; i < 3; ++i) {
        if (stu[i].ave > stu[top].ave) top = i;
    }
    
    // 输出结果
    cout << stu[top].num << endl;
    cout << stu[top].name << endl;
    for (int i = 0; i < 3; ++i) {
        cout << stu[top].score[i] << " ";
    }
    cout << endl << stu[top].ave;

    return 0;
}