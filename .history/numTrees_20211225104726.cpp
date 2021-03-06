#include<iostream>
#include<vector>
using namespace std;

int numTrees(int n ){
    vector<int> tree(n+1, 0);
    tree[0] = 1;
    tree[1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            tree[i] += tree[j-1] * tree[i-j];
        }
    }
    return tree[n];
}