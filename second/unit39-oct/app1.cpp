#include "ListNode.hpp"
using namespace std;

int main(){
    ListNode *list = createNode(100);
    printList(list);
    insertAtTail(list,300);
    insertAtTail(list,500);
    insertAtPosition(list,1,10075);
    printList(list);
    deleteAtTail(list);
    deleteAtHead(list);
    printList(list);
    setValueAt(list,1,200);
    cout << getLength(list) << endl;
    return 0;
}