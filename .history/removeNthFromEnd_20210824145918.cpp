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
      cout << head->val <<endl;
      int len = 0;
      int lastN ;
      ListNode * temp_remove = head;
      while(temp != nullptr){
            if(len == n - 1){
                  temp_remove->next = head;
            }else if(len > n - 1){
                  temp_remove = temp_remove->next;
            }
            len ++;
            temp = temp->next;
      }
      temp_remove->next = temp_remove->next->next;
      return head;
}