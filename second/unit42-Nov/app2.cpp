#include <iostream>
using namespace std;

// 算术运算符
void q1(int a = 10,int b = 20){
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << a++ << endl;
    cout << ++a << endl;
    cout << --b << endl;
    cout << b-- << endl;
}

// 关系运算符
void q2(int a,int b){
    cout << boolalpha;  // 启用布尔输出
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << noboolalpha;  // 关闭布尔输出
}

// 赋值运算符
void q3(){
    int a;
    cout << (a = 100) << endl;
    cout << (a += 10) << endl;
    cout << (a -= 10) << endl;
    cout << (a *= 10) << endl;
    cout << (a /= 10) << endl;
}

// 逻辑运算符
void q4(bool a,bool b){
    cout << boolalpha;  // 启用布尔输出
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << !a << endl;
    cout << noboolalpha;  // 关闭布尔输出
}

// C++表达式
void q5(){
    143783274892373274;
    1 + 1;
    int a = 10;
    int b = 20;
    a+b;
    max(100,200) + 100;
    (((((((((((((((1+1)))))))))))))));
}

int main(){
    q4(true, true);
    q4(false, true);
    return 0;
}
// 赋值运算符
void demo1() {
    int a    ;
    a=10     ;
    a+=10    ;
    a-=10    ;
    a*=2     ;
    a/=10    ;
}

void demo2() {
    int a = 1;
    int b = 2;
    a+=b=100  ;
    cout << a << endl;
}

int main() {
    demo2();
    return 0;
}

