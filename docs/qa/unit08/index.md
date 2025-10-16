# C++ 递归

---

<CCollapseGroup>

<CCollapse title="什么是递归？">

**递归** 是函数通过调用自身来解决问题的方法，包含两个核心部分：
1. **基线条件（Base Case）**：递归终止的条件，防止无限调用。
2. **递归关系（Recursive Case）**：将问题分解为更小的同类子问题。

类比：像俄罗斯套娃，打开一层后还是同样的结构，直到最小的套娃（基线条件）出现时停止。

</CCollapse>

<CCollapse title="如何编写递归函数？">

> [!TIP] 核心是关注转递的参数如何变化

1. **确定基线条件（Base Case）：** 明确递归何时结束，也就是最简单的情况。
2. **找出递归关系（Recursive Case）：** 将复杂问题分解为更小的同类问题。
3. **确保向基线条件推进：** 每次递归调用都要让问题规模减小，最终到达基线条件。

#### 注意

1. 能做对题就行
2. 相信递归关系成立，不要多想
3. 只关注当前问题层


<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>
</CCollapse>

<CCollapse title="什么是汉诺塔问题？">

汉诺塔问题是由法国数学家**爱德华·卢卡斯（Édouard Lucas）** 在1883年提出的。

动画网站：https://apps.fuyeor.com/zh-cn/games/hanoi/

有三根柱子和64个大小不同的盘子，需要把所有盘子从第一根柱子移动到第三根柱子，但是有三个规则：

1. 每次只能移动一个盘子
2. 只能移动最上面的盘子
3. 大盘子不能放在小盘子上面

<template #extra>
    <CBadge text="经典递归问题" variant="outline" color="#722ed1" />
</template>
</CCollapse>

<CCollapse title="什么是全排列？">

**全排列**就是把一组元素的所有可能的排队顺序都找出来！

- 12的全排列为：12、21
- 123的全排列为：123、132、213、231、312、321

</CCollapse>

<CCollapse title="什么是递阶段、什么是归阶段？">

**递阶段 (压栈)**：函数**不断调用自身**，分解问题，直到触达终止条件的过程。

**归阶段 (弹栈)**：函数从终止条件开始**逐层返回**，将子问题的解组合成最终答案的过程。

**递阶段和归阶段共同构成了一个完整的递归过程**

```cpp
#include <iostream>
using namespace std;

void print_recur(int n) {
    // 基线条件
    if (n > 3) return;

    // 递阶段：调用前打印（自上而下），输出：1 2 3
    cout << n << " ";  
    
    // 递归调用，n依次变大
    print_recur(n + 1); 
    
    // 归阶段：返回后打印（自下而上），输出：3 2 1
    cout << n << " ";  
}

int main() {
    print_recur(1);  // 输出：1 2 3 3 2 1
    return 0;
}
```

</CCollapse>

</CCollapseGroup>





