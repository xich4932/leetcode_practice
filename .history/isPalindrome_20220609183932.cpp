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
    int i ,j;
    if(str.length() % 2 ){
        i = str.length() / 2;
        j = i;
    }else{
        j = str.length() / 2;
        i = j - 1;
    }
    cout << str <<endl;
    while(i >= 0 && j < str.length()){
        cout << str[i] <<" "<< str[j] <<endl;
        if(str[i] != str[j]) return false; 
        
        i --; j++;
    }
    return 1;
}