#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

bool isPalindrome(string s){
    stringstream ss;
    ss << s;
    string str = "";
    string temp ; 
    while(ss >> temp) str += temp;
    cout << ss <<endl;
    return 1;
}