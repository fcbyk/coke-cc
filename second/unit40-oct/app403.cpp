#include <iostream>
using namespace std;

/*
 * 第三题：音乐播放
 */
int main(){

    // 接收输入
    int n,t;
    cin >> n >> t;
    int list[n];
    for (int i = 0; i < n; ++i) {
        cin >> list[i];
    }

    // 依次打印结果
    for (int i = 0; i < t; ++i) {

        // 播放权重大的音乐
        int id = 0;
        for (int j = 0; j < n; ++j) {
            if (list[j]>list[id]) id = j;
        }
        cout << id+1 << endl;

        // 重新分配权重
        int rest = list[id];
        list[id] = 0;
        int index = 0;
        while (rest > 0){
            if(index%n == id){
                index++;
                continue;
            };
            list[index%n] +=1;
            rest--;
            index++;
        }
    }

    return 0;
}