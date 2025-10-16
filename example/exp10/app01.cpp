#include <iostream>
using namespace std;

struct Phone {
    string brand;      // 品牌
    string model;      // 型号
    string os;         // 操作系统
};

int main() {
    Phone myPhone = {"apple","iphone18","ios26"};
    cout << myPhone.brand << endl;
    return 0;
}