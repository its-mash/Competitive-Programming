#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n,t;
	cin>>n>>t;
	ll ex[n];
	for(int i=1;i<n;i++)
		cin>>ex[i];
	int in=1;
	while(in<n){
		if(in==t){
			cout<<"YES"<<endl;
			return 0;
		}
		in=ex[in]+in;
	}
	if(in==t){
			cout<<"YES"<<endl;
			return 0;
	}
	cout<<"NO"<<endl;
}