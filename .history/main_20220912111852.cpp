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
	vector<int> vec1 =  {4,5,0,1,2,3};
	
	//vector<int> vec2 {1,2,3,1};
	//vector<int> vec3 {1,2,3,4};
	cout << search3(vec1, 0) <<endl;
	cout << search3(vec1, 1) <<endl;
	cout << search3(vec1, 2) <<endl;
	cout << search3(vec1, 3) <<endl;
	cout << search3(vec1, 5) <<endl;
	cout << search3(vec1, 4) <<endl;
	cout << search3(vec1, 6) <<endl;
	cout << search3(vec1, 7) <<endl;
	return 0;
}
