#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	int mx=1;
	for(int i=0;i<n;i++){
		int mn=INT_MAX;
		for(int j=0;j<m;j++){
			int t;cin>>t;
			if(t<mn)mn=t;
		}
		if(mn>mx)mx=mn;
	}
	cout<<mx<<endl;
}
