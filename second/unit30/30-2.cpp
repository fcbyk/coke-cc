#include <iostream>

using namespace std;

/**
 * 数组元素的移动
 * 输入：整数n，一个整数数组，整数x
 * 输出：移动x次以后的结果
 */
int main(){

    // 定于变量，用于接收输入
    int n;
    int arr[100] = {};
    int x;

    // 接收输入
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> x;

    // 输出结果
    // 先输出移动的元素
    for (int i = n-x; i < n; ++i) {
        cout << arr[i] << " ";
    }
    // 输出未移动的元素
    for (int i = 0; i < n-x; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}