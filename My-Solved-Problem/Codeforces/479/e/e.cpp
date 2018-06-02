#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	vector<int> ex[n+1];
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		ex[u].push_back(v);	
		ex[v].push_back(u);	
	}
	bool vis[n+1]={};
	int cn=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			stack<int> bf;
			vis[i]=true;
			bf.push(i);
			bool cycle=true;
			while(!bf.empty()){	
				int v=bf.top();bf.pop();
				if(ex[v].size()!=2)
					cycle=false;
				for(int j=0;j<ex[v].size();j++){
					if(!vis[ex[v][j]]){
						vis[ex[v][j]]=true;
						bf.push(ex[v][j]);	
					}
				}

			}
			if(cycle)
				cn++;
		}
	}
	cout<<cn<<endl;
}
