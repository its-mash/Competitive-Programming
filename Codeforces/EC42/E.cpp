#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	cin.sync_with_stdio(false);
	cin.tie(0);
	int n;cin>>n;
	map<char,set<ll> > ex;
	while(n--){
		ll t;cin>>t;

		char r;cin>>r;
		if(r=='P'){
			ex['R'].insert(t);
			ex['B'].insert(t);
		}
		ex[r].insert(t);
	}
	cout<<"B"<<endl;
	for(auto it=ex['B'].begin();it!=ex['B'].end();it++){
		cout<<*it<<endl;
	}
	cout<<"R"<<endl;
	for(auto it=ex['R'].begin();it!=ex['R'].end();it++){
		cout<<*it<<endl;
	}
	cout<<"p"<<endl;
	for(auto it=ex['P'].begin();it!=ex['P'].end();it++){
		cout<<*it<<endl;
	}

	ll ans=0;
	if(ex['B'].size()>1){
		ans+=(*(prev(ex['B'].end())))-(*(ex['B'].begin()));
	}
	cout<<"--->>"<<ans<<endl;
	// ans=0;
	if(ex['R'].size()>1){
		ans+=(*(prev(ex['R'].end())))-(*(ex['R'].begin()));
	}
	cout<<"--->>"<<ans<<endl;
	// ans=0;
	if(ex['P'].size()>1){
		ans-=(*prev(ex['P'].end()))-(*(ex['P'].begin()));
	}
	cout<<"--->>"<<ans<<endl;

}