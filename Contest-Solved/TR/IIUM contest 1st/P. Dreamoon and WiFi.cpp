#include <bits/stdc++.h>
using namespace std;

long long ncr(int n,int r){
    long long ans=1;
    if(r>n/2)r=n-r;
    for(int i=1;i<=r;i++)
    {
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}

int main(){
    string ex,fx;
    int pe,me,pf,mf,w;
    double ans=0;
    cin>>ex>>fx;

    pe=count(ex.begin(),ex.end(),'+');
    me=count(ex.begin(),ex.end(),'-');
    pf=count(fx.begin(),fx.end(),'+');
    mf=count(fx.begin(),fx.end(),'-');
    w=count(fx.begin(),fx.end(),'?');

    if(w==0){
        if(pe==pf)
            ans=1;
    }
    else if(pe-pf<=w && me-mf<=w){
        ans=ncr(w,pe-pf)*ncr(w-pe+pf,me-mf)*1.0/(1<<w);
    }
    printf("%.9f\n",ans);
}
