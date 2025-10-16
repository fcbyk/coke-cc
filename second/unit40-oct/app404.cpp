#include <iostream>
using namespace std;

/**
 * 第四题：乒乓球
 */
void coutScore(int n, int index, char arr[]){
    int a = 0, b = 0;
    for (int i = 0; i < index; ++i) {
        if (arr[i] == 'W') a++;
        else if (arr[i] == 'L') b++;

        if (a>=n || b>=n && abs(a-b)>=2){
            cout << a << ":" << b << endl;
            a = b = 0;
        }
    }
    cout << a << ":" << b << endl;
}


int main(){

    // 输入
    char score[100000];
    char in = 0;
    int index = 0;
    while (in!='E'){
        cin >> in;
        score[index] = in;
        index++;
    }

    // 输出结果
    coutScore(11,index,score);
    cout << endl;
    coutScore(21,index,score);

    return 0;
}