#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_LEN = 100;

/**
 * 高精度减法实现
 * 输入：两个非负整数（字符串形式）
 * 输出：它们的差
 */
int main(){

    // 使用字符串接收输入
    string num1Str,num2Str;
    cin >> num1Str >> num2Str;

    // 提前处理相等情况，避免不必要的计算
    if (num1Str == num2Str){
        cout << 0;
        return 0;
    }

    // 判断结果是否负数
    bool isFu = false;
    if (num2Str.length() > num1Str.length()) {
        swap(num1Str, num2Str);
        isFu = true;
    } else if (num2Str.length() == num1Str.length()) {
        for (int i = 0; i < num1Str.length(); i++) {
            if (num2Str[i] > num1Str[i]) {
                swap(num1Str, num2Str);
                isFu = true;
                break;
            } else if (num2Str[i] < num1Str[i]) {
                break;
            }
        }
    }

    // 定义两个整数数组，以及定义变量存储数字的长度
    int num1Arr[MAX_LEN] = {0};
    int num2Arr[MAX_LEN] = {0};
    int num1Len = num1Str.length();
    int num2Len = num2Str.length();


    // 字符串转整数数组（逆序）
    {
        for (int i = 0; i < num1Len; i++) {
            num1Arr[i] = num1Str[num1Len-1-i]-'0';
//        cout << num1Arr[i];
        }
//    cout << endl;
        for (int i = 0; i < num2Len; i++) {
            num2Arr[i] = num2Str[num2Len-1-i]-'0';
//        cout << num2Arr[i];
        }
    }

    // 定义一个数组存储结果，以及确认要相减的位数
    int resultArr[MAX_LEN] = {0};
    int maxLen = max(num1Len,num2Len);


    // 逐位相减
    for (int i = 0; i < maxLen; i++) {
        resultArr[i] = num1Arr[i] - num2Arr[i];
    }

    // 处理借位
    for (int i = 0; i < maxLen; ++i) {
        if (resultArr[i]<0){
            resultArr[i] += 10;
            resultArr[i+1]--;
        }
    }

    // 去除前导零
    // 找到第一个非零位，即结果的最高位
    int resultLen = maxLen;
    while (resultLen > 1 && resultArr[resultLen-1] == 0){
        resultLen--;
    }

    // 输出结果
    if (isFu) cout << '-';
    for (int i = 0; i < resultLen; i++) {
        cout << resultArr[resultLen-1-i];
    }

    return 0;
}