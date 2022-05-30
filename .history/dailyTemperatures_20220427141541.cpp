#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures){
      stack<int> stack_;
      int bottom = 0;
      //stack_.push();
      vector<int> ans(temperatures.size()) ;
      for(int i = 0; i < temperatures.size(); i++){
            while (stack_.size() > 0 && temperatures[i] > temperatures[stack_.top()])
            {
                  int curI = stack_.top();
                  stack_.pop();
                  ans[i] = i -curI;
            }
            stack_.push(temperatures[i]);
      }
      return ans;
}