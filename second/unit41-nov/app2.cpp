#include <iostream>
using namespace std;

int add(int a,int b,int c){
    int sum = a + b + c;
    return sum;
}

int sumOfDigits(int num){
    int sum = 0;
    while (num!=0){
        sum = sum + num%10;
        num = num/10;
    }
    return sum;
}

bool isPositive(int a){
    if (a>0){
        return true;
    }else{
        return false;
    }
}

int findMax(int a, int b, int c){
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
}

double circleCir(double r){
    return 2 * 3.14 * r;
}

double circleArea(double r){
    return 3.14 * r * r;
}

int main(){
    cout << isPositive(-23);
    return 0;
}