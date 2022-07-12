#include<iostream>
#include<vector>
using namespace std;
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    if(matrix.size() == 0) return 0;
    int r = 0, c = matrix[0].size() - 1;
    
    while( r < matrix.size() && c >= 0){
       // cout << matrix[r][c] <<endl;
        if(matrix[r][c] == target) return 1;
        if(matrix[r][c] > target){
            c --;
        }else{
            r ++;
        }
    }
    return false;
    
}