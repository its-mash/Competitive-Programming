#include <bits/stdc++.h>

using namespace std;


int main(){
	//freopen("in","r",stdin);

	int t;
	cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		int ex[v][v]={};
		
		int x,y;
		while(e--){
			cin>>x>>y;
			ex[x][y]=1;
			ex[y][x]=1;
		}

		int ans=0,color[v];
		fill(color,color+v,-1);
		bool f=true;
		for(int i=0;i<v  && f;i++){
			if(color[i]==-1){
				//cout<<i<<"  dfd"<<endl;
				queue<int> qu;
				qu.push(i);
				color[i]=1;
				int z=0,on=0;
				while(!qu.empty() && f){
					int nd=qu.front();qu.pop();
					//cout<<nd<<endl;
					if(color[nd]==1)
						on++;
					else if(color[nd]==0)
						z++;
					for(int k=0;k<v && f;k++){
						if(ex[nd][k] && color[k]==-1){
							color[k]=1-color[nd];
							qu.push(k);
						}
						else if(ex[nd][k] && color[k]==color[nd]){
							ans=-1;
							f=false;
						}
					}
				}
				//cout<<on<<"-->>"<<z<<endl;
				if(f)
					ans+=(z && on) ? min(z,on) : z+on;
			}
		}
		cout<<ans<<endl;

	}	
}