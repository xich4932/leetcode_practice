#include<iostream>
#include<vector>
using namespace std;




int coinChange(vector<int>& coins, int amount) {
    vector<int> vec;// (10001, INT16_MAX);
    vec.push_back(0);
    if(! amount ) return 0;  
    for(int i =1; i <= amount; i++){
        vector<int> cur (coins.size());
        int mini = INT16_MAX;
        
        for(auto c : coins){
            if(c == amount){
                return 1;
            }
            //cur.push_back((i - c) < 0? INT16_MAX : vec[i-c] );
            mini = min(mini, (i - c) < 0? INT16_MAX : vec[i-c] + 1);
           
        }
        vec.push_back(mini);
    }
    return vec[amount] == INT16_MAX ? -1 : vec[amount];
}