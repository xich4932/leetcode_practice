#include<iostream>
#include<vector>

using namespace std;

vector<int> missingTwo(vector<int>& nums){
      nums.push_back(-1);
      nums.push_back(-1);
      for(int i = 0 ; i < nums.size(); i++){
            while(nums[i] != -1 && nums[i] != i + 1){
                  int temp = nums[nums[i] - 1];
                  nums[nums[i] - 1] = nums[i];
                  nums[i] = temp;
            }
            print_1d_array(nums);
      }
      vector<int> ans;
      for(int n = 0; n < nums.size(); n++){
            if(nums[n]== -1 ){
                  ans.push_back(n + 1);
            }
      }
      return ans;
}