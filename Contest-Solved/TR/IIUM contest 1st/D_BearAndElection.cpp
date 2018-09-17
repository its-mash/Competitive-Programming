#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,l,x,c=0;
    cin>>n;
    n--;
    int ex[n];
    cin>>l;
    priority_queue<int> qx;
    for(int i=0;i<n;i++){
        cin>>x;
        qx.push(x);
    }
    x=qx.top();
    while(l+c<=x){
        qx.pop();
        qx.push(x-1);
        c++;
        x=qx.top();
    }
    cout<<c<<endl;

}
