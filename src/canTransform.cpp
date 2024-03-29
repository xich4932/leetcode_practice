#include<iostream>
using namespace std;

bool canTransform(string start, string end) {
    int i = 0;
    int j = 0;
    while (i < start.size() || j < end.size()) {
        while (i < start.length() && start[i] == 'X') i++;
        while (j < end.length() && end[j] == 'X') j++;
        if (i == start.length() || j == end.length()) return i == j;
        if (start[i] != end[j]) return false;
        if (start[i] == 'L' && i < j) return false; 
        if (start[i] == 'R' && i > j) return false;
        i++;j++;
    }
    return 1;
}

