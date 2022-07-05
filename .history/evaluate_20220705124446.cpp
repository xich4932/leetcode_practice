#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<unordered_map>
using namespace std;


unordered_map<string, vector<int>> mymap;



string parseVar(string str, int start){
    string ans = "";
    while(start < str.size() && str[start] != ')' && str[start] != ' '){
        ans += str[start];
        start ++;
    }
    return ans;
}

int parseInt(string str, int start){
    int head = start;
    while( start < str.size() && str[start] != ' '){
        start ++;
    }
    return stoi(str.substr(head, start - head));
}

int recursive_evaluate(string &expression, int &start){
    if(islower(expression[start])){
        string temp = parseVar(expression, start);
        return mymap[temp].back();;
    }else{
        return parseInt(expression, start);
    }
    int ret = 0;
    start ++;
    if(expression[start] == 'l'){
        start += 4;
        vector<string> vec;
        while(1){
            if(islower(expression[start])){
                ret = recursive_evaluate(expression, start);
                break;
            }
            string temp = parseVar(expression, start);
            if(expression[start] == ')'){
                ret = mymap[temp].back();
                break;
            }
            vec.push_back(temp);
            start ++;
            int val = recursive_evaluate(expression, start);
            mymap[temp].push_back(val);
            start++;
        }
    }else if(expression[start] == 'm'){
        start += 5;
        int e1 = recursive_evaluate(expression, start);
        start ++;
        int e2 = recursive_evaluate(expression, start);
        return e1 * e2;
    }else if(expression[start] == 'a'){
        start += 4;
        int e1 = recursive_evaluate(expression, start);
        start ++;
        int e2 = recursive_evaluate(expression, start);
        return e1 + e2;
    }
    start ++;
    return ret;
}

int evaluate(string expression){
    int start = 0;
    return recursive_evaluate(expression, start);
}