#include <iostream>
using namespace std;

/**
 * 打印汉诺塔移动步骤的辅助函数
 * @param a 起始柱名称（源柱子）
 * @param b 目标柱名称（目标柱子）
 * @note 时间复杂度：O(1) 仅执行固定次数的字符串操作
 * @note 示例输出："A移动到C"
 */
void move(string a, string b) {
    cout << a << " → " << b << endl;  // 使用箭头符号更直观
}

/**
 * 汉诺塔问题的递归解法
 * 函数功能：生成并打印将n个盘子从起始柱移动到目标柱的完整步骤
 * @param num  需要移动的盘子数量（必须>=1）
 * @param from 起始柱名称（初始位置）
 * @param to   目标柱名称（最终位置）
 * @param aux  辅助柱名称（中转位置）
 * @note 时间复杂度：O(2ⁿ) 递归调用次数呈指数增长
 * @note 空间复杂度：O(n) 递归调用栈深度
 * @note 算法原理：
 *  1. 将n-1个盘子从起始柱移到辅助柱（递归）
 *  2. 将最底层的盘子移到目标柱
 *  3. 将n-1个盘子从辅助柱移到目标柱（递归）
 */
void hanoi(int num, string from, string to, string aux) {
    // 基线条件：当只剩一个盘子时直接移动
    if (num == 1) {
        move(from, to);
        return;
    }

    // 递归步骤（分治思想）
    hanoi(num - 1, from, aux, to);  // 步骤1：上方n-1个盘子→辅助柱
    move(from, to);                 // 步骤2：最底层盘子→目标柱
    hanoi(num - 1, aux, to, from);  // 步骤3：n-1个盘子从辅助柱→目标柱
}

/**
 * 程序入口
 */
int main() {

    // 设置控制台编码为UTF-8（解决中文显示问题）
    system("chcp 65001 > nul");

    // 汉诺塔3层解法步骤：
    hanoi(3, "A", "C", "B");

    return 0;
}