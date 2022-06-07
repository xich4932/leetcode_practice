#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<double> find_equa(vector<int> point1, vector<int> point2){
      double k =( point1[1] - point2[1]) / (point1[0] - point2[1]);
      double c = point1[1] - k * point1[0];
      return {k, c};
}



bool isBoomerang(vector<vector<int>>& points) {
      vector<double> vec1 = find_equa(points[0], points[1]);
      vector<double> vec2 = find_equa(points[0], points[2]);
      return vec1 == vec2;
}