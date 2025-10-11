#include <iostream>
using namespace std;

// 将数据写入文件
int main1(){

    freopen("hello.txt","w",stdout);

    string a = "我的cpp程序数据";

    cout << a;

    return 0;
}

// 读取文件数据
int main(){

    freopen("hello.txt","r",stdin);

    string a;

    cin >> a;

    cout << a;
}
