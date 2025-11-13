#include <iostream>
using namespace std;

// 1. 坐标象限判断
void checkQuadrant(int x, int y) {
    if (x == 0 && y == 0) cout << "原点";
    else if (x == 0) cout << "y轴";
    else if (y == 0) cout << "x轴";
    else if (x > 0 && y > 0) cout << "第一象限";
    else if (x < 0 && y > 0) cout << "第二象限";
    else if (x < 0 && y < 0) cout << "第三象限";
    else cout << "第四象限";
    cout << endl;
}

// 2. 成绩等级判断
void checkGrade(int score) {
    if (score < 0 || score > 100) {
        cout << "无效成绩" << endl;
    } else {
        switch (score / 10) {
            case 10:
            case 9: cout << "优秀"; break;
            case 8: cout << "良好"; break;
            case 7: cout << "中等"; break;
            case 6: cout << "及格"; break;
            default: cout << "不及格"; break;
        }
        cout << endl;
    }
}

// 3. 月份天数判断
void getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31天" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30天" << endl;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                cout << "29天(闰年)" << endl;
            } else {
                cout << "28天" << endl;
            }
            break;
        default:
            cout << "无效月份" << endl;
    }
}

// 4. 工作日判断
void checkWeekday(int day) {
    switch (day) {
        case 1: case 2: case 3: case 4: case 5:
            cout << "工作日" << endl;
            break;
        case 6: case 7:
            cout << "周末" << endl;
            break;
        default:
            cout << "无效输入(1-7)" << endl;
    }
}

// 5. 三角形类型判断(judgeTriangle)
string judgeTriangle(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) return "不是三角形";
    if (a == b && b == c) return "等边三角形";
    if (a == b || a == c || b == c) return "等腰三角形";
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) return "直角三角形";
    return "普通三角形";
}

// 6. 字符类型识别(classifyChar)
string classifyChar(char ch) {
    if (ch >= '0' && ch <= '9') return "数字";
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return "字母";
    return "其他字符";
}

// 7. 数字转换(numberToChinese)
void numberToChinese(int num) {
    string chinese[] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
    if (num >= 0 && num <= 9) cout << chinese[num] <<endl;
    else cout << "无效数字" << endl;
}

int main(){
    numberToChinese(4);
    return 0;
}