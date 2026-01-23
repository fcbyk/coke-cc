#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 期末测评第二题，数组最值
int main() {

    // 输入
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 找最值
    // int maxNum = *max_element(arr.begin(), arr.end());
    // int minNum = *min_element(arr.begin(), arr.end());

    int maxNum = arr[0];
    int minNum = arr[0];
    for (int item:arr) {
        // maxNum = max(maxNum, item);
        // minNum = min(minNum, item);

        maxNum = item > maxNum ? item : maxNum;
        minNum = item < minNum ? item : minNum;
    }

    // 输出结果
    cout << "最大值：" << maxNum << endl;
    cout << "最小值：" << minNum << endl;

    return 0;
}
