#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif

	cin.sync_with_stdio(false);
	cin.tie(0);
	string ex;
	cin>>ex;
	int t,ln=ex.length();
	cin>>t;
	while(t--){
		int l,r,k;
		cin>>l>>r>>k;
		k=k%(r-l+1);
		if(k==0)
			continue;
		// cout<<k<<endl;
		queue<char> qu;
		for(int i=r-k;i<r;i++){
			// cout<<ex[i];
			qu.push(ex[i]);
		}
		// cout<<endl;
		for(int i=r-k-1;i>=l-1;i--){
			ex[k+i]=ex[i];
		}
		int i=l-1;
		while(!qu.empty()){
			char ch=qu.front();
			// cout<<ch<<endl;
			qu.pop();
			ex[i++]=ch;
		}
		
	}
	cout<<ex<<endl;

}