#include<iostream>
#include<vector>
using namespace std;




int coinChange(vector<int>& coins, int amount) {
    vector<int> vec (10001, -1);
    vec[0] = 0;
    if(! amount ) return 0;  
    for(auto c : coins){
        vec[c] = 1;
    }
    
    for(int i =1; i <= amount; i++){
        vector<int> cur (coins.size());
        int mini = INT16_MAX
        for(auto c : coins){
            cur.push_back((i - c) < 0? -1 : vec[i-coins] );
        }
        int min1 = (i - coins) < 0? -1 : vec[i - coins];
    }
}