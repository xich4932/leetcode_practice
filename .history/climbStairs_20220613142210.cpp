#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n){
    vector<int> vec {1,2};
    for(int i = 2; i  < n; i++){
        vec.push_back(vec[i-1] + vec[i-2]);
    }
    return vec.size();
}