#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	freopen("in","r",stdin);
	int found[1000001]={};
	ll n,m;
	cin>>n>>m;

	vector<vector<int> > ff(n,vector<int>(n));

	for(int i=0;i<n;i++){
		cin>>ff[0][i];
		found[ff[0][i]]++;
	}
	// for(int i=0;i<n;i++)
	// 	cout<<ff[0][i]<<endl;
	for(int i=1;i<n;i++){
		for(int j=i;j<n;j++){
			ff[i][j]=ff[i-1][j-1]+ff[0][j];
			found[ff[i][j]]++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<ff[i][j]<<" ";
		cout<<endl;
	}
	vector<vector<int> > ll(n,vector<int>(n));

	for(int i=0;i<m;i++){
		cin>>ff[0][i];
		found[ff[0][i]]++;
	}
	for(int i=1;i<n;i++){
		for(int j=i;j<n;j++){
			ff[i][j]=ff[i-1][j-1]+ff[0][j];
			found[ff[i][j]]++;
		}
	}
}