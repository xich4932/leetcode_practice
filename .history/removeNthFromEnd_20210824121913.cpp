#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode * temp = head;
      int len = 0;
      int lastN ;
      ListNode * temp_remove;
      while(temp != nullptr){
            if(len == n - 1){
                  temp_remove = head;
            }else if(len > n - 1){
                  temp_remove = temp_remove->next;
            }
            len ++;
            temp = temp->next;
      }

      return temp_remove;
}