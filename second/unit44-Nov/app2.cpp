#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
const int MAX = 1000;

void coutArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rArr(int arr[], int len) {
    for (int i = 0; i < len/2; i++) {
        swap(arr[i], arr[len - 1 - i]);
    }
}

void sortArr(int arr[], int len) {
    for (int i = 0; i < len-1; i++) {
        bool isSorted = false;

        for (int j = 0; j < len-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSorted = true;
            }
        }

        if (!isSorted) return;
    }
}

void xuanZheSort(int arr[], int len) {
    for (int i = 0; i < len-1; i++) {
        int min = i;

        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (arr[i] != arr[min]) {
            swap(arr[i], arr[min]);
        }
    }
}


// 二分查找
int erfen(int arr[],int len,int target) {
    int left = 0;
    int right = len-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid+1;
        }else {
            right = mid-1;
        }
    }

    return -1;
}

int chazha(int arr[],int len,int target) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[MAX]{12,321,3,4,23,5,67,32};
    int len = 8;

    coutArr(arr,len);
    sort(arr,arr+len);
    coutArr(arr,len);
    cout << chazha(arr,len,32) << endl;

    return 0;
}
