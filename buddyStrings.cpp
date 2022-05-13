#include<iostream>
#include<vector>
#include "header.h"
using namespace std;


bool buddyStrings(string s, string goal){
    vector<int> vec1(26, 0);
    vector<int> vec2(26, 0);
    int sum1 = 0;
    int sum2 = 0;
    if(s.length() != goal.length()) return 0;
    if(s.length() == 2){
        char ii = s[0];
        s[0] = s[1];
        s[1] = ii;
        if(s == goal) return 1;
        return 0;
    }
    vector<int> diff_;
    int two_char = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != goal[i]) diff_.push_back(i);
        vec1[s[i] - 'a'] ++;
        vec2[goal[i] - 'a'] ++;
        if(vec1[s[i] - 'a'] > 1) two_char ++;
        if(vec2[goal[i] - 'a'] > 1) two_char ++;
        if(diff_.size() > 2) return 0;
    }
    if(diff_.size() == 1) return 0;
    if(diff_.size() == 0 && two_char) return 1;
    if(diff_.size() == 0 ) return 0;
    
    //if(diff_.size() == 0 && s.length() == 2) return 1;
    char ii = s[diff_[0]];
    s[diff_[0]] = s[diff_[1]];
    s[diff_[1]] = ii;
    if(s == goal) return 1;
    
    return 0;
}