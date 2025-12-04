#include <iostream>
using namespace std;

// 判断是否为素数
bool isPrime(int n){
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

// 素数的个数
int countPrime(int m, int n){
    int count = 0;
    for (int i = m; i <=n; ++i) {
        if (isPrime(i)) count++;
    }
    return count;
}

// 找最大质因数
int primeFactor(int n){
    for (int i = n; i > 1; --i) {
        if (isPrime(i) && n%i== 0){
            return i;
        }
    }
    return -1;
}

// 定义二维数组存储矩阵
// 行从1到n（方便与题目中的坐标对应）
const int MAX = 1000;
int matrix[MAX+1][MAX+1] = {0};

//  子矩阵求和，暴力破解
//  时间复杂度
//  预处理：读取矩阵数据，时间复杂度为 O(n×m)
//  每次查询：需要遍历子矩阵的所有元素，最坏情况下时间复杂度为 O(n×m)
//  总时间复杂度：O(n×m + q×n×m) = O(q×n×m)
void MatrixSum() {

    // 输入矩阵的行数n和列数m
    int n, m;
    cin >> n >> m;

    // 读取矩阵内容
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
        }
    }

    // 输入查询次数q
    int q;
    cin >> q;

    // 处理每个查询
    while (q--) {

        // 输入子矩阵的左上角(a,b)和右下角(c,d)
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // 遍历子矩阵的所有元素并求和
        // 用long long防止溢出（因为矩阵元素和可能很大）
        long long sum = 0;
        for (int i = a; i <= c; ++i) {
            for (int j = b; j <= d; ++j) {
                sum += matrix[i][j];
            }
        }

        // 输出查询结果
        cout << sum << endl;
    }
}

// 定义前缀和矩阵
long long prefix[MAX+1][MAX+1] = {0};

// 子矩阵求和，使用前缀和优化
// 优化后的时间复杂度分析
// 预处理：构建前缀和矩阵，时间复杂度为 O(n×m)
// 每次查询：使用前缀和公式直接计算，时间复杂度为 O(1)
// 总时间复杂度：O(n×m + q)
void MatrixSumOptimized() {
    int n, m;
    cin >> n >> m;

    // 读取矩阵内容并构建前缀和矩阵
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
            // 构建前缀和矩阵
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + matrix[i][j];
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // 使用前缀和矩阵在O(1)时间内计算子矩阵和
        long long sum = prefix[c][d] - prefix[a-1][d] - prefix[c][b-1] + prefix[a-1][b-1];
        cout << sum << endl;
    }
}

int main(){
//    cout << isPrime(6);
//    cout << countPrime(2,100000);
//    cout << primeFactor(21);
//    MatrixSum();
    MatrixSumOptimized();
    return 0;
}