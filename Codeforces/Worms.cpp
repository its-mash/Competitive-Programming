#include <bits/stdc++.h>
using namespace std;


int main(){
	cin.sync_with_stdio(false);
	int n;
	cin>>n;
	int ex[n+1];
	ex[0]=0;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		ex[i]=ex[i-1]+t;
	}
	int m;
	cin>>m;
	while(m--){
		int t;
		cin>>t;
		int l=1,r=n;
		while(l<r){
			int m=l+(r-l)/2;
			if(t<=ex[m])
				r=m;
			else
				l=m+1;
			// cout<<m<<" "<<l<<endl;
		}
		cout<<r<<endl;
	}
}



// int main(){
// 	// cin.sync_with_stdio(false);
// 	int ex[1000001],n,m,ii=1;
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		int t;
// 		cin>>t;
// 		while(t--){
// 			ex[ii++]=i;
// 		}
// 	}
// 	cin>>m;
// 	while(m--){
// 		int t;
// 		cin>>t;
// 		cout<<ex[t]<<endl;
// 	}
		
// }