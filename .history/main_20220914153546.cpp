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
#include"print_1d_array.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> vec1 {4,5,1,2,3};
	vector<int> vec2 {1,1};
	vector<int> vec3 {1,2};
	cout << search3(vec1, 2) <<endl;
	cout << search3(vec2, 1) <<endl;
	cout << search3(vec2, 0) <<endl;
	cout << search3(vec3, 2) <<endl;
	return 0;
}
