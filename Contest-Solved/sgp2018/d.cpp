#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>


int n,m,risk=0;
void articulation(int u,vector<int> ex[],bool vis[],int parent[],int low[],int disc[],int mx[]){

	static int time=0;
	disc[u]=low[u]=mx[u]=++time;

	vis[u]=true;
	for(int i=0;i<ex[u].size();i++){

		int v=ex[u][i];
		if(!vis[v]){
			parent[v]=u;
			articulation(v,ex,vis,parent,low,disc,mx);
			
			low[u]=min(low[u],low[v]);
			int mxc=mx[u];
			mx[u]=max(mx[u],mx[v]);
			
			if(disc[u]<low[v]){
//				cout<<u<<" "<<v<<endl;
//				cout<<disc[v]<<"d->"<<mx[v]<<endl;
//				cout<<-disc[v]+mx[v]+1<<endl;
				mx[u]=mxc;
				risk+=mx[v]-disc[v]+1;				
			}

		}
		else if(v!=parent[u]){
			low[u]=min(disc[v],low[u]);
			mx[u]=max(disc[v],mx[u]);
		}
	}

}

int main(){


	cin>>n>>m;

	int x,y;
	vector<int> ex[n];
	for(int i=0;i<m;i++){
		scanf("%d %d",&x,&y);
		ex[x].push_back(y);
		ex[y].push_back(x);	
	}

//	for(int i=0;i<n;i++){
//		for(int j=0;j<ex[i].size();j++)
//			cout<<ex[i][j]<<" ";
//		cout<<endl;
//	}
	int parent[n],low[n],disc[n],mx[n];
	bool vis[n]={};
	fill(parent,parent+n,-1);

	for(int i=0;i<n;i++){
		if(!vis[i]){
			articulation(i,ex,vis,parent,low,disc,mx);
		}
		
	}
	cout<<n-risk<<endl;
	
}
