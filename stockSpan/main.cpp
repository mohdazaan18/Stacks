
#include <iostream>
#include<stack>
#include<cstring>
using namespace std;

int *stockspan(int *price,int n){
    int *output = new int[n];
    stack<int> s;
    output[0] = 1;
    s.push(0);

    for(int i = 1;i<n;i++){
        while(!s.empty() && price[i]>price[s.top()]){
            s.pop();
        }

        if(s.empty()){
            output[i] = i+1;
        }
        else {
           output[i] = i - s.top();


        }

        s.push(i);

    }

    return output;




}

int main()
{
    int n;
    cin>>n;
    int *price = new int(n);
    for(int i = 0;i<n;i++){
        cin>>price[i];
    }
 int *ans = stockspan(price,n);
 for(int i = 0 ;i<n;i++){
     cout<<ans[i]<<" ";
 }
 cout<<endl;

    return 0;
}
