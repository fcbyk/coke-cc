#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void q1();  // 扫雷游戏
void q2();  // 图书ISBN码
void q3();  // Vigenere密码

int main(){
    q3();
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

void q2() {
    // 接收ISBN码的输入
    string isbn;
    cin >> isbn;

    // 定义int数组存数字，下标0不使用
    vector<int> nums;
    nums.push_back(0);  // 占位
    for (char c:isbn) {
        if (c>='0' && c <='9'){
            // 字符转数字，再存数组
            nums.push_back(c - '0');
        }else if (c == 'X'){
            // 对 X 特殊处理
            nums.push_back(10);
        }
    }

    // 计算加权和
    int sum = 0;
    for (int i = 1; i <= 9; ++i) {
        sum += nums[i] * i;
    }

    // 计算校验码 sum mod 11
    const int r = sum % 11;

    // 比较校验码
    if (r == nums[10]) {
        cout << "Right" << endl;
    }else {
        // 替换校验码
        if (r == 10) isbn[isbn.length() - 1] = 'X';
        else isbn[isbn.length() - 1] = '0' + r;
        cout << isbn << endl;
    }
}

void q3() {
    // M是明文，C是密文，K是密钥
    string c,k;
    cin >> k >> c;

    // 密钥 k 转 int数组
    vector<int> intK;
    for (char item:k) {
        if (item >= 'a' && item <= 'z') {
            intK.push_back(item - 'a');
        }else if (item >= 'A' && item <= 'Z') {
            intK.push_back(item - 'A');
        }
    }

    // 密文c 转明文, 变转边输出
    // 规律：明文 = 密文 - 密钥
    int i = 0;
    for (char item:c) {
        // 计算明文，超范围需调整
        char temp = item - intK[i];
        if (item >= 'a' && temp < 'a' ) {
            temp += 26;
        }else if (item >= 'A' && temp <= 'A') {
            temp += 26;
        }

        // 输出结果
        cout << temp;

        // 更新密钥，越界则复原
        i++;
        if (i == intK.size()) {
            i = 0;
        }
    }

    // 换行
    cout << endl;
}



