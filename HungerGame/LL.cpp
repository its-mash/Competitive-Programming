#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define ld long double

ll getM(ll x){
	ll b=0,e=1000000000,m,a=0;
	
	while(b<=e){
		m=(b+e)/2;
		if((m*m+m)<=x){
			// cout<<m<<":"<<endl;
			a=max(m,a);
			b=m+1;
		}
		else
			e=m-1;
	}
	return a;

}
int main(){
	 // freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll t,s=0;
	cin>>t;
	while(t--){
	    ll x;
	    cin>>x;
	  	s+=getM(x);
	    cout<<s<<endl;
	}

	
}