#include <bits/stdc++.h>
using namespace std;

#define ll long long;

const int n=1000001;
bool ex[n];

int main(){
	ll t,m=1,ans=0,b=1;
	cin>>t;
	while(t--) {
	    ll x;
	    cin>>x;
	    ex[x]=true;
	    m=max(m,x);
	}
	while(b<m) {
	    ll in=m/2 +1;
	    while(in<m){
	    	if(ex[in]){
	    		ans=max(ans,m-in);
	    		b=a
	    	}
	    }
	}
}