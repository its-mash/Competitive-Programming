#include <bits/stdc++.h>
using namespace std;



int main(){
	//freopen("in","r",stdin);

	int m,n;
	
	while(cin>>m>>n){

		int x,y,maxx=0;
		char ex[m][n];

		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>ex[i][j];
		cin>>x>>y;

		bool vis[m][n]={};
		char land=ex[x][y];
		
		int dx[]={-1, 0,0,1};
		int dy[]={ 0,-1,1,0};
		for(int i=0;i<m;i++){

			for(int j=0;j<n;j++){

				if(!vis[i][j] && ex[i][j]==land){
					stack<pair<int,int> > st;
					st.push(make_pair(i,j));
					int sz=1;
					vis[i][j]=true;
					bool mine=false;
					while(!st.empty()){

						pair<int,int> tm=st.top();st.pop();
						if(tm.first==x && tm.second==y)
							mine=true;
						for(int k=0;k<4;k++){
							int nx=tm.first+dx[k],ny=(tm.second+dy[k])%n;
							ny=(ny==-1)?n-1:ny;
							if(nx>=0 && nx<m && ny>=0 && ny<n && ex[nx][ny]==land && !vis[nx][ny]){
								vis[nx][ny]=true;
								sz++;
								st.push(make_pair(nx,ny));
							}

						}		
					}
					if(!mine)
						maxx=max(sz,maxx);	
				}
			}
		}
		cout<<maxx<<endl;		
	}

	
}