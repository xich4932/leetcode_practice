#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = -999;
    int min_ = 999;
    int product = nums[0];
    for(int i = 0; i < nums.size(); i++){
        product = max(product, max_);
        max_ = max(max_ * nums[i], max_);
        if(nums[i] < 0){
            max_ = min_ * nums[i];
        } 
        min_ = min(min_ * nums[i], min_);
        cout << product << endl;
    }
    return product;
}