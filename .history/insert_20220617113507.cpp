#include<iostream>
#include<vector>
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
       Node *temp_node = new Node(insertVal);
        Node * start = head;
        start = start->next;
        int min_= INT16_MAX;
        int max_= INT16_MIN;
        Node* min_node;
        Node* max_node;
       while(start != head){
            if(start->val < insertVal && insertVal <  start->next->val){
                break;
            }
            if(min_ > start->val){
                min_ = start->val;
                min_node = start;
            }else if(max_ < start->val){
                max_ = start->val;
                max_node = start;
            }
           // min_ = min(min_, start->val);
           // max_ = max(max_, start->val);
            start = start->next;
       }
       if(start->val < insertVal && insertVal <  start->next->val){
            temp_node->node = start->next;
            start->next = temp_node->node;
        }else{
            max_node->next = temp_node;
            temp_node->next = min_node;
        }
    }
};