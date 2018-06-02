#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n,k;
	cin>>n>>k;
	ll ex[k+1];
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	fill(ex,ex+k+1,1);

	for(int i=1;i<=k;i++){
		for(int j=i+1;j<=k;j++){
			ex[j]=ex[j]+j-1;
		}
	}
}