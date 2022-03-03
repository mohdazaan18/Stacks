#include <iostream>
#include<climits>
using namespace std;
template <typename T,typename V>
class Pair{
    T x;
    V y;
    public :
    void setX(T num){
        this->x = num;
    }
    void setY(V num){
        this->y = num;
    }

    T getX(){
        return this->x;
    }
    V getY(){
        return this->y;
    }
};
