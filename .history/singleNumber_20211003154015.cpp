#include<iostream>
#include<vector>
using namespace std;
//vector<int> vec= {1,2,4,2,1,};

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
        //for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d][f] << " ";
       // }
       // cout << endl;
    }
    cout << "------------------"<<endl;
}

int singleNumber(vector<int>& nums) {
    if(nums.size() == 1) return nums[0];
    int c = 0, r = 0;
    for(c = 0; c < nums.size() ; c++){
        for(r = c+1; r < nums.size(); r++){
            if(nums[c] == nums[r]){
                int temp = nums[c+1];
                nums[c+1] = nums[r];
                nums[r] = temp;
            }
        }
    }
    printer(nums);
    return nums[1] == nums[0]? nums[nums.size()-1] : nums[0];
    
}