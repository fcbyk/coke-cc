#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // 等同于 &arr[0]

    // 输出的地址相同
    cout << ptr << endl;
    cout << arr << endl;

    return 0;
}