#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,cs=1;cin>>t;
	while(t--){
		int n,d,time;cin>>n>>d>>time;
		d--;
		vector<pair<int,int> > mp[n];
		int m;cin>>m;
		while(m--){
			int u,v,w;scanf("%d %d %d",&u,&v,&w);
			mp[v-1].push_back({u-1,w});
		}
		multiset<pair<int,int> > sn;
		sn.insert({0,d});
		bool vis[n]={};
		int dis[n];
		fill(dis,dis+n,INT_MAX);
		dis[d]=0;
		while(!sn.empty()){
			pair<int,int> mi=*sn.begin();
			sn.erase(sn.begin());
			int i=mi.second,w=mi.first;
			if(vis[i])continue;
			vis[i]=true;
			for(int j=0;j<mp[i].size();j++){
				int ew=mp[i][j].second,d=mp[i][j].first;
				if(w+ew<dis[d]){
					dis[d]=w+ew;	
					sn.insert({dis[d],d});
				}
			}
		}
		int cn=0;
		for(int i=0;i<n;i++)
			if(dis[i]<=time)cn++;
		cout<<cn<<endl;
		if(t!=0)cout<<endl;
	}
}
