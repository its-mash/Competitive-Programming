#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll,int>
int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	cin.sync_with_stdio(false);
	cin.tie(0);
	multiset<pii > idx;
	int n;
	cin>>n;
	vector<ll> ex(n);
	for(int i=0;i<n;i++){
		cin>>ex[i];
		idx.insert({ex[i],i});
	}
	// for(auto it=idx.begin();it!=idx.end();it++){
	// 	pii t=*it;
	// 	cout<<t.first<<" "<<t.second<<endl;
	// }
	auto cr=idx.begin();
	// cout<<endl;
	bool exv[n]={};
	for(auto it=next(idx.begin());it!=idx.end();it++){
		// cout<<cr->first<<" "<<it->first<<endl;
		if(it->first==cr->first){
			exv[cr->second]=true;
			ex[it->second]=2*cr->first;
			idx.insert({2*cr->first,it->second});
			auto ct=next(it);
			idx.erase(cr);
			idx.erase(it);
			// cout<<it->first<<" bb "<<it->second<<endl; 
			cr=ct;
			it=ct;

		}else{
			cr=it;
		}
		// for(auto it=idx.begin();it!=idx.end();it++){
		// 		cout<<it->first<<"->>"<<it->second<<endl;
		// }
		
	}
	cout<<idx.size()<<endl;
	for(int i=0;i<n;i++){
		
		if(!exv[i])
			cout<<ex[i]<<((i!=n-1)?" ":"");
	}
	cout<<endl;

}