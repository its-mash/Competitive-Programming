#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	// freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll k;
	while(cin>>k){
		// cout<<k<<endl;
		ll it=0;
		vector<string> ans;
		for(int y=k+1;y<=k*2;y++){
			ll x=(y*k)/(y-k);
			// cout<<x<<endl;
			if((x*y)==k*(x+y)){
				it++;
				string tm="1/"+to_string(k)+" = 1/"+to_string(x)+" + 1/"+to_string(y);
				ans.push_back(tm);
				
			}
		}
		cout<<it<<endl;
		for(int i=0;i<it;i++)
			cout<<ans[i]<<endl;
	}
}