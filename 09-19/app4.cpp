#include <iostream>
using namespace std;

// 数组名本质就是一个指针，只是不能修改指向
int main1() {

    int arr[] = {10,20,30,40,50};
    int *p = arr;

    // 使用下标 [] 解指针
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;

    // 使用 指针运算
    cout << *p << endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;

    return 0;
}

// 使用指针遍历数组
int main() {

    int arr[] = {60,70,80,90,100};

    for (int *p = arr; p <= &arr[4]; p++) {
        cout << *p << endl;
    }

    return 0;
}


