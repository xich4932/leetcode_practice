#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
    string str = to_string(n);
    int  i = str.size() - 1;
    for(; i > 0; i--){
        if(str[i] > str[i-1]){
            char temp = str[i];
            str[i] = str[i-1];
            str[i-1] = temp;
            break;
        }
    }
    if(i == 0) return -1;
    
    return n;
}