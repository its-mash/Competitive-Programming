#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll l,r,b;
	cin>>l>>r>>b;
	if(l>r){
		r+=b;
		if(r>l){
			cout<<2*(l+(r-l)/2)<<endl;
		}
		else{
			cout<<2*r<<endl;
		}

	}
	else{
		l+=b;
		if(l>r){
			cout<<2*(r+(l-r)/2)<<endl;
		}
		else
			cout<<2*l<<endl;
	}
}