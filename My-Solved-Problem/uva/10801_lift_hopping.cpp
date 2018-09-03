#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	while(cin>>n>>k){
		int mp[100][100];
		fill(&mp[0][0],&mp[0][0]+sizeof(mp)/sizeof(mp[0][0]),INT_MAX);
		int tn[n];	
		for(int i=0;i<n;i++){
			cin>>tn[i];
		}
		cin.ignore();
		bool ex[100]={};
		for(int i=0;i<n;i++){
			string rw;
			getline(cin,rw);
			istringstream is(rw);	
			int u,v;
			is>>u;
			ex[u]=true;
			while(is>>v){
				ex[v]=true;
				mp[u][v]=min(mp[u][v],tn[i]);
				if(ex[u]
				u=v;
			}
		}

			
	}
}
