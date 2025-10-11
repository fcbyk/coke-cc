#include <iostream>
using namespace std;

int main(){
    double kg = 100;
    while (kg > 70){
        double choice;
        cout << "输入负数跑步，输入整数吃汉堡：";
        cin >> choice;
        kg += choice;
        cout << "当前体重：" <<  kg << "kg" << endl;
    }
    return 0;
}