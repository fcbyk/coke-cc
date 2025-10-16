// #region a
#include <iostream>
using namespace std;

int main（） {
    cout << 10086 << endl；
    return 0;
}
// #endregion a

// #region b
#include <iostream>
using namespace std;

int main（） { // [!code error]
    cout << 10086 << endl； // [!code error]
    return 0;
}

/**
错误解释：
括号（）和分号；使用的是中文符号。
同学们需要记住，我们写的c++代码，用的全是英文符号噢

在计算机中，中英文符号是不同的哈，敲C++代码时，把输入法切换至英文哦
*/
// #endregion b