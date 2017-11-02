#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long n,m,a,ans;
        cin>>n>>m>>a;
        ans=ceil(double(n)/a)*ceil(double(m)/a);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}

