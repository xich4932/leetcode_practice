#include <iostream>
#include<vector>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int max_ = nums[0];
    int min_ = nums[0];
    int sum = 0;
    int dp = 0;
    for (int i = 1; i < nums.size(); i++)
    {
       max_ = max(nums[i-1] + nums[i], nums[i]);
       max_ = max(max_ , nums[i]);
        sum += nums[i];
    }

    for(int i = 1; i < nums.size() - 1; i++){
        min_ = max(nums[i-1] + nums[i], nums[i]);
        min_ = max(min_ , nums[i]);
    }
    return max(sum - min_, max_);
}