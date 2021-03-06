#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode();
    ListNode * ret = head;
    while(l1 != nullptr || l2 != nullptr){
        if(l1->val >= l2->val){
            head->next = l1;
            l1 = l1->next;
        }else{
            head->next = l2;
            l2 = l2->next;
        }
    }
    return head->next;
}