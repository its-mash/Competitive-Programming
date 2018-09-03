#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	int cs=1;
	while(t--){
		int n,m,s,d;cin>>n>>m>>s>>d;
		vector<pair<int,int> > mp[n];
		for(int i=0;i<m;i++){
			int s,d,w;scanf("%d %d %d",&s,&d,&w);
			mp[s].push_back({d,w});
			mp[d].push_back({s,w});
		}
		multiset<pair<int,int> > ms;	
		ms.insert({0,s});
		bool vis[n]={};
		int dis[n];
		fill_n(dis,n,INT_MAX);
		dis[s]=0;
		while(!ms.empty()){
			pair<int,int> tm=*ms.begin();
			ms.erase(ms.begin());
			
			int i=tm.second,w=tm.first;
			if(vis[i])continue;
			if(i==d)break;
			vis[i]=true;
			for(int j=0;j<mp[i].size();j++){
				int ew=mp[i][j].second,d=mp[i][j].first;
				if(w+ew<dis[d]){
					dis[d]=ew+w;
					ms.insert({dis[d],d});
				}
			}
		}
		if(dis[d]!=INT_MAX)
			cout<<"Case #"<<cs++<<": "<<dis[d]<<endl;
		else
			cout<<"Case #"<<cs++<<": "<<"unreachable"<<endl;

	}
}
