#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    vector<int> step (nums.size(), 0);
    int count = 1;
    step[0] =0;
    int i = 0;
    while(i < nums.size()){
        if(step[i]){
            i ++;
            continue;
        }
        for(int t = 1; t <= nums[i]; t++){
            if(i +  t  < nums.size())
                step[i + t ] = count;
        }
        //cout << i <<endl;
        i ++;
        //i += nums[i] ;
        
        count ++;
    }

    for(int i = 0; i < step.size(); i++){
        cout << step[i] << " ";
    }
    cout << endl;
    return step[step.size()-1];
}