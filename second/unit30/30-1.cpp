#include <iostream>

using namespace std;

/**
 * 对赌
 * 输入：一行标签栏
 * 输出：输出运气和能力的次数
 */
int main(){

    // 定于变量存储 luck 和 power 出现次数
    int luck = 0, power = 0;

    // 定义一个字符串，接收数据
    string str;
    cin >> str;

    // 统计次数
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'l'
        ||str[i+1] == 'u'
        ||str[i+2] == 'c'
        ||str[i+3] == 'k'){
            luck++;
        }
        if (str[i] == 'p'
        ||str[i+1] == 'o'
        ||str[i+2] == 'w'
        ||str[i+3] == 'e'
        ||str[i+4] == 'r'){
            power++;
        }
    }

    // 打印结果
    cout << luck << " " << power << endl;

    return 0;
}