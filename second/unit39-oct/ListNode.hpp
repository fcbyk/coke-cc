#pragma once
#include <iostream>
using namespace std;

// 定义链表节点结构
struct ListNode {
    int val;
    ListNode* next;
};

// 创建一个新节点
ListNode* createNode(int value){
    ListNode* newNode = new ListNode;
    newNode->val = value;
    newNode->next = nullptr;
    return newNode;
}

// 释放链表内存
void freeList(ListNode* head){
    ListNode* current = head;
    while (current != nullptr){
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    delete head;
}

// 打印链表
void printList(ListNode* head){
    ListNode* current = head;
    while (current != nullptr){
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "null" << endl;
}

// 添加节点
void listPush(int el,ListNode* head){
    ListNode* last = head;
    while (last->next != nullptr){
        last = last->next;
    }
    last->next = createNode(el);
}

