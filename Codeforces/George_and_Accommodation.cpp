#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n, c=0,p,q;
	cin>>n;

	while(n--){
		cin>>p>>q;
		if(p+2<=q)
			c++;
	}
	cout<<c<<endl;
}