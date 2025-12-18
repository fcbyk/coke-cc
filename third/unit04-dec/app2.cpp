#include <iostream>
#include <vector>
using namespace std;

// 普通试除法
bool isPrimeFun(int num) {
    // 处理小于2的特殊情况（1、0、负数都不是素数）
    if (num < 2) return false;

    // 从2开始，检查到平方根
    for (int i = 2; i * i <= num; i++) {
        // 找到因数，不是素数，提前返回
        if (num % i == 0) return false;
    }

    // 循环结束，未找到因数，是素数
    return true;
}


// 埃拉托斯特尼筛法（埃氏筛）
vector<bool> sieveOfEs(int n) {
    // 1. 初始化标记数组
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0和1不是素数

    // 2. 主循环（核心：从2开始标记倍数）
    for (int p = 2; p * p <= n; p++) {
        // 如果当前数是素数，才标记其倍数
        if (isPrime[p]) {
            // 标记当前数的所有倍数
            for (int mul = p * 2; mul <= n; mul += p) {
                isPrime[mul] = false;  // 标记为合数
            }
        }
    }

    return isPrime;  // 返回标记数组
}


// 欧拉筛
vector<bool> eulerSieve(int n) {
    // 1. 初始化标记数组
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0和1不是素数

    vector<int> primes;  // 临时存放素数

    // 2. 主循环：遍历2到上限的所有数字
    for (int i = 2; i <= n; i++) {
        // 3. 判断当前数是否为素数
        if (isPrime[i]) {
            primes.push_back(i);  // 记录素数
        }

        // 4. 用已找到的素数筛选
        for (int p : primes) {
            long long mult = 1LL * i * p;  // 防止溢出

            // 超出范围则停止
            if (mult > n) break;

            // 标记合数
            isPrime[mult] = false;

            // 关键优化：保证每个合数只被标记一次
            if (i % p == 0) {
                break;  // 跳出内层循环
            }
        }
    }

    // 5. 返回标记数组
    return isPrime;
}

// 课上习题1
void q1(){
    // 接收输入
    int n,m;
    cin >> n >> m;

    int nums[m];
    for (int i = 0; i < m; ++i) {
        cin >> nums[i];
    }

    // 标记 0-n 的所有素数
    // vector<bool> isPrime = eulerSieve(n);
    vector<bool> isPrime = sieveOfEs(n);

    // 输出结果
    for (int num : nums) {
        if (isPrime[num]){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }
    }
}

// 课上习题2
void q2(){

    // 接受输入
    int n,q;
    cin >> n >> q;
    int arr[q];
    for (int i = 0; i < q; ++i) {
        cin >> arr[i];
    }

    // 构建 0-n 的素数数组
    // vector<bool> isPrime = eulerSieve(n);
    vector<bool> isPrime = sieveOfEs(n);
    vector<int> primes;
    for (int i = 2; i < isPrime.size(); ++i) {
        if (isPrime[i]){
            primes.push_back(i);
        }
    }

    // 输出结果
    for (int index:arr) {
        index--;   // 转 0-based
        cout << primes[index] << endl;
    }
}

int main(){
    q2();
    return 0;
}