#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int> ex[],bool vis[],int x){

	vis[x]=true;
	for(int i=0;i<ex[x].size();i++){

		if(!vis[ex[x][i]]){
			dfs(ex,vis,ex[x][i]);

		}
	}
	cout<<x<<" ";
}

int main(){
	freopen("in","r",stdin);
	int n,m;

	while(cin>>n>>m && (n || m)){

		int ind[n+1]={};
		vector<int> ex[n+1];
		while(m--){
			int x,y;
			cin>>x>>y;
			ex[y].push_back(x);
			ind[y]++;

		}
		bool vis[n+1]={};
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				dfs(ex,vis,i);
			}

		}
		cout<<endl;
		
	}


	
}







/*
		uisng adjacency matrix

		int ex[n+1][n+1]={};
		while(m--){
			int x,y;
			cin>>x>>y;
			ex[x][y]=1;
		}
		// for(int i=1;i<=n;i++){
		// 	for(int j=1;j<=n;j++){
		// 		cout<<ex[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		//}
		int ind[n+1]={};
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(ex[j][i])
					ind[i]++;
			}
		}
		int c=0;
		while(c<n){
			//cout<<c<<endl;
			queue<int> qu;
			for(int i=1;i<=n;i++){
				if(ind[i]==0){
					cout<<i<<" ";
					qu.push(i);
					c++;
					ind[i]--;

				}
			}
			while(!qu.empty()){
				int k=qu.front();qu.pop();
				for(int i=1;i<=n;i++)
					if(ex[k][i])ind[i]--;
			}
		}
		cout<<endl;


 */