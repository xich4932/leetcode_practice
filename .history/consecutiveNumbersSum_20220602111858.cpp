#include<iostream>
#include<vector>
using namespace std;



double formua(int n, int a ){
    return n/a - (a-1)/2;
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int a = n;
    double fol = formua(n ,a);
    while(fol > 1){
        if(fol - int(fol) == 0) ret ++;
        fol = formua()
    }
    return ret;
}