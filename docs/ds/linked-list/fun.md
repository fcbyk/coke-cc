<h2 style="margin-top: 20px;" id="fun">​定义 Def</h2>

### 逻辑描述

单链表（Singly Linked List）是一种**线性数据结构**，其逻辑结构由一系列**节点（Node）**通过**单向指针**连接而成。每个节点包含两部分：
1. **数据域（Data）**：存储实际的数据（如整数、字符串等）。
2. **指针域（Next）**：存储指向下一个节点的地址（或 `NULL`，表示链表结束）。

### 优缺点​​

#### **✅ 优点**
1. **动态扩容**：无需预先分配固定大小，适合数据量不确定的场景。  
2. **高效插入/删除**：在已知位置操作时比数组更快（尤其是头部操作）。  

#### **❌ 缺点**
1. **访问效率低**：必须从头遍历，无法随机访问（查找效率 O(n)）。  
2. **额外空间开销**：每个节点需要存储指针，占用更多内存。  

### ​​节点定义

::: code-group

```cpp [伪代码]
结构体{
    数据域，
    指向下一个节点的指针，
};
```

```cpp [示例]
// 链表节点结构体
struct ListNode {
    int data;           // 数据域
    ListNode* next;     // 指向下一个节点的指针
};
```

:::

## 操作 OP

> [!TIP] 只需要知道链表的头节点，即可进行链表的操作

### 创建节点

::: code-group

```cpp [伪代码]
函数 createNode(data):
    分配一个新节点 newNode
    newNode.data ← data   // 设置数据域
    newNode.next ← NULL   // 初始时 next 指针为空
    返回 newNode
```

```cpp [示例]
// 创建新节点
ListNode* createNode(int data) {
    ListNode* newNode = new ListNode;  // 动态分配内存
    newNode->data = data;              // 初始化数据域
    newNode->next = nullptr;           // 初始化指针域（指向空）
    return newNode;                    // 返回新节点指针
}
```

:::

### 尾部添加节点

::: code-group

```cpp [伪代码]
函数 insertAtTail(head, data):
    newNode ← 新建节点(data)  // 创建新节点，data 赋值，next 设为 NULL
    
    if head == NULL:         // 如果链表为空
        head ← newNode       // 新节点成为头节点
        return
    
    current ← head           // 从头节点开始遍历
    while current.next != NULL:  // 找到最后一个节点（current.next == NULL）
        current ← current.next
    
    current.next ← newNode   // 将新节点链接到链表尾部
```

```cpp [示例]
// 在链表尾部插入节点
void insertAtTail(ListNode* &head, int data) {
    ListNode* newNode = createNode(data);

    if (head == nullptr) {
        head = newNode;  // 链表为空，新节点成为头节点
        return;
    }

    ListNode* current = head;
    while (current->next != nullptr) {  // 遍历到最后一个节点
        current = current->next;
    }

    current->next = newNode;  // 在尾部插入新节点
}
```

:::


