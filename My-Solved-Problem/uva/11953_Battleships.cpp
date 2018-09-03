#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("in","r",stdin);
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n,c=0;
		cin>>n;
		char ex[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>ex[i][j];
		bool vis[n][n]={};
		int dx[]={-1,1,0,0};
		int dy[]={0,0,1,-1};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(ex[i][j]=='x' && !vis[i][j]){
					
					c++;
					stack<pair<int,int> > st;
					st.push(make_pair(i,j));
					
					vis[i][j]=true;

					while(!st.empty()){

						pair<int,int> tm=st.top();st.pop();
						for(int x=0;x<4;x++){
							int nx=tm.first+dx[x],ny=tm.second+dy[x];
							
							if(nx>=0 && nx<n && ny>=0 && ny <n && ex[nx][ny]!='.' && !vis[nx][ny]){
								
								vis[nx][ny]=true;
								st.push(make_pair(nx,ny));
							}
						}
						
						
					}
					
				}
			}
		}
		cout<<"Case "<<k+1<<": "<<c<<endl;
	}
}