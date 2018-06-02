#include <bits/stdc++.h>
using namespace std;

int root(int x,int cn[][2]){
	while(x!=cn[x][0])
		x=cn[x][0];
	return x;
}

struct node{
	int x,y,z;
};
bool cmp(const node &a,const node &b){
	return a.z<b.z;
}
int main(){
	int n,m;
	while(cin>>m>>n && (m || n)){
		node nd[n];
		int cn[m][2];
		for(int i=0;i<m;i++)
		{
			cn[i][0]=i;
			cn[i][1]=1;
		}

		for(int i=0;i<n;i++)
			cin>>nd[i].x>>nd[i].y>>nd[i].z;		
		long long ans=0;
		sort(nd,nd+n,cmp);
		for(int i=0;i<n;i++){
			int xr=root(nd[i].x,cn),yr=root(nd[i].y,cn);
			if(xr!=yr){
				if(cn[xr][0]>cn[yr][0])
					cn[yr][0]=cn[xr][0];
				else
					cn[xr][0]=cn[yr][0];
				cn[xr][1]+=cn[yr][1];
			}else
				ans+=nd[i].z;
		}	
		cout<<ans<<endl;
	}
}
