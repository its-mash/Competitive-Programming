#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	ll n,m,k,p,a=0;
	cin>>n>>m>>k;
	ll ex[m];
	for(int i=0;i<m;i++)
		cin>>ex[i];
	cin>>p;
	for(int i=0;i<m;i++){
		ll t=p^ex[i],c=0;
		for(int j=0;j<n;j++){
			c+=t & 1;
			t>>=1;
		}
		if(c<=k)
			a++;
	}
	cout<<a<<endl;
}