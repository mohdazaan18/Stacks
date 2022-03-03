#include <iostream>
#include<climits>
using namespace std;
class Stack{
  int *data;
  int capacity;
  int nextIndex;
  public :

  Stack(int ts){
      data = new int[ts];
      capacity = ts;
      nextIndex = 0;
  }
 //size
  int size(){
      return nextIndex;
  }
 //isempty
  bool isempty(){
      return nextIndex == 0;
  }
  //top
  int top(){
      if(isempty()){
          cout<<"Empty Stack"<<endl;
          return INT_MIN;
      }
      return data[nextIndex-1];
  }
  //push
  void push(int num){
      if(nextIndex == capacity){
          cout<<"Stack full"<<endl;
          return;
      }
      data[nextIndex] = num;
      nextIndex++;
  }
  //pop
  int pop(){
      if(isempty()){
          cout<<"Stack empty"<<endl;
          return INT_MIN;
      }
      nextIndex--;
      return data[nextIndex];
  }
};
