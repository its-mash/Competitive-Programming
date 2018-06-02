#include <bits/stdc++.h>
using namespace std;

int n,s,t,cap[1001][1001];

inline bool bfs(vector<int> mp[],int parent[]){
	queue<int> bf;
	bf.push(s);
	bool vis[n]={};
	vis[s]=true;

	parent[s]=-1;

	while(!bf.empty()){
		int u=bf.front();bf.pop();
//		cout<<u<<"->";
		for(int i=0;i<mp[u].size();i++){
			int v=mp[u][i];
//			cout<<v<<" ";
			if(!vis[v] && cap[u][v]>0){
				parent[v]=u;
				bf.push(v);
				vis[v]=true;
			}
		}
//	cout<<endl;
	}
	return vis[t];
}
int main(){
	int cs=1;
	while(cin>>n && n){
		n++;
		int c;cin>>s>>t>>c;
		memset(cap,0,sizeof(cap));
		vector<int> mp[n];
		while(c--){
			int u,v,c;cin>>u>>v>>c;
			cap[u][v]+=c;
			cap[v][u]+=c;
			mp[u].push_back(v);
			mp[v].push_back(u);
		}
		int parent[n];
		long long max_flow=0;
		while(bfs(mp,parent)){
			int path_flow=INT_MAX;
//			for(int i=1;i<n;i++)
//				cout<<parent[i]<<" ";
			for(int v=t;v!=s;v=parent[v]){
				int u=parent[v];
				path_flow=min(path_flow,cap[u][v]);
			}
//			cout<<"p "<<path_flow<<endl;
			for(int v=t;v!=s;v=parent[v]){
//				cout<<"x"<<endl;
				int u=parent[v];
//				cout<<u<<" -- "<<v<<endl;
				cap[u][v]-=path_flow;
				cap[v][u]+=path_flow;
			}
//		for(int i=1;i<n;i++){
//			for(int j=1;j<n;j++){
//				cout<<cap[i][j]<<" ";
//			}
//			cout<<endl;
//		}
			max_flow+=path_flow;
		}
		cout<<"Network "<<cs++<<endl<<"The bandwidth is "<<max_flow<<"."<<endl<<endl;
	}
}
