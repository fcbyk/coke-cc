#include <iostream>
#include <algorithm> // 用于sort函数
using namespace std;

// 15. 交换两个整型变量的值
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 16. 打印数组的所有元素
void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i];
        if (i < length - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

// 17. 将数组按升序排列
void sortArray(int arr[], int length) {
    sort(arr, arr + length);
}

// 18. 将数组中每个元素的值都加上n
void addToArray(int arr[], int length, int n) {
    for (int i = 0; i < length; i++) {
        arr[i] += n;
    }
}

int main(){
    int arr[] = {123,23,4,23,45,26};
    sortArray(arr,6);
    printArray(arr,6);
    return 0;
}
