#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
ll val[100];
vector<int> ex[100];

bool dfs(int ii,bool vis[],int c){
	if(c==n){
		cout<<val[ii];
		return true;
	}
	bool f=false;
	for(int i=0;i<ex[ii].size();i++){
		f|=dfs(ex[ii][i],vis,c+1);	
	}
	if(f)cout<<" "<<val[ii];
	return f;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
	bool ind[n]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j && (val[i]*2==val[j] || val[j]*3==val[i])){
				ex[j].push_back(i);
				ind[i]=true;
			}			
		}
	}
	for(int i=0;i<n;i++){
		if(!ind[i]){
			bool vis[n]={};
			vis[i]=true;
			dfs(i,vis,1);
		}
	}

}

