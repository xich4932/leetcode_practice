#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int trap(vector<int>& height){

}

/* int trap(vector<int> &height){
    int l = 0;
    int right = 3;
    stack<int> stack_;
    stack_.push(height[0]);
    int sum = 0;
    for(int i = 0; i < height.size(); i++){
        while(!stack_.empty() && height[stack_.top()] < height[i]){
            int cur = stack_.top();
            stack_.pop();
            if(stack_.empty()) break;
            int l = stack_.top();

        }
        stack_.push(i);
    }
} */