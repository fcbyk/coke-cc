#include <iostream>
#include <windows.h>
#include <algorithm>

using namespace std;

// 病毒程序
void box(){
    MessageBox(0,"扫码付费关闭窗口","我是病毒",0);
    box();
}

/**
 * 第一题：台阶走法
 * 走楼梯，每次可以走1阶或2阶，问走n阶有几种方法？
 */
int q1(int n){

    // 基线条件（终止条件）
    if (n==1) return 1;
    if (n==2) return 2;

    // 递归关系（如何分解问题）
    return q1(n - 1) + q1( n - 2);
}

/**
 *  第二题：骨牌铺方格
 */
int q2(int n){

    // 基线条件（终止条件）
    if (n==1) return 1;
    if (n==2) return 2;

    // 递归关系（如何分解问题）
    return q1(n - 1) + q1( n - 2);

}

/**
 * 第三题：魔法币
 * 解法1：使用循环
 */
string q3A(int n) {
    string ans;
    while (n > 0) {
        if (n % 2 == 1) {  // 奇数说明最后一步是机器1
            ans = ans + '1';
            n = (n - 1) / 2;
        } else {            // 偶数说明最后一步是机器2
            ans = ans + '2';
            n = (n - 2) / 2;
        }
    }

    // 导入std算法包    #include <algorithm>
    reverse(ans.begin(), ans.end());  // 因为是倒推的，结果要反转
    return ans;
}


/**
 * 第三题：魔法币
 * 解法2：使用递归
 */
void q3B(int n){

    // 基线条件
    if(n==0) return;
//    if(n==1){
//        cout << "1";
//        return;
//    }
//    if (n==2){
//        cout << "2";
//        return;
//    }

    // 递归关系（如何分解问题）
    // 每次递归解决一个问题：“当前n是由哪个机器生成的？并推导上一步的x值”
    if(n%2 == 1){
        q3B((n-1)/2);
        cout << "1";
    }else{
        q3B((n-2)/2);
        cout << "2";
    }

}

int main(){

    q3B(10);

    return 0;
}