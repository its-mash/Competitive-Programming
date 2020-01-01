#include <bits/stdc++.h>

using namespace std;



void articulation(int u,int ex[][11],int parent[],bool vis[],int low[],int disc[],int child[][2]){

	static int time=0;
	low[u]=disc[u]=++time;
	int sz=ex[u][0];
	
	child[u][0]=u;

	vis[u]=true;
	
	//child[u][1]+=(sz!=0)?1:0;
	

	//cout<<endl<<endl<<u<<"::"<<endl;
	for(int i=1;i<=sz;i++){
		
		int v=ex[u][i];
		//cout<<v<<" ";
		if(!vis[v]){
			
			parent[v]=u;

			articulation(v,ex,parent,vis,low,disc,child);

			low[u]=min(low[u],low[v]);

			if(disc[u] <= low[v]){
				child[u][1]++;
				//child[v][1]++;
				//cout<<u-1<<"-->"<<v-1<<endl;
			}


		}
		else if(v!=parent[u]){
			low[u]=min(low[u],disc[v]);
		}
	}
	if(parent[u]!=0)
		child[u][1]++;
	// if(child[u][1]==0 && sz!=0){
	// 	child[u][1]=1;
	// }	
	//cout<<endl;

}


int cmp(const void * aa,const void * bb){
	int* a=(int*) aa;
	int* b=(int*) bb;
	if(a[1]>b[1])
		return -1;
	else if(a[1]==b[1]){
		if(a[0]<b[0])
			return -1;
	}
	return 1;
}

int main(){

	//freopen("in","r",stdin);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;

	while(cin>>n>>m && n){

		//cout<<n<<m<<endl;
		n++;
		int ex[n][11]={},x,y;

		while(cin>>x>>y && x!=-1){
			x++;
			y++;

			ex[x][0]++;
			ex[x][ex[x][0]]=y;

			ex[y][0]++;
			ex[y][ex[y][0]]=x;

		}

		int low[n],disc[n],child[n][2]={},parent[n]={};

		// for(int i=1;i<n;i++)
		// {	
		// 	cout<<i<<"->>";
		// 	for(int j=0;j<11;j++)
		// 		cout<<ex[i][j]<<" ";
		// 	cout<<endl;
		// }
		bool vis[n]={};

		int island=0;
		for(int i=1;i<n;i++){
			//cout<<i<<endl;
			if(!vis[i]){
				island++;
				articulation(i,ex,parent,vis,low,disc,child);
			}
		}
		//cout<<island<<endl;

		for(int i=1;i<n;i++){
			child[i][1]=island-1+child[i][1];
			//cout<<i-1<<" "<<child[i][0]-1<<"== "<<child[i][1]<<endl;
		}
		qsort(child,n,sizeof(child[0]),cmp);

		for(int i=0;i<m;i++){
			cout<<child[i][0]-1<<" "<<child[i][1]<<endl;
		}
		cout<<endl;
	}
}