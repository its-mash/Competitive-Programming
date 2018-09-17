#include <bits/stdc++.h>
using namespace std;


int dfs(int i,int ex[],bool vis[]){
	if(vis[i])return 0;
	vis[i]=true;
	return dfs(ex[i],ex,vis)+1;
}

int main(){
	int cs=1;
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ex[n+1]={};
		bool vis[n+1]={};
		bool inode[n+1]={}; 
		for(int i=0;i<n;i++){
			int x,y;scanf("%d %d",&x,&y);
			ex[x]=y;
			inode[y]=true;
		}
		int ans=INT_MIN,p;
		for(int i=1;i<=n;i++){
			if(!vis[i] && !inode[i]){
				vis[i]=true;
				bool dis[n+1]={};
				int nans=dfs(i,ex,dis);
				if(nans>ans){
					ans=nans;
					p=i;
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				int nans=dfs(i,ex,vis);
				if(nans>ans){
					ans=nans;
					p=i;
				}else if(ans==nans){
					p=min(p,i);
				}
			}
		}
		cout<<"Case "<<cs++<<": "<<p<<endl;

	}
}
