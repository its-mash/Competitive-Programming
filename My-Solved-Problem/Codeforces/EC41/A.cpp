#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	// freopen("in","r",stdin);
	int n,m;
	cin>>n>>m;
	// cout<<n<<endl;
	int ex[n+1]={};
	while(m--){
		int t;
		cin>>t;
		ex[t]++;
	}
	int mm=ex[1];
	// for(int i=1;i<=n;i++)
	// 	cout<<ex[i]<<endl;
	for(int i=2;i<=n;i++)
		if(mm>ex[i])
			mm=ex[i];
	cout<<mm<<endl;
}