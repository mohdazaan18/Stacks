

#include <iostream>
#include<stack>
#include<cstring>
using namespace std;

bool redundant(string exp){
    stack<char> s;
    bool redun;
    int len = exp.length();
    for(int i = 0;i<len;i++){

        if(exp[i] =='(' || exp[i] =='+' || exp[i] =='-' || exp[i] =='/' || exp[i] =='*' ){
        s.push(exp[i]);
        }
        else if(exp[i] == ')'){
             redun = true;
            while(s.top()!='('){
                if(s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/'){
                    redun = false;
                }

                s.pop();

            }
            s.pop();


            if(redun == true){
                return true;
            }
        }
    }
    return false;
}


int main()
{
    string input;
    cin>>input;
    if(!redundant(input)){
        cout<<"false";
    }
    else {
        cout<<"true";
    }

    return 0;
}
