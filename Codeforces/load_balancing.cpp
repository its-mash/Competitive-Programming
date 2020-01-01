#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;cin>>n;
	int ex[n];
	ll s=0;
	for(int i=0;i<n;i++){
		cin>>ex[i];
		s+=ex[i];
	}
	s/=n;
	sort(ex,ex+n);
	ll l=0,r=0;
	for(int i=0;i<n;i++){
		if(ex[i]<s)l+=s-ex[i];
		else if(ex[i]>s+1)r+=ex[i]-s-1;
	}
	cout<<max(l,r)<<endl;
}
