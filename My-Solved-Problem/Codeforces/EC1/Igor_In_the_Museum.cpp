#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif

	cin.sync_with_stdio(false);
	cin.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	string ex[n];
	for(int i=0;i<n;i++){
		cin>>ex[i];
	}
	
	vector<int> ans;
	int loc[n][m]={};
	int ci=1;
	int x[]={-1,0,0,1};
	int y[]={0,1,-1,0};

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ex[i][j]=='.' && loc[i][j]==0){
				// cout<<i<<";"<<j<<endl;
				stack<pair<int,int> > st;
				st.push({i,j});
				int pic=0;
				loc[i][j]=ci;
				while(!st.empty()){
					pair<int,int> p=st.top(); st.pop();
					
					for(int g=0;g<4;g++){
						int nx=p.first+x[g],ny=p.second+y[g];
						if(nx>=0 && nx<n && ny>=0 && ny<=m){
							if(ex[nx][ny]=='.' && loc[nx][ny]==0){
								st.push({nx,ny});
								loc[nx][ny]=ci;
							}
							if(ex[nx][ny]=='*')pic++;
						}
					}
				}
				// cout<<pic<<endl;
				ans.push_back(pic);
				ci++;
			}
		}
	}
	while(k--){
		int x,y;
		cin>>x>>y;
		cout<<ans[loc[x-1][y-1]-1]<<endl;
	}
}