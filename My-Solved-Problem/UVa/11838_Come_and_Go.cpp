#include <bits/stdc++.h>

using namespace std;

void ssc(int u,vector<int> ex[],int disc[],int low[],stack<int>& st, bool inStack[],int &c){
	static int time=0;
	disc[u]=low[u]=++time;

	st.push(u);
	inStack[u]=true;
	int sz=ex[u].size();
	//cout<<u<<"->";
	for(int i=0;i<sz;i++){
		int v=ex[u][i];
		//cout<<","<<v<<" ";
		if(disc[v]==0){
			ssc(v,ex,disc,low,st,inStack,c);
			low[u]=min(low[u],low[v]);
		}
		else if(inStack[v])
			low[u]=min(low[u],disc[v]);
		//cout<<","<<v<<"-"<<low[v]<<" ";
	}

	if(disc[u]==low[u]){
		//cout<<"--"<<u<<endl;
		int v;
		c++;
		do{
			v=st.top();
			st.pop();
			inStack[v]=false;
			//cout<<v<<" ";
		}while(v!=u);
		//cout<<endl<<endl;
	}
}

int main(){
	//freopen("in","r",stdin);
	int n,m;
	while(cin>>n>>m && n){
		n++;
		vector<int> ex[n];
		while(m--){
			int x,y,p;
			cin>>x>>y>>p;
			ex[x].push_back(y);
			if(p==2)
				ex[y].push_back(x);
		}

		int low[n],disc[n]={},c=0;

		stack<int> st;
		bool inStack[n]={};

		// for(int i=1;i<n;i++){
		// 	cout<<i<<"-> ";
		// 	for(int j=0;j<ex[i].size();j++)
		// 		cout<<ex[i][j]<<" ";
		// 	cout<<endl;
		// }
		for(int i=1;i<n;i++){
			if(disc[i]==0){
				//cout<<"x"<<endl;
				ssc(i,ex,disc,low,st,inStack,c);
			}
		}
		cout<<((c==1)? 1:0)<<endl;
	}
}