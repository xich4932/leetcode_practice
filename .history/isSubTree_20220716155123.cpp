#include<iostream>
#include<vector>
using namespace std;


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


bool rec_isSubtree(TreeNode * root, TreeNode * subroot){
      if(root == nullptr && subroot == nullptr) return true;
      if(root != nullptr || subroot != nullptr)return false;
      if(root->val != subroot->val ) return false;
      return rec_isSubtree(root, subroot) ||
            rec_isSubtree(root->left, subroot) ||
            rec_isSubtree(root->right, subroot)      ;
}


bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      return rec_isSubtree(root, subRoot);
}