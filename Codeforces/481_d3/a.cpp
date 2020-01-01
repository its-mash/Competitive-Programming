#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	int n;
	cin>>n;
	int ex[n];
	bool fx[1001]={};
	for(int i=0;i<n;i++){
		cin>>ex[i];
	}
	int ans[51];
	int c=0;
	for(int i=n-1;i>=0;i--){
		if(!fx[ex[i]])
			ans[c++]=ex[i];
		fx[ex[i]]=true;
	}
	cout<<c<<endl;
	for(int i=c-1;i>=0;i--)
		cout<<ans[i]<<((i!=0)?" ":"");
	cout<<endl;
}
