#include <iostream>
using namespace std;

/**
 * 全排列问题 - 回溯算法实现
 * 函数功能：打印数组所有可能的全排列
 * @param arr   待排列的整数数组
 * @param cur   当前处理到的位置索引（从0开始）
 * @param n     数组总长度
 * @note 时间复杂度：O(n!) 因为n个元素有n!种排列方式
 */
void permute(int arr[], int cur, int n) {
    // 基线条件：当处理到最后一个元素时，打印当前排列
    if (cur == n) {
        for (int i = 0; i < n; ++i) {
            cout << arr[i];  // 打印每个元素
        }
        cout << " ";
        return;
    }

    /**
     * 递归处理：
     * 1. 将当前位置元素与后续每个元素交换（包括自己）
     * 2. 递归处理下一个位置
     * 3. 交换回来恢复现场（回溯）
     */
    for (int i = cur; i < n; ++i) {
        swap(arr[cur], arr[i]);    // 选择当前元素arr[i]放到cur位置
        permute(arr, cur + 1, n);  // 递归处理cur+1位置开始的子数组
        swap(arr[cur], arr[i]);    // 撤销选择，尝试下一个可能
    }
}

int main() {

    int arr[] = {1, 2, 4};

    int size = sizeof(arr) / sizeof(arr[0]);  // 数组长度计算

    permute(arr, 0, size);

    return 0;
}