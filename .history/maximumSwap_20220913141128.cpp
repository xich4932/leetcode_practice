#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>

using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      map<int, int, greater<int> > mymap;
      int nums = num;
      string strnum = to_string(num);
      for(int i = 0; nums > 0; i++){
            mymap.insert({num% 10, i});
            nums /= 10;
      }
      auto it = mymap.begin();
      for(int i = 0; i < strnum.size(); i++){
            if(strnum[i] - '0' != it->first ){
                  char temp = strnum[i];
                  strnum[i] = strnum[it->second];
                  strnum[i] = temp;
                  break;
            }else{
                  it ++;
            }
      }
      
      return stoi(strnum);
}