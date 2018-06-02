#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<vector<int> > ed(m,vector<int>(3));
		for(int i=0;i<m;i++){
			cin>>ed[i][0]>>ed[i][1]>>ed[i][2];
		}

		int dis[n];
		fill(dis,dis+n,INT_MAX);
		dis[0]=0;

		for(int i=0;i<n-1;i++){
			for(int j=0;j<m;j++){
				int u=ed[j][0],v=ed[j][1],w=ed[j][2];
				if(dis[u]!=INT_MAX && dis[u]+w<dis[v]){
					dis[v]=dis[u]+w;
				}
			}
		}
		bool f=false;
		for(int j=0;j<m;j++){
			if(dis[ed[j][0]]!=INT_MAX && dis[ed[j][0]]+ed[j][2]<dis[ed[j][1]]){
				f=true;
				break;
			}
		}
		if(f)
			cout<<"possible"<<endl;
		else
			cout<<"not possible"<<endl;
	}
}
