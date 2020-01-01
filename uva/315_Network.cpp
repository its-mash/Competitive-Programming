#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>



void articulation(int u,int ex[][101],bool vis[],int parent[],int low[],int disc[],bool critical[],int n){

	static int time=0;
	disc[u]=low[u]=++time;
	int child=0;

	vis[u]=true;

	for(int v=1;v<n;v++){
		if(ex[u][v]){
			
			if(!vis[v]){
				parent[v]=u;
				child++;

				articulation(v,ex,vis,parent,low,disc,critical,n);
				
				low[u]=min(low[u],low[v]);

				if(parent[u]==-1 && child>1){
					critical[u]=true;
					// cout<<u<<"-."<<v<<endl;
				}
				else if(parent[u]!=-1 && disc[u] <= low[v]){
					//cout<<u<<"->"<<v<<endl;
					critical[u]=true;
				} 

			}
			else if(v!=parent[u]){
				low[u]=min(disc[v],low[u]);
			}


		}

	}

}

int main(){
	freopen("in","r",stdin);


	int n;
	while(cin>>n && n){
		n++;
		int v,ex[n][101]={};
		while(cin>>v && v){
			cin.ignore();

			string tm;
			getline(cin,tm);
			istringstream is(tm);

			int x;
			while(is>>x){
				ex[v][x]=1;
				ex[x][v]=1;
			}

		}
		int parent[n],low[n],disc[n];
		
		bool vis[n]={},critical[n]={};
		fill(parent,parent+n,-1);

		vector<pair<int,int> > bridge;
		for(int i=1;i<n;i++){
			if(!vis[i]){
				articulation(i,ex,vis,parent,low,disc,critical,n);
			}
			
		}
		int critical_n=accumulate(critical,critical+n,0);
		cout<<critical_n<<endl;
	}
}