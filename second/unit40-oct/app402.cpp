#include <iostream>
using namespace std;

/**
 * 第二题：评等级
 */

// 定义结构体
struct student{
    int id;
    int scoreA;
    int scoreB;
    int scoreC;
    int scoreAB() const{
        return scoreA + scoreB;
    };
};

int main(){

    // 输入
    int n;
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].id >> arr[i].scoreA >> arr[i].scoreB;
        arr[i].scoreC = arr[i].scoreA + arr[i].scoreB;
    }

    // 输出结果
    for (auto item:arr) {
        if (item.scoreAB() > 140 && item.scoreC >= 80){
            cout << "Excellent\n";
        } else{
            cout << "Not excellent\n";
        }
    }

    return 0;
}