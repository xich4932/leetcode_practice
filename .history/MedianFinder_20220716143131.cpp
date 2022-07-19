#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MedianFinder {
      private:
      priority_queue<int, vector<int> ,greater<int> >  bigq; //ascendingo order //houmian 5 6 7 8 9
      priority_queue<int> smallq; //descending order //qianmian 4 3 2 1 0
public:
    MedianFinder() {
      ;
    }
    
    void addNum(int num) {
      if(bigq.size() == 0){
            bigq.push(num);
      }else if(smallq.size() == 0){
            smallq.push(num);
      }else if(smallq.size() == bigq.size() ){
            if(smallq.top() < num){
                  bigq.push(num);
            }else{
                  smallq.push(num);
                  bigq.push(smallq.top());
                  smallq.pop();
            }
      }else{
            bigq.push(num);
            if(bigq.size() == smallq.size()) return;
            bigq.push(smallq.top());
            smallq.pop();

      }
    }
    
    double findMedian() {
      if(smallq.size() == bigq.size()) return ( smallq.top() + bigq.top()) / 2;
       return  bigq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */