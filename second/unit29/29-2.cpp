#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

/**
 * 单词缩写
 * 输入：一个整数T，T组测试数据
 * 输出：输出每组数据的缩写
 */
int main(){

    // 定义一个字符数组
    char str[100];

    // 定义一个变量n,表示有多少组测试数据
    int n;
    cin >> n;

    // 清除输入缓冲区中的换行符
     cin.ignore();
//    gets(str);

    for (int i = 0; i < n; ++i) {

        // 接收一个字符数组的输入，并获取其长度
        gets(str);
        int len = strlen(str);

        // 首字母转成大写，并输出
        cout << (char)toupper(str[0]);

        // 遍历字符串中的每个字符
        for (int j = 0; j < len; ++j) {

            // 如果当前字符是空格，则输出它下一个字符的大写
            if (str[j] == ' '){
                cout << (char)toupper(str[j+1]);
            }
        }

        // 换行
        cout << endl;
    }

    return 0;
}

