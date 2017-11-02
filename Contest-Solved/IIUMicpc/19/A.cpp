#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t;
    cin>>n>>t;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    cin>>m;
    for(int j=1;j<=m;j++){
        long long  v=0;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v+=x*ex[i];
        }
        if(v>t)
            cout<<"Case "<<j<<" : "<<1<<endl;
        else
            cout<<"Case "<<j<<" : "<<0<<endl;
    }
}
