#include <iostream>
using namespace std;

int q0(){
    char temp;
    int cnt = 0;
    while (cin >> temp){
        if (temp != '$'){
            cnt++;
        }else{
            break;
        }
    }
    cout << cnt;
    return 0;
}

/**
 * 第一题：统计字符数
 */
int q1(){
    char aim;
    char temp;
    int cnt = 0;
    cin >> aim;
    while (cin >> temp){
        if (temp == '!') break;
        if (temp == aim) cnt++;
    }
    cout << cnt;
}

/**
 * 第二题：电报
 */
int q2(){
    int dollar = 0;
    char a;
    cin >> a;
    while (a != '#'){
        if (a>='0' && a<='9'){
            dollar = dollar + a - '0';
        }
        cin >> a;
    }
    cout << dollar << endl;
    return 0;
}

/**
 * 第三题：运动会奖牌
 */
int q3(){
    int n,g=0,s=0,b=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char chr;
        cin >> chr;
        if (chr == 'G') g++;
        else if (chr == 'S') s++;
        else if (chr == 'B') b++;
    }
    cout << g << " " << s << " " << b;
    return 0;
}

/**
 * 第四题：字符统计
 */
int q4(){
    int n, cnt = 0;
    cin >> n;
    char chr;
    for (int i = 0; i < n; ++i) {
        cin >> chr;
        if (chr >= 'A' && chr <='Z'
            ||chr >= 'a' && chr <='z'){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}