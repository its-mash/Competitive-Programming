#include <bits/stdc++.h>
using namespace std;

int nb,ns,nc,pb,ps,pc, b,s,c;
long long r,k=0;

bool possible(long long k){
    long long price=0;
    if(b*k>nb)price+=(b*k-nb)*pb;
    if(s*k>ns)price+=(s*k-ns)*ps;
    if(c*k>nc)price+=(c*k-nc)*pc;
    if(price<=r)
        return true;
    return false;
}

void anss(long long l, long long r){

    if(l>=r)
        return;
    long long mid=(l+r)/2;
    if(possible(mid)){
        k=mid;
        anss(mid+1,r);
    }
    else
        anss(l,mid-1);
}

int main(){
    string ex;
    cin>>ex;
    long long ans=0;

    b=count(ex.begin(),ex.end(),'B');
    s=count(ex.begin(),ex.end(),'S');
    c=count(ex.begin(),ex.end(),'C');

    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    anss(0,1000000000000);
    cout<<k<<endl;

}
