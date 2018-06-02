#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	//freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll n;

	cin>>n;
	
	int ex[n+1]={};

	for(int i=1;i<=n;i++){
		// cout<<i<<endl;
		cin>>ex[i];
		
	}

	bool ans=false;

	for(int i=1;i<=n;i++){
		int l=ex[ex[ex[i]]];
		if(l==i)
			ans=true;
	}
	if(ans)
		cout<<"YES"<<endl;

	else
		cout<<"NO"<<endl;
}