#pragma once
#include <iostream>
using namespace std;

// 定义链表节点结构
struct ListNode {
    int data;           // 数据域
    ListNode* next;     // 指向下一个节点的指针
};

// 创建新节点
ListNode* createNode(int data, ListNode* next = nullptr) {
    ListNode* newNode = new ListNode;  // 动态分配内存
    newNode->data = data;              // 初始化数据域
    newNode->next = next;              // 初始化指针域
    return newNode;                    // 返回新节点指针
}

// 在链表头部插入节点
void insertAtHead(ListNode* &head, int data) {
    ListNode* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

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

// 删除头部节点
void deleteAtHead(ListNode* &head) {
    if (head == nullptr) return;
    ListNode* temp = head;
    head = head->next;
    delete temp;
}

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

// 清空链表
void clearList(ListNode*& head) {
    while (head != nullptr) {
        deleteAtHead(head);
    }
}

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