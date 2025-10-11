#include <iostream>
using namespace std;

void fun1() {
    cout << "函数1" << endl;
}

void fun2() {
    cout << "函数2" << endl;
    fun1();
}

int main() {
    fun2();
    cout << "主函数" << endl;
    return 0;
}