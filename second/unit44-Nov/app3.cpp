#include <iostream>
#include <algorithm>
using namespace std;
// 数组最大长度
const int MAX = 1000;

// 打印数组
void coutArr(int arr[],int len){
    if (len == 0) return;
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 数组反转
void reArr(int arr[],int len){
    for (int i = 0; i < len/2; ++i) {
        swap(arr[i],arr[len-1-i]);
    }
}

// 尾部添加元素
void addEle(int arr[],int *len,int data){
    if (*len > MAX) return;
    arr[*len] = data;
    (*len)++;
}

// 在指定位置插入元素
void insert(int arr[],int *len,int po,int data){
    if (*len > MAX) return;
    if(po<0 || po>*len) return;
    for (int i = *len-1; i >= po; i--) {
        arr[i+1] = arr[i];
    }
    arr[po] = data;
    (*len)++;
}

// 查找元素
int find(int arr[],int len,int target){
    for (int i = 0; i < len; ++i) {
        if (target == arr[i]){
            return i;
        }
    }
    return -1;
}

// 删除最后的元素
void delEle(int arr[],int *len){
    arr[*len] = 0;
    (*len)--;
}

// 冒泡排序
void bubbleSort(int arr[],int len){
    for (int i = 0; i < len-2; ++i) {
        bool isSwap = false;

        for (int j = 0; j < len-1-i; ++j) {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if (!isSwap) return;
    }
}

int main(){
    // 数组定义
    int arr[MAX] = {321,20,3032,23,70};
    int len = 5;
    // 数组操作
    sort(arr,arr+len);// 排序

    coutArr(arr,len);

    reverse(arr,arr+len); // 反转

    coutArr(arr,len);

//    delEle(arr,&len);
//    coutArr(arr,len);

//    coutArr(arr,len);
//    reArr(arr,len);
//    coutArr(arr,len);
//    addEle(arr,&len,123);
//    addEle(arr,&len,456);
//    coutArr(arr,len);
//    insert(arr,&len,0,500);
//    insert(arr,&len,3,60);
//    coutArr(arr,len);
//    cout << find(arr,len,300);

//    int arr1[10];
//    arr1[1] = 100;
//
//    int arr2[]= {2323,32,4323,4324};
//    int arr3[100] = {0};
//    int arr4[100]{};
    return 0;
}

