#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include<set>
#include<map>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include<queue>

#include"print_2d_array.cpp"
#include"KthLargest.cpp"
#include"Twitter.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> vec1{3,2,4,1,5};
	vector<int> vec2{1,8,3,4,9,6,7,2,5,10};
	cout << numTimesAllBlue(vec1) <<endl;
	cout << numTimesAllBlue(vec2) <<endl;
	return 0;
}
