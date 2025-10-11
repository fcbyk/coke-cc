#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int ge = a%10;
    int shi = a/10;
    if (ge%shi==0){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}

