#include <iostream>
using namespace std;

// 期末测试题

/**
 * 第一题
 */
void q1(){
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << "数组元素总和为: " << sum << endl;
}

/**
 * 第二题
 */
void q2(){
    int sum = 0;

    for (int i = 1; i <= 100; i += 2) {
        sum += i;
    }

    cout << "1~100中所有奇数的总和为: " << sum << endl;
}

/**
 * 第三题
 */
void q3(){
    string word;
    int times;

    cout << "请输入要复读的文字: ";
    getline(std::cin, word);

    cout << "请输入复读次数: ";
    cin >> times;

    for (int i = 0; i < times; i++) {
        cout << word << endl;
    }
}

/**
 * 第四题
 */
void q4() {

    // 定义一个数组
    int arr[] = {9, 4, 7, 1, 8, 2};

    // 冒泡排序
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5-i; j++) {
            if (arr[j] > arr[j+1]) {
                // 交换arr[j]和arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // 打印输出
    for (int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
}


int main(){
    q4();
    return 0;
}