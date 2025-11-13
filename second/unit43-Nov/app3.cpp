#include <iostream>
using namespace std;

// 16. 打印数字
void coutNum() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5 || i == 6) {
            continue; // 跳过5和6
        }
        cout << i << " ";
    }
    cout << endl;
}

// 17. 连续数字求和
void sumContinuousNumbers() {
    int num;
    int sum = 0;

    cout << "请输入数字（输入0结束）：" << endl;

    while (true) {
        cin >> num;

        if (num == 0) {
            break; // 输入0时退出循环
        }

        sum += num; // 累加数字
    }

    cout << "所有数字的总和为：" << sum << endl;
}

int main(){
    sumContinuousNumbers();
    return 0;
}