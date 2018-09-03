#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int v;cin>>v;

		int ex[v];
		fill(ex,ex+v,-1);
		ex[0]=0;

		int n;cin>>n;

		int cn[n];
		for(int i=0;i<n;i++)cin>>cn[i];

		for(int i=1;i<v;i++){
			for(int j=0;j<n;j++){
				int p=i-cn[j];
				if(p>=0 && ex[p]!=-1 && (ex[i]==-1 || ex[p]<ex[i]))
					ex[i]=ex[p];
			}
		}
		while(1){
			
		}
	}
}
