#include<vector>
#include<iostream>
using namespace std;


int jump_ii(vector<int>& nums) {
    int step = 1;
    int i = 0;
    int furthest_ = 0;
    vector<int> steps (nums.size(), 0);
    while(i < nums.size() - 1){
        for(int s = 1; s <= nums[i]; i++){
            
            if(i + s  < nums.size()){
                steps[i + s] = step;
            }
            if(nums[i + s]){
                furthest_ = max(furthest_, nums[i] + s);
            }
            
        }
        step ++;
    }
    return step;
}