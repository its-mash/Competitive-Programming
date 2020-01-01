#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif

	int n;cin>>n;
	string ex[4][n];
	for(int i=0;i<4;i++){
		for(int j=0;j<n;j++){
			cin>>ex[i][j];
			// cout<<ex[i][j]<<endl;
		}
	}
	int cost[4]={};
	for(int i=0;i<4;i++){

		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				cost[i]+=(j+k)%2 + '0' !=ex[i][j][k];
				// if(j%2==0){
				// 	char ch=(k%2==0)?'0':'1';
				// 	if(ex[i][j][k]!=ch)
				// 		cost[i]++;
				// }
				// else{
				// 	char ch=(k%2==0)?'1':'0';
				// 	if(ex[i][j][k]!=ch)
				// 		cost[i]++;
				// }
			}
			// cout<<endl;
		}
	}
	// cout<<cost[0]<<" "<<cost[1]<<" "<<cost[2]<<" "<<cost[3]<<endl;
	int ans=INT_MAX;
	int ind[]={0,1,2,3};
	do{
		// cout<<ind[0]<<ind[1]<<ind[2]<<ind[3]<<endl;
		int tc=cost[ind[0]]+cost[ind[3]]+(n*n-cost[ind[1]])+(n*n-cost[ind[2]]);
		// cout<<tc<<endl;
		ans=min(ans,min(tc,4*n*n-tc));
	}while(next_permutation(ind,ind+4));
	cout<<ans<<endl;
}