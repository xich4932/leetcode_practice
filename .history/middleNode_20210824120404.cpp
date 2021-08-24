#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    int i = 0;
    ListNode * temp_head = head;
    while(temp_head != nullptr){
        i++;
        temp_head = temp_head->next;
    }
    temp_head = head;
    int time = i / 2 ;
    for(int r  =0 ; r < time; r++){
        temp_head = temp_head->next;
    }
    return temp_head;
}