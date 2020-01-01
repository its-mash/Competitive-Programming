#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int ex[m+1]={};
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		ex[t]++;
	}
	long long ans=0;
	for(int i=1;i<m;i++){
		for(int j=i+1;j<=m;j++){
			ans+=ex[i]*ex[j];
		}
	}
	cout<<ans<<endl;

	
}
