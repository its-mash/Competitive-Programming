#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,k;cin>>n>>k;
	ll ex[n];
	for(int i=0;i<n;i++)cin>>ex[i];
	sort(ex,ex+n);
	int c=0,p=1;
	for(int i=0;i<n-1;i++){
		if(ex[i]!=ex[i+1]){
			if(ex[i]+k>=ex[i+1])
				c+=p;
			p=1;
		}
		else{
			p++;
		}
	}
//	for(int i=0;i<n;i++)
//		cout<<ex[i]<<" "<<bx[i]<<endl;
	cout<<n-c<<endl;
}
