<h2 style="margin-top: 20px;" id="aaa">定义 Def</h2>

### 节点类

```cpp
// 链表节点类
template <typename T>
class Node {
public:
    T data;         // 数据域
    Node* next;     // 指向下一个节点的指针

    // 构造函数
    Node(T data) : data(data), next(nullptr) {}
};
```

### 链表类

```cpp
// 链表类
template <typename T>
class LinkedList {
private:
    Node<T>* head;  // 头节点指针
    int size;       // 链表长度

public:
    // 构造函数
    LinkedList() : head(nullptr), size(0) {}

    // 链表操作
    void insertAtTail(T data);
};
```

## 操作 OP

### 尾部添加节点

```cpp
// 在链表尾部添加节点
template <typename T>
void LinkedList<T>::insertAtTail(T data) {
    Node<T>* newNode = new Node<T>(data);
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    size++;
}
```