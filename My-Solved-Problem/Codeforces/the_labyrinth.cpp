
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	char ex[n+1][m+1];
	for(int i=0;i<n;i++){
		scanf("%s",ex[i]);
	}
	int rt[n][m],cc=0;
	bool vis[n][m]={};
	map<int,int> ncc;	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ex[i][j]=='.' && !vis[i][j]){
				cc++;
				stack< pair<int,int> > st;
				st.push({i,j});
				vis[i][j]=true;
				int c=0;
				while(!st.empty()){
					c++;
					pair<int,int>  pt=st.top();st.pop();
					rt[pt.first][pt.second]=cc;
					for(int in=-1;in<2;in++){
						for(int jn=-1;jn<2;jn++){
							if(abs(in)!=abs(jn)){
								int nx=pt.first+in,ny=pt.second+jn;
								if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && ex[nx][ny]=='.'){
									st.push({nx,ny});
									vis[nx][ny]=true;
								}
							}
						}
					}
				}
				ncc[cc]=c;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ex[i][j]=='.')
				printf(".");
			else{
				set<int> st;
				for(int in=-1;in<2;in++){
					for(int jn=-1;jn<2;jn++){
						if(abs(in)!=abs(jn)){
							int nx=i+in,ny=j+jn;
							if(nx>=0 && nx<n && ny>=0 && ny<m && ex[nx][ny]=='.'){
								st.insert(rt[nx][ny]);
							}
						}
					}
				}
				int ans=1;
				for(auto x:st){
					ans+=ncc[x];
				}
				printf("%d",ans%10);
		   }
		}
		printf("\n");
	}
}
