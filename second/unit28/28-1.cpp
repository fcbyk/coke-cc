#include <iostream>
#include <algorithm>
using namespace std;

// 最大长度
const int MAX_LEN = 100;

/**
 * 高精度减法实现
 * 输入：两个非负整数（字符串形式）
 * 输出：它们的差（字符串形式）
 */
int main() {


    // 先使用字符串接收两个大数字
    string num1Str, num2Str;
    cin >> num1Str >> num2Str;


    // 判断是否为负数
    bool isFu = false;
    if (num1Str.length() < num2Str.length() ||
        (num1Str.length() == num2Str.length() && num1Str < num2Str)) {
        swap(num1Str, num2Str);  // 属于<utility> ，C++11 后 <iostream> 也包含它
        isFu = true;
    }


    // 定义两个 int 数组，以及使用两个变量记录数字长度（位数）
    int num1Arr[MAX_LEN] = {0}, num2Arr[MAX_LEN] = {0};
    int num1Len = num1Str.length();
    int num2Len = num2Str.length();


    // 字符串转整数数组（逆序存储，个位在前）
    {
        for (int i = 0; i < num1Len; i++) {
            num1Arr[i] = num1Str[num1Len-1-i] - '0';
            //cout << num1Arr[i];
        }
        //cout << endl;
        for (int i = 0; i < num2Len; i++) {
            num2Arr[i] = num2Str[num2Len-1-i] - '0';
            //cout << num2Arr[i];
        }
    }


    // 定义一个整数数组存储结果
    int resultArr[MAX_LEN] = {0};
    int maxLen = max(num1Len,num2Len);  // 属于<algorithm>


    // 执行减法
    {
        // 从个位开始逐个相减
        for (int i = 0; i < maxLen; i++) {
            resultArr[i] = num1Arr[i] - num2Arr[i];
        }

        // 处理借位
        for (int i = 0; i < maxLen; i++) {
            if (resultArr[i] < 0) {
                resultArr[i] += 10;
                resultArr[i+1]--;
            }
        }
    }


    // 找到第一个非零位，即结果的最高位
    int resultLen = maxLen;
    while (resultLen > 1 && resultArr[resultLen-1] == 0) {
        resultLen--;
    }


    // 输出结果
    if (isFu) {
        cout << "-";
    }
    for (int i = resultLen-1; i >= 0; i--) {
        cout << resultArr[i];
    }


    return 0;
}
