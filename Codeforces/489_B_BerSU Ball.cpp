#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n,m;
    cin>>n;

    int ex[102]={},fx[102]={},tm;

    for(int i=0;i<n;i++){
        cin>>tm;
        ex[tm]++;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>tm;
        fx[tm]++;
    }
    int cm=0;
    for(int i=1;i<101;i++){
        if(ex[i] && fx[i-1]){
            int mn=min(ex[i],fx[i-1]);
            cm+=mn;
            ex[i]-=mn;
            fx[i-1]-=mn;
        }
        if(ex[i] && fx[i]){
            int mn=min(ex[i],fx[i]);
            cm+=mn;
            ex[i]-=mn;
            fx[i]-=mn;
        }
        if(ex[i] && fx[i+1]){
            int mn=min(ex[i],fx[i+1]);
            cm+=mn;
            ex[i]-=mn;
            fx[i+1]-=mn;
        }
        // cout<<i<<" "<<cm<<endl;
    }
    cout<<cm<<endl;
}