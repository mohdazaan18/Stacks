#include <iostream>
#include<cstring>
#include<stack>
using namespace std;

bool isbalanced(string exp){
    stack<char> s;
    int len = exp.length();
    for(int  i = 0;i<len;i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            s.push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if(s.empty()){
                return false;
            }
            s.pop();
        }
        else {
            continue;
        }
    }
    if(s.empty()){
        return true;
    }
    else {
        return false;
    }
}



int main()
{

    string input;
    cin>>input;

  bool ans = isbalanced(input);
  if(ans == 1){
      cout<<"balanced " ;
      }
      else {
          cout<< "not balanced";
}
    return 0;
}
