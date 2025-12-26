#include <iostream>
#include <vector>
using namespace std;

// 定义结果类型
struct Result {
    vector<bool> isPrime;   // 标记数组
    vector<int> primes;     // 素数数组
};

// 辅助函数
bool isPalindrome(int n);   // 判断回文数
Result eulerSieve(int n);   // 欧拉筛

// 解题
void q1();   // 题目1：线性筛质数
void q2();   // 题目2：回文素数
void q3();   // 题目3：连续质数之和
void q4();   // 题目4：区间素数个数
void q5();   // 题目5：素数列表

int main(){
//    int a;
//    cout << bool(cin >> a);
    q5();
    return 0;
}

// 判断回文数
bool isPalindrome(int n){

    // 方法一
    string s = to_string(n);    // 数字转字符串
    return s == string(s.rbegin(), s.rend());   // 字符串比较

    // 方法二
    if(n < 0) return false;  // 负数不是回文数

    int n_copy = n;
    int r = 0;

    // 反转数字
    while(n > 0){
        r = r * 10 + n % 10;
        n /= 10;
    }

    return n_copy == r;  // 比较反转前后的数值
}

// 欧拉筛
Result eulerSieve(int n) {
    // 初始化标记数组
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0和1不是素数
    vector<int> primes;  // 定义数组，存放素数

    // 主循环：遍历2到上限的所有数字
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);  // 判断当前数是否为素数，记录素数

        // 用已找到的素数筛选
        for (int p : primes) {
            long long mult = 1LL * i * p;  // 防止溢出
            if (mult > n) break;    // 超出范围则停止
            isPrime[mult] = false;  // 标记合数
            if (i % p == 0) break;  // 关键优化：保证每个合数只被标记一次
        }
    }

    // 返回结果
    Result res = { isPrime, primes };
    return res;
}

// 题目1：线性筛质数
void q1() {
    // 接收输入
    int n, q;
    cin >> n >> q;

    // 获取 2-n 的所有素数
    vector<int> primes = eulerSieve(n).primes;

    // 处理查询
    while (q--) {
        int k;
        cin >> k;
        k--;    // 转 0-based
        cout << primes[k] << endl;
    }
}

// 题目2：回文素数
void q2() {
    // 接收输入
    int a, b;
    cin >> a >> b;

    // 获取b以内的所有素数
    vector<bool> isPrime = eulerSieve(b).isPrime;

    // 遍历[a, b]范围内的所有数
    for (int i = a; i <= b; i++) {
        if (isPrime[i] && isPalindrome(i)) {
            cout << i << endl;
        }
    }
}

// 题目3：连续质数之和
void q3() {

    // 1. 预处理10000以内的所有素数
    vector<int> primes = eulerSieve(10000).primes;
    int m = primes.size();  // 素数的个数

    // 2. 预处理素数前缀和
    vector<int> prefixSum(m + 1, 0);
    for (int i = 0; i < m; i++) {
        prefixSum[i + 1] = prefixSum[i] + primes[i];
    }

    // 3. 处理每个输入
    int n;
    while (cin >> n && n != 0) {
        int count = 0;

        // 使用双指针/滑动窗口计算连续素数和的个数
        for (int left = 0; left < m; left++) {
            for (int right = left; right < m; right++) {
                int sum = prefixSum[right + 1] - prefixSum[left];
                if (sum > n) break;  // 和已经超过n，后续更大
                if (sum == n) {
                    count++;
                    break;  // 当前left已经找到，可以继续下一个left
                }
            }
        }

        cout << count << endl;
    }
}

// 题目4：区间素数个数
void q4() {
    int a, b;

    // 预计算素数标记和前缀和
    const int MAX_N = 10000000;  // 10^7
    vector<bool> isPrime = eulerSieve(MAX_N).isPrime;

    // 计算前缀和
    vector<int> prefix(MAX_N + 1, 0);
    for (int i = 2; i <= MAX_N; i++) {
        if (isPrime[i]) {
            prefix[i] = prefix[i - 1] + 1;  // 是素数，计数+1
        } else {
            prefix[i] = prefix[i - 1];      // 不是素数，计数不变
        }
    }

    // 处理多组输入
    while (cin >> a >> b) {
        // 终止条件
        if (a == -1 && b == -1) break;

        a = max(a, 2);  // 处理边界,确保a不小于2

        if (a > b) {
            cout << 0 << endl;
        } else {
            // 使用前缀和快速计算
            cout << prefix[b] - prefix[a - 1] << endl;
        }
    }
}


// 题目5：素数列表
void q5() {
    int N, C;

    // 预处理1-1000000的所有素数
    const int MAX_N = 1000000;
    vector<int> primes = eulerSieve(MAX_N).primes;

    // 处理多组输入
    while (cin >> N >> C) {
        // 获取1到N之间的素数
        vector<int> rangePrimes;
        for (int prime : primes) {
            if (prime > N) break;
            rangePrimes.push_back(prime);
        }

        int totalPrimes = rangePrimes.size();  // 1到N之间的素数个数

        // 计算输出范围
        int start, end;
        int toPrint;  // 需要输出的素数个数

        if (totalPrimes % 2 == 0) {  // 素数个数为偶数
            toPrint = 2 * C;  // 输出2C个
        } else {  // 素数个数为奇数
            toPrint = 2 * C - 1;  // 输出2C-1个
        }

        // 如果C太大，超过列表范围，输出全部素数
        if (toPrint >= totalPrimes) {
            start = 0;
            end = totalPrimes - 1;
        } else {
            // 计算中心位置
            int center = totalPrimes / 2;
            start = center - (toPrint / 2);
            end = start + toPrint - 1;
        }

        // 输出结果
        cout << N << " " << C << ":";

        for (int i = start; i <= end; i++) {
            cout << " " << rangePrimes[i];
        }

        cout << endl << endl;  // 每行输出后空一行
    }
}


