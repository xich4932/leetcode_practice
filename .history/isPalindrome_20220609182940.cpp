#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

bool isPalindrome(string s){
    stringstream ss;
    ss << s;
    string str = "";
    string temp ; 
    for(auto c : s){
        if( isalpha(c)) str+= c;
    }
    //cout << str <<endl;
    for(int i = 0; i < s.length(); i++){
        
    }
    return 1;
}