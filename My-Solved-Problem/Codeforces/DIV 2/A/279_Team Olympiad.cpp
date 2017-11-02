#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> first,second,third;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(t==1)
            first.push(i);
        else if(t==2)
            second.push(i);
        else
            third.push(i);
    }
    cout<<min(first.size(),min(second.size(),third.size()))<<endl;

    while(!first.empty() && !second.empty() && !third.empty() ){
        cout<<first.top()<<" "<<second.top()<<" "<<third.top()<<endl;
        first.pop();second.pop();third.pop();
    }
}
