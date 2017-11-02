#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        long long ans=1;
        cin>>n;
        if(n==0){
            cout<<"Case "<<i<<": "<<1<<endl;continue;
        }
        for(int j=2;j<=n;j++){
            ans*=j;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}

