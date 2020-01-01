#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	ll c=0,m=-1;
	while(n--){
		ll a,b;
		cin>>a>>b;
		c-=a;
		c+=b;
		m=max(c,m);

	}
	cout<<m<<endl;
}