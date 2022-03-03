#include <iostream>

using namespace std;
#include<stack>

void reverseStack(stack<int> &input,stack<int> &helper){
    if(input.size() == 0 || input.size() == 1){
        return;
    }
    int ans = input.top();
    input.pop();
    reverseStack(input,helper);
    while(!input.empty()){
        int topelem = input.top();
        helper.push(topelem);
        input.pop();
    }
    input.push(ans);
    while(!helper.empty()){
        int topelem = helper.top();
        input.push(topelem);
        helper.pop();
    }
}

int main(){
    stack<int> s1,s2;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    reverseStack(s1,s2);
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }


}
