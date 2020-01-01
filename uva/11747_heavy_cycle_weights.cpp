#include <bits/stdc++.h>
using namespace std;

struct Nd{
	int x,y,w;
};
bool cmp(const Nd &a,const Nd &b){
	return a.w<b.w;
}
int root(int x,int cn[][2]){
	while(x!=cn[x][0])
		x=cn[x][0];
	return x;
}

int main(){
	int n,m;
	while(cin>>n>>m && (n || m)){
		int cn[n][2];
		for(int i=0;i<n;i++){ cn[i][0]=i; cn[i][1]=1; } 
		Nd nd[m];
		for(int i=0;i<m;i++){
			cin>>nd[i].x>>nd[i].y>>nd[i].w;
		}
		sort(nd,nd+m,cmp);
		vector<int> ans;
		for(int i=0;i<m;i++){
			int xr=root(nd[i].x,cn),yr=root(nd[i].y,cn);
			if(xr!=yr){
				if(cn[xr][1]>cn[yr][1]){
					cn[yr][0]=cn[xr][0];
					cn[xr][1]+=cn[yr][1];
				}
				else{
					cn[yr][1]+=cn[xr][1];
					cn[xr][0]=cn[yr][0];
				}

			}
			else
				ans.push_back(nd[i].w);
		}
		for(auto it=ans.begin();it!=ans.end();it++)
			cout<<*it<<((it!=prev(ans.end()))?" ":"");
		cout<<((ans.size()==0)?"forest":"")<<endl;
	}
}
