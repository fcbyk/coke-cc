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

```cpp [自然语言]
结构体{
    数据域，
    指向下一个节点的指针，
};
```

```cpp [C++]
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

```cpp [自然语言]
函数 createNode(data,next = 空):
    创建一个 新节点
    新节点的数据域 = data
    新节点的next指针 = next
    返回 新节点
```

```cpp [C++]
// 创建新节点
ListNode* createNode(int data, ListNode* next = nullptr) {
    ListNode* newNode = new ListNode;  // 动态分配内存
    newNode->data = data;              // 初始化数据域
    newNode->next = next;              // 初始化指针域
    return newNode;                    // 返回新节点指针
}
```

:::

### 插入节点

**自然语言**

::: code-group

```cpp [头部插入]
函数 insertAtHead(head, data) {
    创建新节点(data, NULL)
    新节点.next = 头节点
    设置新节点为头节点
}
```

```cpp [尾部插入]
函数 insertAtTail(head, data):
    创建新节点(data, NULL)
    
    如果(链表为空):
        新节点成为头节点
        结束
    
    迭代指针 = 头节点
    循环(迭代指针指向最后一个节点时结束):
        迭代指针依次移动
    
    最后节点.next = 新节点
```

```cpp [指定位置插入]
函数 insertAtPosition(head, pos, data) {
    如果（位置 = 0）：
        头部添加节点
        结束
    
    创建新节点(data, NULL)

    迭代指针 = 头节点
    循环：
        移动迭代指针 pos-1 次
        如果迭代指针指向空，即超出范围，结束函数

    新节点.next = 迭代指针.next
    迭代指针.next = 新节点
}
```

:::

**代码实现**

::: code-group

```cpp [头部插入]
// 在链表头部插入节点
void insertAtHead(ListNode* &head, int data) {
    ListNode* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}
```


```cpp [尾部插入]
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

```cpp [指定位置插入]
// 添加节点到指定位置
void insertAtPosition(ListNode* &head, int pos, int data) {
    if (pos == 0) {
        insertAtHead(head, data);
        return;
    }
    ListNode* newNode = createNode(data);
    ListNode* current = head;
    for (int i = 0; i < pos-1 && current != nullptr; i++) {
        current = current->next;
    }
    if (current == nullptr) return; // 位置超出范围
    newNode->next = current->next;
    current->next = newNode;
}
```


:::

### 删除节点

**自然语言**

::: code-group

```cpp [头部删除]
函数 deleteAtHead(head) {
    如果是空链表，提前返回
    临时指针 = 头节点
    头节点 = 头节点的下一节点
    释放临时指针的内存
}
```

```cpp [尾部删除]
// 删除尾部节点
void deleteAtTail(head) {
    空链表直接返回

    如果链表只有一个元素
    释放头节点内存
    头节点指向空

    使用迭代指针，循环迭代至倒数第二个节点
    
    释放内存(迭代指针.next) 
    迭代指针.next = 空
}
```

```cpp [指定位置删除]
// 删除指定位置节点
函数 deleteAt(head, index)  {
    
    如果(是空链表 或者 index小于0):
        提示错误, 结束

    如果（位置 = 0）：
        删除头部节点
        结束

    迭代指针 = 头节点
    循环(迭代指针不指向空时)：
        移动迭代指针 index-1 次
    
    如果(迭代指针 = 空 或者 迭代指针.next = 空):
        即超范围，提前返回
    
    临时指针 = 迭代指针.next
    迭代指针.next = 迭代指针.next.next
    释放临时指针的内存
}
```

```cpp [清空]
函数 clearList(head) {
    循环(头节点不为空时):
        删除头节点
}
```

:::

**代码实现**


::: code-group

```cpp [头部删除]
// 删除头部节点
void deleteAtHead(ListNode* &head) {
    if (head == nullptr) return;
    ListNode* temp = head;
    head = head->next;
    delete temp;
}
```

```cpp [尾部删除]
// 删除尾部节点
void deleteAtTail(ListNode* &head) {
    if (head == nullptr) return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    
    ListNode* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    
    delete current->next;
    current->next = nullptr;
}
```

```cpp [指定位置删除]
// 删除指定位置节点
void deleteAt(ListNode*& head, int index) {
    if (head == nullptr || index < 0) return;
    
    if (index == 0) {
        deleteAtHead(head);
        return;
    }
    
    ListNode* current = head;
    for (int i = 0; i < index - 1 && current != nullptr; i++) {
        current = current->next;
    }
    
    if (current == nullptr || current->next == nullptr) {
        return;
    }
    
    ListNode* temp = current->next;
    current->next = current->next->next;
    delete temp;
}
```

```cpp [清空]
// 清空链表
void clearList(ListNode*& head) {
    while (head != nullptr) {
        deleteAtHead(head);
    }
}
```

:::

### 打印链表

::: code-group

```cpp [自然语言]
函数 printList(head):
    迭代指针 = 头节点
    循环（当前节点不为空）：
        打印当前节点的值
        迭代指针移动到下一个节点
```

```cpp [C++]
// 打印链表
void printList(ListNode* head){
    ListNode* current = head;
    while (current != nullptr){
        cout << current->data;
        if(current->next != nullptr) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}
```

:::

### 获取链表长度

::: code-group

```cpp [自然语言]
函数 getLength(head):
    长度 = 0

    迭代指针 = 头节点
    循环(迭代指针 != 空)
        长度++
        迭代指针移动到下一个节点
    
    返回 长度
```

```cpp [C++]
// 获取链表长度
int getLength(ListNode* head) {
    int length = 0;
    ListNode* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

```

:::

### 获取指定位置的值

::: code-group

```cpp [自然语言]
// 获取指定位置的值
函数 getValueAt(head, index) {
    
    如果(是空链表 或者 index小于0):
        提示错误, 返回-1

    
    迭代指针 = 头节点
    循环：
        移动迭代指针 index 次
        如果迭代指针指向空，即超出范围，提示错误, 返回-1
    
    返回 迭代指针.data
}
```

```cpp [C++]
// 获取指定位置的值
int getValueAt(ListNode* head, int index) {
    if (index < 0 || head == nullptr) return -1;

    ListNode* current = head;
    for (int i = 0; i < index && current != nullptr; i++) {
        current = current->next;
    }
    
    if (current == nullptr) return -1;

    return current->data;
}
```

:::

### 修改指定位置的值

::: code-group

```cpp [自然语言]
// 修改指定位置的值
函数 setValueAt(head, index, value)  {
    
    如果(是空链表 或者 index小于0):
        提示错误, 结束

    迭代指针 = 头节点
    循环：
        移动迭代指针 index 次
        如果迭代指针指向空，即超出范围，提示错误, 结束
    
    迭代指针.data = value
}
```

```cpp [C++]
// 修改指定位置的值
void setValueAt(ListNode* head, int index, int value) {
    if (index < 0 || head == nullptr) return;
   
    ListNode* current = head;
    for (int i = 0; i < index && current != nullptr; i++) {
        current = current->next;
    }
    
    if (current == nullptr) return;
    
    current->data = value;
}

```

:::
