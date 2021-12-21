#include<vector>
#include<iostream>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}


int jump_ii(vector<int>& nums) {
    if(nums.size() == 1) return 0;
    int step = 1;
    int i = 0;
    int furthest_ = 0;
    vector<int> steps (nums.size(), 0);
    while(i < nums.size() ){
        
        for(int s = 1; s <= nums[i]; s++){
            if(i + s  < nums.size()){
                steps[i + s] = step;
                if(nums[i + s]){
                    furthest_ = nums[i + s ] > furthest_? nums[i+s] : furthest_; 
            }
            }
        }
        i += furthest_;
        step ++;
    }
    //cout << steps[steps.size() -1] <<endl;
   // printer(steps);
    //cout << "steps " << step - 1 <<endl;
   // //cout << step - 1 <<endl;
    return steps[steps.size() - 1];
}