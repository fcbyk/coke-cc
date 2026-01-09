#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void q1();  // 扫雷游戏
void q2();  // 图书ISBN码

int main(){
    q2();
    return 0;
}

void q1(){

    // 接收数据输入
    int n,m;
    cin >> n >> m;

    // 使用二维数组存地图信息（预留多两行两列，避免访问越界）
    bool map[n+2][m+2];
    memset(map, false, sizeof(map));  // 全部初始化为假
    char temp;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> temp;
            if (temp == '*') map[i][j] = true;  // 有雷
        }
    }

    // 计算并输出结果
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (map[i][j]){
                cout << "*";
            }else{
                cout << map[i+1][j]
                    + map[i-1][j]
                    + map[i][j+1]
                    + map[i][j-1]
                    + map[i+1][j+1]
                    + map[i-1][j-1]
                    + map[i-1][j+1]
                    + map[i+1][j-1];
            }
        }
        cout << endl;   // 换行
    }
}

void q2(){
    // 接收ISBN码的输入
    string isbn;
    cin >> isbn;

    // 定义int数组存数字
    vector<int> nums;
    for (char c:isbn) {
        if (c>='0' && c <='9'){
            // 字符转数字，再存数组
            nums.push_back(c - '0');
        }
        // 对 X 特殊处理
        if (c == 'X'){
            nums.push_back(10);
        }
    }


}