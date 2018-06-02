#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,m,p[100001],t[100001];

bool isOK(ll r){
	int j=0,i=0;
	while(i<m && j<n){
		// cout<<i<<" xx "<<j<<endl;
		// cout<<p[j]<<"<-- "<<t[i]<<endl;
		if(abs(p[j]-t[i])<=r)
			j++;
		else if(p[j]<t[i])
		{
			break;
		}
		else
			i++;
	}
    // cout<<m<<" dd"<<j<<endl;
	if(j==n)
		return true;
	return false;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>p[i];
	for(int i=0;i<m;i++)
		cin>>t[i];
	ll l=0,r=2000000002;
	while(l<r){
		ll md=l+(r-l)/2;
		if(isOK(md))
			r=md;
		else
			l=md+1;
	}
	cout<<r<<endl;
}