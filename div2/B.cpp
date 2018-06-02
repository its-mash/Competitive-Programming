#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	// freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll n,k;
	cin>>n>>k;
	ll ans=n,in=1,v=1;

	for(int i=1;i<=k;i++){
		ll x;
		cin>>x;
		if((n%x)<=ans){
			ans=n%x;
			in=i;
			v=x;
		}
		//cout<<ans<<" "<<i<<endl;
	}
	cout<<in<<" "<<n/v<<endl;
}