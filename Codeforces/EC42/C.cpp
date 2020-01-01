#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif


	string fx;

	cin>>fx;
	ll n=(1<<(fx.length()))-1,ans=INT_MAX;
	// bitset<10> f(n);
	// cout<<f<<endl;
	while(n){
		string tm="";
		ll x=1,i=0;
		bool f=false;
		while(i<fx.length()){
			if(x & n){
				tm+=fx[i];
			}
			x<<=1;
			i++;
		}
		ll val=stoi(tm);
		tm=to_string(val);
		ll sq=sqrt(val);
		if(val && sq*sq==val){
			// cout<<"|"<<tm<<"|"<<fx.length()<<endl;
			ll d=fx.length()-tm.length();
			ans=(d<ans)?d:ans;
		}

		n--;
	}
	cout<<((ans==INT_MAX)?-1:ans)<<endl;
}