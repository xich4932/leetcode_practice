#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode * ret = new ListNode(0);
    ListNode * temp = ret;
    while(head != nullptr){
        
        ret->next = head;
        head = head->next;
    }
    
    return ret->next;
}