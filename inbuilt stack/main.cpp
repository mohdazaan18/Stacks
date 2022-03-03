#include <iostream>
#include<climits>
#include<stack>
using namespace std;

int main(){
     stack<int> s1;
     s1.push(65);
     s1.push(66);
     s1.push(67);
     s1.push(68);
     s1.push(69);
     s1.push(70);

    s1.pop();
     s1.pop();
     cout<<s1.empty()<<endl;
     cout<<s1.size()<<endl;
     cout<<s1.top()<<endl;



}
