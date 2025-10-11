#include <iostream>
using namespace std;

/**
 * 小白找小企鹅
 * 小白的体重是6KG，它前面的有5块冰
 * 输入：每块冰的承重
 * 输出：小白能否过河见到小企鹅
 */
int main1(){

    int i = 1;
    int chengZhong;
    bool flag = true;
    while (i <= 5){
        cin >> chengZhong;
        if (6 > chengZhong){
            // 落水
            flag = false;
        } else{
            // 没落水
        }
        i++;
    }

    // 根据 flag 输出结果
    if (flag){
        cout << "能找到企鹅";
    } else{
        cout << "落水了，不能没找到企鹅";
    }

    return 0;
}
