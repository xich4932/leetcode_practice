#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int sum = accumulate(piles.begin(), piles.end(), 0);
    int start = sum / h;

    while (1)
    {
        int copy_h = h;
        for(auto && pile : piles){
            copy_h -= (pile / start);
            if(pile % start) copy_h --;
            if()
        }
    }
    
}