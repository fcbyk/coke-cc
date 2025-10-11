#include "ListNode.hpp"
using namespace std;

int main(){
    ListNode *list = createNode(100);
    printList(list);
    listPush(200,list);
    listPush(300,list);
    printList(list);
    freeList(list);
    return 0;
}