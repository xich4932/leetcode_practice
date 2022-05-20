#include<iostream>
#include<vector>
#include<map>
#include"header.h"
using namespace std;

template<typename T, typename U>
void printer_map(map<T,U> map_){
    for(auto &it : map_){
        cout << it.first << " -> " << it.second <<endl;
    }
}

int findKthNumber(int m, int n ,int k){
    map<int,int> map_;
    int i = 1; int j = 1;
    int sum =0;
    while(sum < k){
        for(int jj = 1; jj <= n; jj++){
            //map_[i * jj ] = map_.count(i * jj) ? map_[i * jj] + 1 : 1;
            if(map_.count(i * jj)){
                map_[i * jj] ++;
            }else{
                map_.insert({i * jj , 1});
            }
            sum ++ ;
            printer_map(map_);
        }
        if(sum < k) break;
        for(int ii = 1; ii <= m; ii++){
            if(map_.count(ii * j)){
                map_[ii * j] ++;
            }else{
                map_.insert({ii * j , 1});
            }
            sum ++;
            printer_map(map_);
        }

    }
    
    /* for(auto &it : map_){
        cout << it.first << " -> "<< it.second << endl;

    } */
    return map_.rbegin()->first;
}