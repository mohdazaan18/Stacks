#include <iostream>
#include<climits>
#include"main.cpp"
using namespace std;

int main(){
     Stack<char> s1;
     s1.push(65);
     s1.push(66);
     s1.push(67);
     s1.push(68);
     s1.push(69);
     s1.push(70);

     cout<<s1.pop()<<endl;
     cout<<s1.pop()<<endl;
     cout<<s1.isempty()<<endl;
     cout<<s1.size()<<endl;
     cout<<s1.top()<<endl;



}
