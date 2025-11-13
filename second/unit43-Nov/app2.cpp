#include <iostream>
using namespace std;

// 8. 使用8种不同的方式循环打印5次hello
void forHello() {
    cout << "方式1：基本for循环" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "hello ";
    }
    cout << endl << endl;

    cout << "方式2：前置递减" << endl;
    for (int i = 5; i > 0; --i) {
        cout << "hello ";
    }
    cout << endl << endl;

    cout << "方式3：循环变量步长为2" << endl;
    for (int i = 0; i < 10; i += 2) {
        cout << "hello ";
    }
    cout << endl << endl;

    cout << "方式4：省略初始化" << endl;
    int i = 0;
    for (; i < 5; i++) {
        cout << "hello ";
    }
    cout << endl << endl;

    cout << "方式5：省略增量表达式" << endl;
    for (int j = 0; j < 5; ) {
        cout << "hello ";
        j++;
    }
    cout << endl << endl;

    cout << "方式6：逗号运算符" << endl;
    for (int a = 0, b = 0; a < 5; a++, b++) {
        cout << "hello ";
    }
    cout << endl << endl;

    cout << "方式7：无限循环+break" << endl;
    int count = 0;
    for (;;) {
        if (count >= 5) break;
        cout << "hello ";
        count++;
    }
    cout << endl << endl;

    cout << "方式8：while循环" << endl;
    int k = 0;
    while (k < 5) {
        cout << "hello ";
        k++;
    }
    cout << endl;
}

// 9. 打印1到n的所有奇数
void printOddNumbers(int n) {
    cout << "1到" << n << "的奇数为：";
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// 10. 打印1到n的所有偶数
void printEvenNumbers(int n) {
    cout << "1到" << n << "的偶数为：";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// 11. 从n倒序打印到1
void reverseCount(int n) {
    cout << "从" << n << "倒序到1：";
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// 12. 计算a到b之间所有整数的和
int sumInRange(int a, int b) {
    if (a > b) {
        swap(a, b); // 确保a <= b
    }

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

// 13. 统计1到n中偶数的个数
int countEvenNumbers(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    return count;
}

// 14. 计算n的阶乘
long long factorial(int n) {
    if (n < 0) return -1; // 错误情况

    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 15. 鸡兔同笼问题
void chickenRabbit(int head, int foot) {
    bool found = false;

    // 枚举鸡的数量（0到head）
    for (int chicken = 0; chicken <= head; chicken++) {
        int rabbit = head - chicken; // 兔的数量

        // 检查脚数是否匹配：鸡2脚，兔4脚
        if (chicken * 2 + rabbit * 4 == foot) {
            cout << "鸡：" << chicken << "只，兔：" << rabbit << "只" << endl;
            found = true;
            break; // 找到一组解就退出
        }
    }

    if (!found) {
        cout << "无解！头脚数量不匹配。" << endl;
    }
}

int main(){

    return 0;
}