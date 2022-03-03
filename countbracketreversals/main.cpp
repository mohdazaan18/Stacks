
#include <iostream>
#include<cstring>
using namespace std;

#include<stack>

int countBracketReversals(string exp){
int len = exp.length();
stack<int> s;
int count = 0;
if(len%2 != 0){
    return -1;
}
for(int i = 0;i<len;i++){
    if(exp[i] == '{'){
        s.push(exp[i]);
    }
    else if(exp[i] == '}'){
        if(s.empty()){
            s.push(exp[i]);
        }
        else if(!s.empty() && s.top() == '}'){
            s.push(exp[i]);
        }
        else if(!s.empty() && s.top() == '{'){
            s.pop();
        }


    }


}
while(!s.empty()){
        int c1 = s.top();
        s.pop();
        int c2 = s.top();
        s.pop();
        if(c1 == c2){
            count++;
        }
        else if(c1 == '{' && c2 == '}'){
            count+=2;
        }
    }
    return count;

}

int main()
{
    string input;
    cin>>input;
    int ans = countBracketReversals(input);
cout<<ans;
    return 0;
}
