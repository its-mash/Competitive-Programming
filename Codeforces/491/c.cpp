#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool check(ll n,ll k){
	ll e=0,c=n;
	while(n>0){
		if(n-k>=0){
			e+=k;n-=k;
		}else{
			e+=n;n=0;
		}
		n-=n/10;
	}
	return e>=(c+1)/2; 
}
int main(){
	ll n;cin>>n;
	
	ll l=1,r=(n+1)/2;
	while(l<r){
		ll m=l+(r-l)/2;
		if(check(n,m))
			r=m;
		else
			l=m+1;
	}
	cout<<r<<endl;
}
