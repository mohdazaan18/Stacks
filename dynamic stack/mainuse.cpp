#include <iostream>
#include<climits>
#include"main.cpp"
using namespace std;

int main(){
     Stack<int> s1;
     s1.push(97);
     s1.push(98);
     s1.push(99);
     s1.push(100);
     s1.push(101);
     s1.push(102);

     cout<<s1.pop()<<endl;
     cout<<s1.pop()<<endl;
     cout<<s1.isempty()<<endl;
     cout<<s1.size()<<endl;
     cout<<s1.top()<<endl;



}
