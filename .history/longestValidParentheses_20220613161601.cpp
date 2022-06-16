#include<iostream>
#include<vector>
using namespace std;

int longestValidParentheses(string s){
    vector<int> vec (s.length(), 0);
    if(s.length() < 2) return 0;
    if(s[0] == '(' && s[1] == ')') s[1] = 2;
    int ans = 0;
    for(int c = 2; c < s.length(); c++){
        if(s[c] == '('){
            vec[c] = 0;
        }else{
            if(s[c-1] == '(' ){
                vec[c] = vec[c-2] + 2;
            }else if(c - vec[c-1] - 1 >= 0 && s[c - vec[c-1] - 1] == '('){
                vec[c] = vec[c-1] + 2;
                vec[c] += c - vec[c-1] - 2 >= 0? vec[c - vec[c-1] - 2] : 0;
            }
        }
        ans = max(ans, vec[c]);
    }
}