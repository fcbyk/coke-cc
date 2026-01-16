#include <algorithm>
#include <complex>
#include <iostream>
#include <vector>
using namespace std;

void q1();  // 音乐播放
void q2();  // 图书管理员
void q3a();  // 寻宝 (双数组)
void q3b();  // 寻宝 (结构体数组)

int main() {
    q3b();
    return 0;
}

void q1(){

    // 接收输入
    // n是曲子的数量，t为播放次数
    int n,t;
    cin >> n >> t;
    int list[n];
    for (int music:list) {
        cin >> music;
    }

    // 依次打印播放结果
    for (int i = 0; i < t; ++i) {

        // 找权重最大的
        int maxId = 0;
        for (int j = 0; j < n; ++j) {
            if (list[j]>list[maxId]) maxId = j;
        }

        // 输出结果
        maxId++;     // 0-based 转 1-based
        cout << maxId << endl;

        // 清空当前播放的曲子权重
        int rest = list[maxId];
        list[maxId] = 0;

        // 重新分配权重
        /*
            0 1 2 3 4 5 (6个元素)
            除6余多少
            0 1 2 3 4 5
        */
        int index = 0;
        while (rest > 0){
            // 跳过当前播放的曲子
            if(index%n == maxId){
                index++;
                continue;
            };

            list[index%n] +=1;  // 分配权重
            rest--;    // 减少未分配的权重
            index++;   // 索引更新
        }
    }
}

void q2() {
    // 获取输入
    // n为图书数量，q为读者数量
    int n,q;
    cin >> n >> q;

    // 使用数组保存图书编号
    vector<int> books(n,0);
    for (int i = 0; i < n; ++i) {
        cin >> books[i];
    }

    // 对图书编号排序（升序）
    sort(books.begin(),books.end());

    // 边获取输入，边输出结果，一共查q次
    while (q--) {
        // 获取需求码长度、需求码
        int len,number;
        cin >> len >> number;

        // 用一个变量存结果，默认为-1
        // 计算 10的 len次方
        int mod = (int)pow(10, len);
        int result = -1;

        // 依次查找图书
        // 图书编号和需求码，后缀比较
        for (int item:books) {
            if (number == item%mod) {
                // 找到则更新结果，结束查找
                result = item;
                break;
            }
        }

        // 输出查找结果
        cout << result << endl;
    }
}

void q3a() {
    // N层，每层M个房间
    int N, M;
    cin >> N >> M;

    // 使用数组存储房间信息
    // int hasStairs[N][M];  // 是否有楼梯
    // int sign[N][M];     // 指示牌的数字

    // 使用vector动态分配
    vector<vector<int>> hasStairs(N, vector<int>(M));
    vector<vector<int>> sign(N, vector<int>(M));

    // 读取输入
    for (int floor = 0; floor < N; floor++) {
        for (int room = 0; room < M; room++) {
            cin
            >> hasStairs[floor][room]
            >> sign[floor][room];
        }
    }

    int currentRoom;  // 当前所在房间编号
    cin >> currentRoom;  // 从底层这个房间开始

    int key = 0;  // 密钥总和
    const int MOD = 20123;

    // 逐层上楼
    for (int floor = 0; floor < N; floor++) {

        // 记录当前房间的指示牌数字
        int signNum = sign[floor][currentRoom];
        key = (key + signNum) % MOD;

        // 在当前层找第 signNum 个有楼梯的房间
        // 计数器初始化
        int count = hasStairs[floor][currentRoom] ? 1:0;

        while (count < signNum) {
            // 逆时针移动：房间编号+1，如果是M就回到0
            currentRoom = (currentRoom + 1) % M;

            // 如果这个房间有楼梯，计数+1
            if (hasStairs[floor][currentRoom]) {
                count++;
            }
        }

        // 上楼
    }

    // 输出结果
    cout << key % MOD << endl;
}

void q3b() {

    // 房间结构体
    struct Room {
        int hasStairs;  // 是否有楼梯
        int signNum;      // 指示牌上的数字
    };

    int N, M;
    cin >> N >> M;

    // 存储所有房间信息
    vector<vector<Room>> building(N, vector<Room>(M));

    // 读取输入
    for (int floor = 0; floor < N; floor++) {
        for (int room = 0; room < M; room++) {
            cin
            >> building[floor][room].hasStairs
            >> building[floor][room].signNum;
        }
    }

    int currentRoom;  // 当前所在房间编号
    cin >> currentRoom;

    int key = 0;  // 密钥总和
    const int MOD = 20123;

    // 逐层上楼
    for (auto floor:building) {
        // 记录当前房间的指示牌数字
        int signNum = floor[currentRoom].signNum;
        key = (key + signNum) % MOD;

        // 初始化计数器
        int count = floor[currentRoom].hasStairs ? 1:0;

        // 逆时针移动到下一个房间
        while (count < signNum) {
            currentRoom = (currentRoom + 1) % M;
            if (floor[currentRoom].hasStairs) {
                count ++;
            }
        }
    }

    // 输出结果
    cout << key % MOD << endl;
}