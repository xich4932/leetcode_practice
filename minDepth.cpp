#include <iostream>
#include <vector>
using namespace std;

/* 
void traversal(TreeNode *root, vector<int> &depth, int cur_depth){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr){
        depth.push_back(cur_depth);
        return;
    }
    
    cur_depth ++;
    traversal(root->left, depth, cur_depth );
    traversal(root->right, depth, cur_depth );
}


 */
/* 
int minDepth(TreeNode *root){
    vector<int> depth;
    traversal(root, depth,1 );
    int max_depth = INT_MAX; 
    if(! root) return 0;
    for(int i = 0; i < depth.size(); i++){
        max_depth = min(max_depth, depth[i]);
    }
    return max_depth;
} */