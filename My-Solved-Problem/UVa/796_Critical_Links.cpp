#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>



void articulation(int u,int ex[][101],bool vis[],int parent[],int low[],int disc[],set<pii>& critical,int n){

	static int time=0;
	disc[u]=low[u]=++time;
	int child=0;

	vis[u]=true;

	for(int v=1;v<n;v++){
		if(ex[u][v]){
			//cout<<u-1<<":::::"<<endl;
			if(!vis[v]){
				parent[v]=u;
				child++;
				//cout<<" ------  "<<v-1<<endl;
				articulation(v,ex,vis,parent,low,disc,critical,n);
				
				low[u]=min(low[u],low[v]);

				
				// if(parent[u]==-1 &&  low[v]!=low[u]){
				// 	critical[u]=true;
				// 	cout<<u-1<<"-."<<v-1<<endl;
				// }
				// else if(parent[u]!=-1 && disc[u] < low[v]){
				// 	cout<<u-1<<"->"<<v-1<<endl;
				// 	critical[u]=true;
				// } 
				
				if(disc[u]<low[v]){
					//cout<<u-1<<" "<<v-1<<"== "<<disc[u]<<">"<<low[v]<<endl;
					if(u>v)
						critical.insert(make_pair(v-1,u-1));
					else
						critical.insert(make_pair(u-1,v-1));
					
				}

			}
			else if(v!=parent[u]){
				low[u]=min(disc[v],low[u]);
			}


		}

	}

}

int main(){
	//freopen("in","r",stdin);


	int n;
	while(cin>>n){
		//cout<<n<<endl;
		if(n==0){
			cout<<"0 critical links"<<endl<<endl;
			continue;
		}
		n++;

		int x,y,ex[n][101]={};
		
		for(int i=1;i<n;i++){
			cin>>x;
			x++;
			int e;
			scanf(" (%d)",&e);
			while(e--){

				cin>>y;y++;
				ex[x][y]=1;
				ex[y][x]=1;
			}

		}
		// for(int i=1;i<n;i++){
		// 	for(int j=1;j<n;j++){
		// 		cout<<ex[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		// cout<<endl;

		int parent[n],low[n],disc[n];
		
		bool vis[n]={};
		set<pii> critical;
		fill(parent,parent+n,-1);

		vector<pair<int,int> > bridge;
		for(int i=1;i<n;i++){
			if(!vis[i]){
				//cout<<" "<<i<<endl;
				articulation(i,ex,vis,parent,low,disc,critical,n);
			}
			
		}
		
		cout<<critical.size()<<" critical links"<<endl;
		for(set<pii>::iterator it=critical.begin();it!=critical.end();it++){
			cout<<it->first<<" - "<<it->second<<endl;
		}
		cout<<endl;
	}
}