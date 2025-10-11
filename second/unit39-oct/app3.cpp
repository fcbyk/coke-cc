#include <iostream>
#include <vector>
using namespace std;

/**
 * 幸运数字
 */
vector<int> precompute(int max_size) {

    // 幸运数字序列
    vector<int> luckyNumbers;

    // 编号从2开始初始化序列
    vector<int> seq;
    for (int i = 2; i < max_size; i++) {
        seq.push_back(i);
    }

    // 从seq中找幸运数字
    while (!seq.empty()) {

        // 首个元素是幸运数字
        int k = seq[0];
        luckyNumbers.push_back(k);

        // 每 k 个人，淘汰一位
        vector<int> newSeq;
        int count = 0; // 计数器，从seq[1]开始数
        for (size_t i = 1; i < seq.size(); i++) {
            count++;
            if (count % k != 0) {
                // 不是第k个人，保留
                newSeq.push_back(seq[i]);
            }
            // 第k个人被淘汰（不加入newSeq）
        }

        // 更新数组
        seq = newSeq;
    }

    return luckyNumbers;
}

int main() {

//    for (int i = 0; i < 20; ++i) {
//        cout << precompute(10000)[i] << endl;
//    }

    int n;
    while (cin >> n && n != 0) {
        cout << precompute(10000)[n-1] << endl;
    }

    return 0;
}