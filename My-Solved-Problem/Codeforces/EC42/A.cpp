#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	int n;
	cin>>n;
	ll ex[n],sum=0;
	for(int i=0;i<n;i++){
		cin>>ex[i];
		sum+=ex[i];
	}
	ll temp=0;
	for(int i=0;i<n;i++){
		temp+=ex[i];
		// cout<<temp<<endl;
		if(temp>=sum/2.0){
			cout<<i+1<<endl;
			return 0;
		}
	}


}