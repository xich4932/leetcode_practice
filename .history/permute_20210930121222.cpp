#include<iostream>
#include<vector>
using namespace std;

void printer1(vector<vector<int>> vec){
    for(int d = 0; d < vec.size(); d++){
        for(int i = 0; i < vec[d].size(); i++){
            cout << vec[d][i] << " ";
        }
        cout <<endl;
    }
}


void dfs(vector<int>& nums, vector<vector<int>> vec, int (&arr)[]){
   if(n == nums.size()){
       vec.push_back(nums);
       return ;
   }
   for(int e =0; e < nums.size(); e++){
       if(!arr[e]){
           arr[e] = 1;
           dfs(nums,)
       }
   }

}

vector<vector<int>> permute(vector<int>& nums) {
    int arr[nums.size()] = {0};
    vector<vector<int>> vec;
    vector<int> emp;
    dfs(nums,0, vec, arr);
    return vec;
}

