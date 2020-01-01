#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n,d;
	cin>>n>>d;
	int ex[n];
	for(int i=0;i<n;i++)
		cin>>ex[i];
	ll ans=0;
	for(int i=0;i<n-2;i++){
		ll l=i+1,r=n-1,m;
		if(ex[l]-ex[i]<=d){
		    while(l<r) {
		    	// cout<<"dd"<<endl;
		    	m=l+(r-l+1)/2;
		    	if(ex[m]-ex[i]<=d)
		    		l=m;
		    	else
		    		r=m-1;
			}
			ll c=l-i;
			ans+=(c*(c-1))/2; 	
		}

	}
	cout<<ans<<endl;

}