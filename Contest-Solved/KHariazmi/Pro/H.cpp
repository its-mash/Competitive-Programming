#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,ans=0;
        cin>>n;
        while(n){
            ans+=n/5;
            n/=5;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
