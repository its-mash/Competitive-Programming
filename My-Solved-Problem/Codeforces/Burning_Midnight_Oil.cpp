#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double


ll logk(ll k,ll v){
	ll i=0,a=1;
	while(a*k<=v){
		a*=k;
		i++;
	}
	return i;
}

bool isOk(ll x,ll k,ll v){
	// ll n=logk(k,v)+1;
    // ld r=(1.0/k),s=v*((pow(r,n)-1)/(r-1));
	// cout<<s<<" "<<x<<endl;

	ll n=logk(k,v)+1,s=0,kk=1;
	while(n--){
		s+=v/kk;
		kk*=k;
	}
	// cout<<"---"<<s<<endl;
	if(s>=x)
		return true;
	return false;
}

int main(){

	ll x,k;
	cin>>x>>k;
	ll l=1,r=900000002;
	while(l<r) {
		ll m=l+(r-l)/2;
		if(isOk(x,k,m)){
			r=m;
		}
		else
			l=m+1;
		// cout<<r<<endl;
	}
	cout<<r<<endl;

}
// 500000001
// 900000001