#include <iostream>
using namespace std;

int main() {
    int m, d;  // 定义月份m和日期d
    cin >> m >> d;  // 输入月份和日期

    if (m > 1) d += 31;   // 1月有31天
    if (m > 2) d += 29;   // 2月有29天（2020是闰年）
    if (m > 3) d += 31;   // 3月有31天
    if (m > 4) d += 30;   // 4月有30天
    if (m > 5) d += 31;   // 5月有31天
    if (m > 6) d += 30;   // 6月有30天
    if (m > 7) d += 31;   // 7月有31天
    if (m > 8) d += 31;   // 8月有31天
    if (m > 9) d += 30;   // 9月有30天
    if (m > 10) d += 31;  // 10月有31天
    if (m > 11) d += 30;  // 11月有30天

    cout << d << endl;  // 输出总天数
    return 0;  // 程序结束
}