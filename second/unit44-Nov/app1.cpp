#include <iostream>
#include <algorithm>  // 用于内置sort函数
#define MAX 1000
using namespace std;

// 打印数组
void coutArr(int arr[],int len){
    if (len == 0) {
        cout << "数组为空" << endl;
        return;
    }
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 在数组末尾插入元素
void push(int arr[],int *len,int value) {
    if (*len >= MAX) {
        cout << "错误：数组已满，无法插入元素" << endl;
        return;
    }
    arr[*len] = value;
    *len++;
}

// 在指定位置插入元素
void insert(int arr[],int *len,int index, int value) {
    if (*len >= MAX) {
        cout << "错误：数组已满，无法插入元素" << endl;
        return;
    }
    if (index < 0 || index > *len) {
        cout << "插入位置无效" << endl;
        return;
    }

    // 将插入位置后的元素向后移动
    for (int i = *len; i > index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    *len++;
}

// 删除指定位置的元素
void removeAt(int arr[],int *len,int index) {
    if (index < 0 || index >= *len) {
        cout << "删除位置无效" << endl;
        return;
    }

    // 将删除位置后的元素向前移动
    for (int i = index; i < *len - 1; i++) {
        arr[i] = arr[i+1];
    }
    *len--;
}

// 查找元素索引（返回第一个匹配的索引）
int indexOf(const int arr[],int len,int value) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

// 判断元素是否存在
bool contains(int arr[],int len,int value) {
    return indexOf(arr,len,value) != -1;
}

// 数组反转
void reverse(int arr[],const int *len) {
    for (int i = 0; i < *len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[*len - 1 - i];
        arr[*len - 1 - i] = temp;
    }
}

// 使用内置sort函数排序（升序）
void sortBuiltIn(int arr[],const int *len) {
    sort(arr, arr + *len);
}

// 冒泡排序（升序）
void bubbleSort(int arr[],int len) {
    for (int i = 0; i < len - 1; i++) {
        bool swapped = false; // 优化：如果一轮没有交换，说明已经有序
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // 如果没有发生交换，提前结束
        if (!swapped) break;
    }
}

// 选择排序（升序）
void selectionSort(int arr[],const int *len) {
    for (int i = 0; i < *len - 1; i++) {
        int minIndex = i;
        // 在未排序部分找到最小元素的索引
        for (int j = i + 1; j < *len; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 将最小元素交换到已排序部分的末尾
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// 桶排序（升序）- 适用于非负整数，假设数据范围在0-1000
void bucketSort(int arr[],const int *len) {
    if (*len == 0) return;

    // 找出最大值确定桶的范围
    int maxVal = arr[0];
    for (int i = 1; i < *len; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // 创建桶（大小为最大值+1）
    int bucketSize = maxVal + 1;
    int* bucket = new int[bucketSize](); // 初始化为0

    // 将元素放入桶中
    for (int i = 0; i < *len; i++) {
        bucket[arr[i]]++;
    }

    // 从桶中取出元素放回原数组
    int index = 0;
    for (int i = 0; i < bucketSize; i++) {
        while (bucket[i] > 0) {
            arr[index++] = i;
            bucket[i]--;
        }
    }

    delete[] bucket;
}

/**
 * 二分查找函数
 * @param arr 有序数组（升序）
 * @param size 数组大小
 * @param target 目标值
 * @return 目标值的索引，如果未找到返回-1
 */
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // 防止整数溢出

        if (arr[mid] == target) {
            return mid;  // 找到目标值
        } else if (arr[mid] < target) {
            left = mid + 1;  // 目标值在右半部分
        } else {
            right = mid - 1;  // 目标值在左半部分
        }
    }

    return -1;  // 未找到目标值
}

int main(){

    // 定义一个数组
    int arr[MAX] = {0};     // 定义数组，并全部初始化为0
    int len = 0;            // 已使用的长度

    int a[1000]{12,12,3213,12321,123};
    coutArr(a,10);



    return 0;
}