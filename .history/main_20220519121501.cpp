#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>

//using namespace std;


/*  vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        while(it != digits.rend()){
            *it += 1;
            if(*it == 10){
                *it = 0;bool buddyStrings(string s, string goal)
                digits.insert(digits.begin(), 1);
                
            }else{
                break;
            }
            it ++;
        }
        
        return digits;
} */


int main(void){
    vector<vector<int>> vec {{3,4}, {2,3}, {1,2}};
    vector<int> ans = findRightInterval(vec);
    printer(ans); 
        vector<vector<int>> vec1 {{1,4}, {2,3}, {3,4}};
    vector<int> ans1 = findRightInterval(vec1);
    printer(ans1); 


  
}
