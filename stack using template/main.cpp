#include <iostream>
#include<climits>
using namespace std;
template <typename T>
class Stack{
    T *data;
    int nextindex;
    int capacity;
    public :
    Stack(){
        data = new T[5];
        nextindex = 0;
        capacity = 5;
    }
    int size() {
        return nextindex;
    }
    bool isempty(){
        return nextindex == 0;
    }
    void push(T num){
        if(nextindex == capacity){
            T *newdata = new T[2*capacity];
            for(int i = 0;i<capacity;i++){
                newdata[i] = data[i];
            }
            capacity = 2*capacity;
            delete [] data;

            data = newdata;
        }
        data[nextindex] = num;
        nextindex++;
    }
    T pop(){
        if(isempty()){
            cout<<"Empty stack";
            return 0;
        }
        nextindex--;
        return data[nextindex];

    }
    T top(){
        if(isempty()){
           cout<<"Empty stack";
            return 0;
        }
     return data[nextindex - 1];
    }





};
