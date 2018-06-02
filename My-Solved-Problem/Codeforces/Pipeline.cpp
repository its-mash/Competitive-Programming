#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll 	n,k;
	cin>>n>>k;
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	else if(n<=k){
		cout<<1<<endl;
		return 0;
	}
	else if((k*(k+1)/2)-k+1 <n){
		cout<<-1<<endl;	
		return 0;
	}
	else {
		ll l=2,r=k;
		while(l<r){
			ll m= l+(r-l)/2;
			ll c=k-m+1;
			ll s=c*(2*m+(c-1))/2-c+1;
			 // cout<<s<<" "<<c<<" "<<m<<endl;
			if(s<=n)
				r=m;
			else
				l=m+1;
		}
		 // cout<<l<<endl;
		ll c=k-l+1;
		ll s=c*(2*l+(c-1))/2-c+1;
		 // cout<<"S: "<<s<<endl;
		cout<<((s==n)?c:c+1)<<endl; 
	}
}