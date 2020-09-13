#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  x;
        cin>>x;
        int n=log2(x);
        long long s=(x*(x+1))/2;
        // cout<<s<<" "<<n+1<<endl;
        long long b=2;
        long long p=pow(b,n+1)-1;
        long long res=s-p-p;
        cout<<res<<endl;
    }
}