#include <iostream>
#include<climits>
#include"main.cpp"
using namespace std;

int main(){
    Stack s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout<< s1.top()<<endl;
    cout<<s1.pop()<<endl;
    s1.push(5);
    cout<<s1.isempty()<<endl;
    cout<<s1.top()<<endl;

}
