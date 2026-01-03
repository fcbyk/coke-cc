
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 获取糖果数量
    int n;
    cin >> n;

    // 获取糖果颜色的序列
    vector<int> list;
    for (int i = 0; i < n; i++) {
        int candy;
        cin >> candy;

        // 直接忽略黄色糖果
        if (candy != 1) {
            list.push_back(candy);
        }
    }

    // 枚举找最大值区间
    int maxlike = 0;    // 当前最大的喜爱值
    int sum = 0;    // 子序列的和
    for (int start = 0; start < list.size(); start++) {   // 开始指针
        for (int end = start; end < list.size(); end++) {   // 结束指针

            sum = 0;    // sum清零

            // 求[start,end]的和
            for (int i = start; i < end; i++) {
                if (list[i] == 0) sum += 5;
                if (list[i] == 2) sum += 10 + 1;
                if (list[i] == 3) sum += 7;
                if (list[i] == 4) sum += 1 - 2;
            }

            // 如果是最后一次，那对后面的糖果无影响
            if (list[end] == 0) sum += 5;
            if (list[end] == 2) sum += 10;
            if (list[end] == 3) sum += 7;
            if (list[end] == 4) sum += 1;

            // 当前子段是否大于最大值
            maxlike = max(sum, maxlike);
        }
    }

    // 输出结果
    cout << maxlike << endl;
    return 0;
}

/**

7
2 1 3 4 4 4 1

11+7-1-1-1+5
*/