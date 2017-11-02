#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        n+=1;
        cout<<"Case "<<i<<" : "<<n;
        for(int j=n+n;j<=k;j+=n){
            cout<<","<<j;
        }
        cout<<endl;
    }
}
