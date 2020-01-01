#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	// freopen("in","r",stdin);
	int n,k;
	cin>>n>>k;
	int lec[n+2]={};
	ll sum=0;
	bool flag[n+2]={};
	for(int i=1;i<=n;i++){
		cin>>lec[i];	
	}

	for(int i=1;i<=n;i++){
		cin>>flag[i];
		if(flag[i])
			sum+=lec[i];
	}
	int tmp=0;
	for(int i=1;i<=k;i++)
		if(!flag[i])
			tmp+=lec[i];
	ll ans=sum;

	for(int i=1;i<=n-k+1;i++){
		// cout<<tmp<<endl;
		// cout<<i<<" {{ "<<lec[i]<<"->"<<lec[i+k]<<endl;
		if(tmp+sum>ans)
			ans=tmp+sum;
		if(!flag[i+k])
			tmp+=lec[i+k];
		if(!flag[i])
			tmp-=lec[i];
	}
	cout<<ans<<endl;
}