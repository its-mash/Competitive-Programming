#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>

using namespace std;



void dfs(int u,vector<int> ex[],bool vis[],vector<int>& st){
	

	int sz=ex[u].size();
	vis[u]=true;

	for(int i=0;i<sz;i++){
		//cout<<ex[u][i]<<endl;
		int v=ex[u][i];
		if(!vis[v]){
			dfs(v,ex,vis,st);
		}
	}
	st.push_back(u);

}


void dfs(int u,vector<int> ex[],bool vis[]){
	

	int sz=ex[u].size();
	vis[u]=true;

	for(int i=0;i<sz;i++){
		//cout<<ex[u][i]<<endl;
		int v=ex[u][i];
		if(!vis[v]){
			dfs(v,ex,vis);
		}
	}

}


int main(){
	//freopen("in","r",stdin);freopen("out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,m;

		cin>>n>>m;
		n++;

		vector<int> ex[n],st;
		while(m--){
			int x,y;
			cin>>x>>y;
			ex[x].push_back(y);
		}
		bool vis[n]={};

		for(int i=1;i<n;i++){
			if(!vis[i]){
				//cout<<i<<endl;
				dfs(i,ex,vis,st);
			}
		}
		memset(vis,0,sizeof(vis));
		int ans=0;
		while(!st.empty()){
			int v=st.back();
			//cout<<v<<endl;
			if(!vis[v]){
				dfs(v,ex,vis);
				ans++;
			}
			st.pop_back();
		}
		cout<<ans<<endl;
	}
}



/*

using targan algo

void tarjan(int u,vector<int> ex[],int disc[],int low[],stack<int>& st,bool instack[],int group[]){
	
	static int time=0;
	
	disc[u]=low[u]=++time;

	int sz=ex[u].size();
	st.push(u);
	instack[u]=true;

	for(int i=0;i<sz;i++){
		//cout<<ex[u][i]<<endl;
		int v=ex[u][i];
		if(disc[v]==0){
			tarjan(v,ex,disc,low,st,instack,group);
			low[u]=min(low[v],low[u]);
		}
		else if(instack[v])
			low[u]=min(low[u],disc[v]);
	}
	if(disc[u]==low[u]){

		int v;
		do{
			v=st.top();
			group[v]=num;
			st.pop();
			instack[v]=false;

		}
		while(v!=u);
		num++;
	}
}



int main(){
	freopen("in","r",stdin);freopen("out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,m;

		cin>>n>>m;
		n++;

		vector<int> ex[n];
		while(m--){
			int x,y;
			cin>>x>>y;
			ex[x].push_back(y);
		}
		int disc[n]={},low[n],group[n]={};
		stack<int>st;
		bool instack[n]={};
		for(int i=1;i<n;i++){
			if(disc[i]==0){
				tarjan(i,ex,disc,low,st,instack,group);
			}
		}
		bool indegree[num]={};
		for(int i=1;i<n;i++){
			for(int j=0;j<ex[i].size();j++)
				if(group[i]!=group[ex[i][j]])
					indegree[group[ex[i][j]]]=true;
		}
		cout<<num-accumulate(indegree,indegree+num,0)<<endl;
		num=0;

	}
}
 */