#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b; // 降序排序
}

/**
 * 苹果摘陶陶
 * 输入：苹果数量n，陶陶数量m，各苹果高度，各陶陶高度
 * 输出：剩下陶陶的数量
 */
int main(){

    // 定义变量接收输入
    int n,m;
    cin >> n >> m;

    // 接收 n行，各个苹果能够到高度
    int n_arr[2000] = {};
    for (int i = 0; i < n; ++i) {
        cin >> n_arr[i];
    }

    // 接收 m行，各个陶陶的高度
    int m_arr[2000] = {};
    for (int i = 0; i < m; ++i) {
        cin >> m_arr[i];
    }

    // 排序
    sort(n_arr, n_arr+n, compare);
    sort(m_arr, m_arr+m, compare);

    // 定义一个变量，存储结果
    int ans = m;

    // 双指针法：i指向苹果，j指向陶陶
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (n_arr[i] > m_arr[j]) {
            // 当前苹果可以摘当前陶陶
            ans--;
            i++; // 这个苹果摘完了，换下一个
            j++; // 这个陶陶被摘了，换下一个
        } else {
            // 当前苹果摘不了当前陶陶，尝试更小的陶陶
            j++;
        }
    }

    // 输出结果
    cout << ans;

    return 0;
}