#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	 // freopen("in","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll x,y,z;
		cin>>x>>y;
		z=((x>y)?x:y);
		cout<<z*z<<endl;

	}
}