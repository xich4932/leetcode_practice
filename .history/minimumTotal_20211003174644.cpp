#include<iostream>
#include<vector>
using namespace std;



int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.size() == 1) return triangle[0][0];
    int arr[triangle[triangle.size()-1].size()];
     int ans[triangle[triangle.size()-1].size()] ;
    for(int r = 0; r < triangle[triangle.size()-1].size(); r++){
        arr[r] = triangle[triangle.size()-1][r];
        ans[r] = triangle[triangle.size()-1][r];
    }
   
    for(int c = triangle.size() - 1; c >= 0; c--){
        for(int t = 0; t < triangle[c].size(); t++){
            
            ans[t] = min(arr[t] + triangle[c][t], arr[t+1] + triangle[c][t]);
        }
        for(int r = 0; r < triangle[triangle.size()-1].size(); r++){
            arr[r] = ans[r];
            
    }
    }
    return arr[0];
}