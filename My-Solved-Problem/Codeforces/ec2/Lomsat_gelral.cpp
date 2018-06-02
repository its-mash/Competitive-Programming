#include <bits/stdc++.h>
using namespace std;

int n,color[100000];
vector<vector<int> > ex(100000,vector<int>());

map<int,int> dfs(int r){
	for(int i=0;i<ex[r].size();i++){
		
	}
}
int main(){

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>color[i];
	}

	int l,r,rr;
	cin>>l>>r;
	rr=l;
	ex[l].push_back(r);
	
	for(int i=2;i<n;i++){
		int l,r;
		cin>>l>>r;
		ex[l].push_back(r);
	}	
	dfs(rr);
}
