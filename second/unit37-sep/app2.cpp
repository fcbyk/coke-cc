#include <iostream>
using namespace std;

/**
 * 数组名本质就是一个指针
 * 指向数组的第一个元素
 * 不能修改其指向
 */

// 指针运算 加减
int main1(){

    int arr[] = {10,20,30,40,50};

    int *p = arr;
    cout << *p << endl;

    p = p + 3;
    cout << *p << endl;

    p = p - 2;
    cout << *p << endl;

    return 0;
}

// 指针运算 关系运算
int main2(){

    int arr[] = {10,20,30,40,50};

    int *p1 = arr + 2;
    int *p2 = &arr[2];

    if (p1 == p2) {
        cout << " p1 和 p2 指向同一个地址" << endl;

        *p2 = 100;
        cout << arr[2];

        *p1 = 200;
        cout << arr[2];
    }

    return 0;
}

