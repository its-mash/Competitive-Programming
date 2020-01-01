#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	// freopen("in","r",stdin);
	int t;
	cin>>t;
	while(t--){	
		ll n;
		cin>>n;
		ll ans=0;

		ll x=log2(n)+1;
		ans-=2L*(pow(2L,x)-1L);
		ans+=n*(n+1)/2;
		cout<<ans<<endl;

	}
}