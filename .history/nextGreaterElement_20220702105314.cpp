#include<iostream>
#include<vector>
#include<set>
using namespace std;

int nextGreaterElement(int n) {
   set<int> set_;
   int nn = n;
   while(n > 0){
     set_.insert(n % 10);
     n /= 10;
   }
   
    int ans = 0;
    for(auto ss = set_.begin(); ss != set_.end(); ss++){
        cout << *ss <<endl;
        if(ss == set_.begin()){
            ans = * ss;
        }else{
            ans = (*ss) * 10 + ans;
        }
        
        cout << ans <<endl;
    }
    return ans == nn? -1 : ans;
}