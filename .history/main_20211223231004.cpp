#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}


int main(void){
    vector<int> vec1 = {1,3,5,7,9};
    vector<int> vec2 = {7,7,7,7};
    vector<int> vec3 = {3,-1,-4,-9};
    cout << numberOfArithmeticSlices(vec1) <<endl;
    cout << numberOfArithmeticSlices(vec2) <<endl;
    cout << numberOfArithmeticSlices(vec3) <<endl;
   

    return 0;
}


