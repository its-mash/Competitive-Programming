#include  <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("in","r",stdin);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int ex[50001][2]={};
		bool vis[50001]={};
		for(int j=0;j<n;j++){
			int x,y;
			cin>>x>>y;
			ex[x][0]=y;
		}
		int maxx=-1,index;
		for(int i=1;i<50001;i++){
			if(ex[i][0] && !vis[i]){
				int x=i,sz=0;
				queue<int> st;
				while(!vis[x]){
					st.push(x);
					vis[x]=true;
					x=ex[x][0];
					sz++;
				}
				bool circle=false;
				
				while(!st.empty()){
					int tx=st.front();
					st.pop();

					if(tx==x)
						circle=true;
					if(circle)
						ex[tx][1]=sz;
					else
						ex[tx][1]=ex[x][1]+sz--;
					
					//cout<<tx<<","<<ex[tx][0]<<" = "<<ex[tx][1]<<endl;
					if(ex[tx][1]>maxx){
						maxx=ex[tx][1];
						index=tx;
					}
				}
				//cout<<endl;

			}
		}
		cout<<"Case "<<i<<": "<<index<<endl;	
	}
}