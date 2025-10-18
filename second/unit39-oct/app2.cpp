#include <iostream>
#include <list>
using namespace std;

// 遍历 list
void coutList(list<int> mylist) {
    for (auto el : mylist) {
        cout << el << " ";
    }
    cout << endl;
}

/**
 * 约瑟夫环
 */
int josephus(int n, int m) {
    if (n <= 0 || m <= 0) return -1; // 处理无效输入

    list<int> people;

    // 初始化列表：1, 2, 3, ..., n
    for (int i = 1; i <= n; ++i) {
        people.push_back(i);
    }

    // coutList(people);

    auto it = people.begin();

    while (people.size() > 1) {
        // 数到第 m 个人
        for (int count = 1; count < m; ++count) {
            ++it;
            // 如果到达末尾，回到开头（循环列表）
            if (it == people.end()) {
                it = people.begin();
            }
        }

        // 删除当前节点（出列）
        it = people.erase(it);

        // 如果删除的是最后一个元素，迭代器会失效，需要重置到开头
        if (it == people.end()) {
            it = people.begin();
        }
    }

    // 返回最后剩下的人
    return people.front();
}

int main() {

    // 接收用户输入
    int n, m;
    cout << "请输入总人数: ";
    cin >> n;
    cout << "请输入报数: ";
    cin >> m;

    // 打印结果
    int lastPerson = josephus(n, m);
    cout << "最后出列的人的编号是: " << lastPerson << endl;

    return 0;
}