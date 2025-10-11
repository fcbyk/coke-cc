<CCollapse title="break语句的用法？">

**`break`** 是C++中的流程控制语句，用于立即终止当前所在的 **`循环`** 或 **`switch语句`**。

::: code-group

```cpp [用法1]
// 在循环中提前退出​​
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  // 当i等于5时退出循环
    }
    cout << i << " ";  // 输出: 0 1 2 3 4
}
```

```cpp [用法2]
// 在switch语句中防止case穿透​
switch (value) {
    case 1:
        cout << "一";
        break;  // 执行完case1的代码后，结束switch语句
    case 2:
        cout << "二";
        break;
}
```

```cpp [用法3]
// 满足条件时提前终止循环​​​
while (true) {
    int input;
    cin >> input;
    if (input == 0) break;  // 输入0时退出循环
}
```

```cpp [用法4]
// 在嵌套循环中退出内层循环​​
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (i == 1 && j == 1) break;  // 只退出内层循环
        cout << i << "," << j << " ";
    }
}
```

:::

- `break`只能用于循环(`for`/`while`/`do-while`)和`switch语句`中
- 在嵌套循环中，`break`只退出当前所在的最近一层循环
- 滥用`break`可能会降低代码可读性，应谨慎使用
- 在`switch语句`中，忘记写`break`会导致`case穿透`（执行下一个case的代码）

</CCollapse>


<CCollapse title="continue语句的用法?">

`continue`控制语句，用于跳过当前循环迭代的剩余部分，直接进入下一次循环的条件检查。

::: code-group


```cpp [用法1]
// 跳过当前迭代
for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue;  // 跳过i=2的这次迭代
    }
    cout << i << " ";  // 输出: 0 1 3 4
}
```

```cpp [用法2]
// 条件性处理元素
for (int num : {1, 2, 3, 4, 5}) {
    if (num % 2 == 0) continue;  // 跳过偶数
    cout << num << " ";  // 输出: 1 3 5
}
```

```cpp [用法3]
// 过滤不需要处理的情况​​
while (读取数据) {
    if (数据无效) continue;  // 跳过无效数据
    处理有效数据();
}
```

:::

- `continue`只能用于循环结构（`for`/`while`/`do-while`）
- 在`for循环`中，`continue`会跳过循环体剩余部分，但仍会执行更新语句
- 在`while`/`do-while`循环中，`continue`会直接跳转到条件检查
- 过度使用`continue`可能会降低代码可读性，应考虑是否可以用`if-else`替代

</CCollapse>

<CCollapse title="break语句和continue语句的区别">

| 特性       | break                     | continue                  |
|------------|---------------------------|---------------------------|
| 作用       | 完全退出当前循环或switch  | 跳过当前迭代，继续下一次循环 |
| 适用场景   | 循环和switch              | 仅循环                    |
| 嵌套循环   | 只影响当前层循环          | 只影响当前层循环          |


```cpp
// 使用break
for (int i = 0; i < 5; i++) {
    if (i == 3) break;
    cout << i << " ";  // 输出: 0 1 2
}

// 使用continue
for (int i = 0; i < 5; i++) {
    if (i == 3) continue;
    cout << i << " ";  // 输出: 0 1 2 4
}
```

</CCollapse>