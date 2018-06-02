#include <bits/stdc++.h>
using namespace std;
struct Nd{
	int d,w;
	Nd(int d,int w){
		this->d=d;this->w=w;
	}
};
int n;
int minNode(int ans[],bool vis[]){

	int mi,mv=INT_MAX;
	for(int j=0;j<n;j++)
		if(!vis[j] && ans[j]<=mv){
			mv=ans[j];
			mi=j;
		}
	return mi;
}
int main(){
	int t;cin>>t;
	for(int cs=1;cs<=t;cs++){
		int m,s,d;cin>>n>>m>>s>>d;
		vector<Nd> vc[n];
		for(int i=0;i<m;i++){
			int s,d,w;
			scanf("%d %d %d",&s,&d,&w);
			vc[s].push_back(Nd(d,w));		
			vc[d].push_back(Nd(s,w));		
		}
		int ans[n];
		fill_n(ans,n,INT_MAX);
		bool vis[n]={};
		ans[s]=0;
		for(int i=0;i<n;i++){
			int mi=minNode(ans,vis);
//			cout<<mi<<endl;
			vis[mi]=true;
			if(mi==d)break;
			for(int j=0;j<vc[mi].size();j++){
				ans[vc[mi][j].d]=min(ans[vc[mi][j].d],ans[mi]+vc[mi][j].w);
			}
		}
		if(ans[d]!=INT_MAX)
			cout<<"Case #"<<cs<<": "<<ans[d]<<endl;
		else
			cout<<"Case #"<<cs<<": unreachable"<<endl;
	}
}
