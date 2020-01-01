#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ex[n],lsf[n],lsb[n];
		for(int i=0;i<n;i++){
			cin>>ex[i];
			lsf[i]=1;
			lsb[i]=1;
		}
		for(int i=n-2;i>=0;i--){
			for(int j=n-1;j>i;j--){
				if(ex[i]<ex[j] && lsf[j]+1>lsf[i]){
					lsf[i]=lsf[j]+1;
				}	
			}
		}
		for(int i=n-2;i>=0;i--){
			for(int j=n-1;j>i;j--){
				if(ex[i]>ex[j] && lsb[j]+1>lsb[i]){
					lsb[i]=lsb[j]+1;
				}	
			}
		}
		int ans=0;
		for(int i=0;i<n;i++){
			ans=max(ans,lsf[i]+lsb[i]-1);
//			cout<<lsf[i]<<"->"<<lsb[i]<<endl;
		}
		cout<<ans<<endl;
	}
}
