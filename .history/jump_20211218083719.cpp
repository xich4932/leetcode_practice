#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        if(i + nums[i] < nums.size()){
            nums[i] += i;
        }else{
            nums[i] = nums.size() - 1;
        }        
    }
    int i = 0;
    int count = 0;
    while ( i < nums.size())
    {
        i += nums[i];
        cout << i <<endl;
        count ++;
    }
    return count;
}