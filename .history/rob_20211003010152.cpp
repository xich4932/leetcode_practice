#include<iostream>
#include<vector>
using namespace std;


int rob(vector<int> &nums){
    if(!nums.size()) return 0;
    if(nums.size() == 1) return 1;
    vector<int> ans;
    ans[0] = 0;
    ans[1] = max(ans[0], ans[1]);
    for(int i = 2; i < nums.size(); i++){
        ans[i] = max(ans[i-2]+nums[i], ans[i-1]);
    }
    return ans[ans.size() -1];
}