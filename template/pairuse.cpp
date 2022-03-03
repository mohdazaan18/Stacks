#include <iostream>
#include<climits>
#include"main.cpp"
using namespace std;

int main(){
    Pair<int,float> p1;
    p1.setY(3.5);
    p1.setX(10);

    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    Pair<Pair<int,float>,int> p2;
    p2.setY(20);
    p2.setX(p1);
    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<< " "<<p2.getY();
}
