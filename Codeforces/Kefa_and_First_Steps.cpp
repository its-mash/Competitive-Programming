#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	long long n;
	cin>>n;
	
	ll t;
	cin>>t;
	long long mx=1,c=1;
	while(--n){
		ll tt;
		cin>>tt;
		if(tt<t){
			mx=max(c,mx);
			c=0;
		}
		t=tt;
		c++;
	}
	mx=max(c,mx);
	cout<<mx<<endl;
}