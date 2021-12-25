#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    vector<int> step (nums.size(), 0);
    int count = 0;
    step[0] =0;
    for(int i = 0; i < nums.size() ;i++){
        for(int t = 0; t < nums[i]; t++){
            if(i +  t  < nums.size())
                step[i + t + 1] = count;
        }
        count ++;
    }
    for(int i = 0; i < step.size(); i++){
        cout << step[i] << " ";
    }
    cout << endl;
    return step[step.size()-1];
}