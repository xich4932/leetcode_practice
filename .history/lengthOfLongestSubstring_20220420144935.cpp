#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
#include <algorithm>
using namespace std;


int lengthOfLongestSubstring(string s) {
    int len = 1;
    int temp_len = 1;
    unordered_set<char> set_;
    set_.insert(s[0]);
    int size_ = s.size();
    int start = 0;
    for(int i = 0; i < s.length(); i++){
        
    }
}


/* int lengthOfLongestSubstring(string s) {
    if(s == "") return 0;
    unordered_set<char> set;
    int ret = 0;
    int left = 0;
    //int max = 0;
    for(int i =0; i < s.length(); i++){
        while(set.find(s[i]) != set.end()){
            set.erase(s[left]);
            left ++;
        }

        ret = max(ret, i-left+1);
        set.insert(s[i]);
    }
    return ret;
    
}
 */