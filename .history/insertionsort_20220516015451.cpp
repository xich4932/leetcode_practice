#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int> &vec){
    for(int i = 0; i < vec.size(); i++){
        int j = i + 1;
        //ascending order
        while(j < vec.size() && vec[i] > vec[j] ){
            j++;
        }
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;         
    }
    
}