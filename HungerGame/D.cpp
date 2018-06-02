#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	// freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll n,c=0;
	cin>>n;
	ll x=5;
	while(n/x>=1){
		c+=n/x;
		x*=5;
	}
	cout<<c<<endl;
	
}