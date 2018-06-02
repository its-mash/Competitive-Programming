#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll n,s,f;
	cin>>n;
	ll ex[n+1];
	for(int i=1;i<=n;i++)
		cin>>ex[i];
	cin>>s>>f;
	ll mp=0,h=1,g=f-s+1,tt=0;
	for(int i=1;i<g;i++)
		tt+=ex[i];
	for(int i=g;i<=n;i++){
		tt+=ex[i];
		if(tt>mp){
			mp=tt;
			h=i;
			// cout<<h<<endl;
		}
		tt-=ex[i-g+1];
		// cout<<i<<"|"<<p<<endl;
	}
	cout<<h<<endl;
	cout<<(((n+f-h+1)%n==0)?n:(n+f-h+1)%n)<<endl;
}	