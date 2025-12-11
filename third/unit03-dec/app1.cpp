#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// 构建前缀和数组  (或 从差分恢复)
void getPrefixSum(const long long arr[], int n, long long prefix[]) {
    if (n == 0) return;

    prefix[0] = arr[0];     // 第一个元素不变
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

// 构建差分数组
void getDiffArr(const long long arr[], int n, long long diff[]) {
    if (n == 0) return;

    diff[0] = arr[0];       // 第一个元素不变
    for (int i = 1; i < n; i++) {
        diff[i] = arr[i] - arr[i - 1];
    }
}

// 练习1：差分
void q1(){
    // 第一行输入
    int n,m;
    cin >> n >> m;

    // 第二行输入
    long long arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // 构建差分数组
    long long diffArr[n];
    getDiffArr(arr, n, diffArr);

    // m次操作（题目下标从1开始）
    for (int i = 0; i < m; ++i) {
        int l,r,c;
        cin >> l >> r >> c;
        l--,r--;    // 转下标由0开始

        // 修改差分数组
        diffArr[l] += c;
        if (r+1<n) diffArr[r+1] -= c;
    }

    // 从差分数组恢复为原数组
    getPrefixSum(diffArr,n,arr);

    // 输出修改后的数组
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 练习2：海底高铁
void q2(){
    // 第一行输入
    int n, m;
    cin >> n >> m;

    // 第二行输入，城市的访问顺序
    int p[m];
    for (int i = 0; i < m; ++i) {
        cin >> p[i];
        p[i]--;     // 转 0-based
    }

    // 铁路信息输入
    int A[n-1],B[n-1],C[n-1];
    for (int i = 0; i < n-1; ++i) {
        cin >> A[i] >> B[i] >> C[i];
    }

    // 使用差分数组统计每段铁路的访问次数
    long long diff[n];
    memset(diff, 0, sizeof(diff));  // 初始化为0

    // 遍历每一次行程
    for (int i = 0; i < m-1; i++) {
        int from = p[i];
        int to = p[i+1];

        // 确保 from < to
        if (from > to) {
            swap(from, to);
        }

        // 对区间 [from, to) 的所有铁路段+1
        diff[from]++;    // 左端点+1
        diff[to]--;      // 右端点-1
    }

    // 差分数组恢复原数组，得到每段铁路的实际访问次数
    long long passCount[n-1];     // 前n-1个是铁路段
    getPrefixSum(diff,n-1,passCount);

    // 计算最小总花费
    long long total = 0;
    for (int i = 0; i < n-1; i++) {

        // 方案1：每次都买纸质票
        long long cost1 = passCount[i] * A[i];

        // 方案2：办IC卡
        long long cost2 = C[i] + passCount[i] * B[i];

        // 选择便宜的方案
        total += min(cost1, cost2);
    }

    cout << total << endl;
}

int main(){
    q2();
    return 0;
}

/*   题目1 - 测试用例
输入：
6 3
1 2 2 1 2 1
1 3 1
3 5 1
1 6 1
输出：
3 4 5 3 4 2
*/

/*   题目2 - 测试用例
输入：
9 10
3 1 4 1 5 9 2 6 5 3
200 100 50
300 299 100
500 200 500
345 234 123
100 50 100
600 100 1
450 400 80
2 1 10
输出：
6394
*/