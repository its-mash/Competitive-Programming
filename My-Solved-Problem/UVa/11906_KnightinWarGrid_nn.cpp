#include <bits/stdc++.h>
using namespace std;

int r,c,m,n;
int mp[101][101];
bool vis[101][101];
int nd=8;
int ans[2];
void dfs(int nx[],int ny[],int x,int y){
	int step=0;
	for(int i=0;i<nd;i++){
		int dx=nx[i]+x,dy=ny[i]+y;
		if(dx>=0 && dx<r && dy>=0 && dy<c && mp[dx][dy]!=-1){	
			step++;
			if(!vis[dx][dy]){
				vis[dx][dy]=true;
				dfs(nx,ny,dx,dy);		
			}
		}
	}
	ans[step%2]++;
}
int main(){
	int t;cin>>t;
	for(int i=1;i<=t;i++){
		nd=8;
		cin>>r>>c>>m>>n;
		if(m==n)nd=4;
		int nx[]={m,m,-m,-m,n,n,-n,-n};
		int ny[]={n,-n,n,-n,m,-m,m,-m};
		memset(mp,0,sizeof(mp));
		memset(vis,0,sizeof(vis));
		int w;cin>>w;
		while(w--){
			int x,y;cin>>x>>y;
			mp[x][y]=-1;
		}
		if(mp[0][0]!=-1){
			vis[0][0]=true;
			dfs(nx,ny,0,0);
		}
//		int odd=0,even=0;
//		for(int i=0;i<r;i++){
//			for(int j=0;j<c;j++){
//				if(mp[i][j]!=-1 && vis[i][j]){
//					if(mp[i][j] & 1)
//						odd++;
//					else
//						even++;
//				}
//			}
//		}
		cout<<"Case "<<i<<": "<<ans[0]<<" "<<ans[1]<<endl;
	}
}
