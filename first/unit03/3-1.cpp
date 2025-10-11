#include <iostream>

using namespace std;

// 学习转义字符
int main(){

    // 输出双引号
    cout << "丁真:\"你好，我是丁真\"" << endl;

    // 换行符
    cout << "第一行\n第二行\n";

    // 制表符
    cout << "a\tb\tc\n";
    cout << "aaa\tbbb\tccc\n";
    cout << "aa\tbb\tcc\n";

    // 输出反斜杠
    cout << "\\" << endl;

    // 使用空字符，\0 表示字符串结束
    cout << "你好，\0C++" << endl;

    return 0;
}