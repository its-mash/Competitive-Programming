#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    double ts,b=0,bs=0,n,a,d;
    cin>>c>>ts;
    long double ans=0;
    while(c--){
        double t,s;
        cin>>t>>s;
        n=t-b;
        a=bs;
        d=(s-bs)/2;
        ans+=(n*(2*d+(n-1)*d))/2;
    }
}
