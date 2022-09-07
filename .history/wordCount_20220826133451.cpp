#include<iostream>
#include<vector>
#include<set>
using namespace std;

int wordCount(vector<string>& startWords, vector<string>& targetWords) {
   vector<set<char>> target_vec;
   vector<set<char> > start_vec;
   for(auto word : startWords){
        set<char> temp;
        for(int i = 0; i < word.size(); i++) temp.insert(word[i]);
        start_vec.push_back(temp);
   }
   int count = 0;
   for(auto word : targetWords){
        set<char> temp;
        for(int i = 0; i < word.size(); i++) temp.insert(word[i]);
        for(auto temp_vec : start_vec){
            if(temp_vec.size() == temp.size() - 1){
                auto it = temp_vec.begin();
                while(it != temp_vec.end() && temp.count( *it) ) it++;
                if(it == temp_vec.end()){
                    count ++;
                    break;
                }
            }
        }
   }
   return count;
}