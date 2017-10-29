#include <bits/stdc++.h>

using namespace std;


void scc(int u,int ex[][26],int low[],int disc[],stack<int> & st,bool instack[],string strack[]){
	static int time=0;

	low[u]=disc[u]=++time;
	int sz=ex[u][0];

	st.push(u);
	instack[u]=true;
	for(int i=1;i<=sz;i++){
		int v=ex[u][i];
		if(disc[v]==0){
			scc(v,ex,low,disc,st,instack,strack);
			low[u]=min(low[u],low[v]);
		}
		else if(instack[v])
			low[u]=min(low[u],disc[v]);
	}
	if(low[u]==disc[u]){
		int v;
		bool f=true;
		do{
			v=st.top();
			cout<<(f?"":", ")<<strack[v];
			st.pop();
			instack[v]=false;
			f=false;
		}
		while(v!=u);
		cout<<endl;
	}

}

int main(){
	//freopen("in","r",stdin);

	ios_base::sync_with_stdio(0);cin.tie(0);

	int n,m,ts=1;
	while(cin>>n>>m && n){
		n++;	
		int ex[n][26]={};

		map<string,int> track;
		string strack[n];

		int sq=1;

		while(m--){
			string x,y;
			cin>>x>>y;
			int tx,ty;
		

			if(track.find(x)==track.end())
			{
				track[x]=sq;
				strack[sq]=x;
				tx=sq++;
			}
			else
				tx=track[x];
			if(track.find(y)==track.end())
			{
				track[y]=sq;
				strack[sq]=y;
				ty=sq++;
			}
			else
				ty=track[y];
			
			ex[tx][++ex[tx][0]]=ty;
		}

		int low[n],disc[n]={};
		bool instack[n]={};
		stack<int> st;

		if(ts>1)
			cout<<endl;
		cout<<"Calling circles for data set "<<ts++<<":"<<endl;
		for(int i=1;i<n;i++){
			if(disc[i]==0){
				scc(i,ex,low,disc,st,instack,strack);
			}
		}

	}
}