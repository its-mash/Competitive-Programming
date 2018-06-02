#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("in","r",stdin);
	int n,m,k;
	cin>>n>>k>>m;
	// cout<<n<<"dd"<<k<<endl;
	map<string,int> words;
	for(int i=1;i<=n;i++){
		string tm;
		cin>>tm;
		words[tm]=i;
	}
	int cost[n+1];
	for(int i=1;i<=n;i++)
		cin>>cost[i];
	while(k--){
		int x;
		cin>>x;
		int tem[x];
		long long minn=1000000001;
		for(int i=0;i<x;i++)
		{
			cin>>tem[i];
			if(cost[tem[i]]<minn)
				minn=cost[tem[i]];
		}
		for(int i=0;i<x;i++){
			cost[tem[i]]=minn;
		}
	}
	long long ans=0;
	while(m--){
		string tm;
		cin>>tm;
		ans+=cost[words[tm]];
	}
	cout<<ans<<endl;
}