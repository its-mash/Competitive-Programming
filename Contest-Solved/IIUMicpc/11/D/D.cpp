#include <bits/stdc++.h>
using namespace std;

void combination(string ex[],int b,int e,int index,string fx[]){
    if(b==4){
        for(int i=0;i<4;i++)
            cout<<fx[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=b ; i<=e && e-i+1>=4-index ;i++)
    {
        fx[index]=ex[i];
        //cout<<i<<endl;
        combination(ex,i+1,e,index+1,fx);
    }
}

int main(){
    int n;
    cin>>n;
    while(n!=0){
        string ex[n],fx[4];
        for(int i=0;i<n;i++)
            cin>>ex[i];
        sort(ex,ex+n);
        combination(ex,0,n-1,0,fx);
    }
}
