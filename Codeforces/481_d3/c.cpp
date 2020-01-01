#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	int n,m;cin>>n>>m;
	ll d[n+1]={};
	for(int i=1;i<=n;i++){
		scanf("%Ld",&d[i]);
		d[i]+=d[i-1];
	}
	while(m--){
		ll v;cin>>v;
		auto x=lower_bound(d,d+n,v);
		cout<<x-d<<" "<<v-*(x-1)<<endl;
	}
}
