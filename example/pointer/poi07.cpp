#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,3,5,7,9};
    int *p = nums;
    cout << *(p+2) << " " << p[3] << endl;
    return 0;
}