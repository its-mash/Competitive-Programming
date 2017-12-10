#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll x;
		cin>>x;
		if(x!=1){
			cout<<setprecision(3)<<fixed<<((x-1)*4+((x-2)*(x-2)*sqrt(2.0)))<<endl;
		}
		else
			cout<<setprecision(3)<<fixed<<0.000<<endl;
		if(t!=0)
			cout<<endl;
	}
}