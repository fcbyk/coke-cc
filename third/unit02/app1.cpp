#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// 二分查找
int binarySearch(int arr[],int len,int target){
    int left = 0;
    int right = len - 1;
    int mid;

    while (left <= right){
        mid = left + (right-left)/2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

// 优秀的拆分
void q1(){
    // 接收输入
    int n;
    cin >> n;

    // 如果是奇数，直接返回
    if (n%2!=0){
        cout << -1 << endl;
        return;
    }

    // 找最高次幂
    int i = 0;
    int cnt = 1;
    while (cnt*2<=n){
        cnt*=2;
        i++;
    }

    // 标记幂次是否被使用
    bool a[100] = {false};
    int ii = i;
    while (cnt>1){
        if (n-cnt>=0){
            a[ii]= true;
            n-=cnt;
        }
        ii--;
        cnt/=2;
    }

    // 输出结果
    for (int j = i; j >=1 ; --j) {
        if (a[j]){
            cout << pow(2,j) << " ";
        }
    }
}

// 烦恼的高考志愿
void q2(){
    int schools[10000];

    // 接收输入
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> schools[i];
    }

    // 对学校分数线排序
    sort(schools, schools + m);

    // 总不满意度
    long long total = 0;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;

        // 二分查找第一个大于等于score的学校位置
        long long pos = lower_bound(schools, schools + m, score) - schools;

        int diff;
        if (pos == m) {
            // 所有学校分数都小于学生分数    → 选最后一个学校 schools[m-1]
            diff = abs(schools[m-1] - score);
        } else if (pos == 0) {
            // 第一个学校就 ≥ 学生分数    → 选第一个学校 schools[0]
            diff = abs(schools[0] - score);
        } else {
            // 正常情况：比较 schools[pos-1] 和 schools[pos]
            diff = min(abs(schools[pos-1] - score), abs(schools[pos] - score));
        }

        total += diff;
    }

    cout << total << endl;
}

int main(){
//    int arr[] = {12,23,222,333,445,500,600};
//    cout << binarySearch(arr,7,222);
    q2();
    return 0;
}