
    #include <iostream>
    using namespace std;
    int main(){
        int score;
        cin >> score;

        // 检查输入是否合法
        if (score < 0 || score > 100){
            cout << "输入错误！成绩必须在0~100之间。";
            return 0;
        }

        // 判断等级
        if (score >= 90) cout << 'A';
        if (score >=80 && score <90)  cout << 'B';
        if (score >=70 && score <80)  cout << 'C';
        if (score >=60 && score <70)  cout << 'D';
        if (score <=60)  cout << 'E';

        return 0;
    }

