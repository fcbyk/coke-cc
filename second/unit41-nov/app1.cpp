#include <iostream>
using namespace std;

void hello(){
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
}

void forHello(int n){
    for (int i = 0; i < n; ++i) {
        cout << "Hello World" << endl;
    }
}

void forStr(int n, string str){
    for (int i = 0; i < n; ++i) {
        cout << str << endl;
    }
}

void createBox(int width,int height){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*  ";
        }
        cout << endl;
    }
}

int main(){
    return 0;
}