#include <iostream>
using namespace std;

/**
 * 打印 n 到 1
 * 函数功能：打印 n 到 1
 */
void question1(int n) {

    // 基线条件
    if (n < 1) return;

    // 递归关系：打印一位，减少1
    cout << n << " ";
    question1(n-1);
}

/**
 * 打印 1 到 n（升序）
 * 函数功能：按升序打印 1 到 n
 */
void question2(int n) {

    // 终止条件
    if (n == 0) return;

    // 递归关系
    // 1. 递归展开阶段：不断调用自身，直到 n == 1（不执行打印）
    // 2. 递归回溯阶段：从最深层的递归开始，依次打印 1, 2, ..., n
    question2(n-1);
    cout << n << " ";
}

/**
 * 位数求和
 * 函数功能：返回n每位数加起来的和
 */
int question4(int n) {

    // 终止条件
    if (n == 0) return 0;

    // 递归关系：获取最右边的数字，加上剩余的位数之和
    return n % 10 + question4(n / 10);
}

/**
 *  求1-n累计和
 *  函数功能：返回1-n累计和
 */
int question5(int n) {

    // 终止条件
    if (n == 0) return 0;

    // 递归关系：当前数字 + 剩余数字的累计和
    return n + question5(n-1);
}

int main() {
    question2(5);
    return 0;
}

