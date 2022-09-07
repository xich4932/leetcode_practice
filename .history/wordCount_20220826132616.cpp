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
                for(int j = 0; j < temp_vec.size(); j++){
                    if(! temp.count(temp_vec[j])) break;
                    count ++;
                }
            }
        }
   }
}