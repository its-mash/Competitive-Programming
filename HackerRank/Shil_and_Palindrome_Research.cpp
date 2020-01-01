#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ex[100005][26],n;
void update(int i,char ch, int v=1){
	while(i<=n){
		ex[i][ch-'a']+=v;
		i+=(i&-i);
		// cout<<i<<endl;
	}
}

bool query(int i,int j){
	bool e=(j-i)%2==0;
	int chSum[26]={};
	while(j>0){
		for(int k=0;k<26;k++)
			chSum[k]+=ex[j][k];
		j-=(j&-j);
	}
	while(i>0){
		for(int k=0;k<26;k++)
			chSum[k]-=ex[i][k];
		i-=(i&-i);
	}
	int c=0;
	for(int i=0;i<26;i++){
		// cout<<char('a'+i)<<" "<<chSum[i]<<endl;
		if(chSum[i]%2==1)
			c++;
	}
	// cout<<e<<endl;
	return (e)?c==0:c==1;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif

	int q;	cin>>n>>q;
	string st; 	cin>>st;
	for(int i=0;i<n;i++)update(i+1,st[i]);
	while(q--){
		int t;	cin>>t;
		// cout<<t<<endl;
		if(t==2){
			int l,r;
			cin>>l>>r;
			// cout<<l<<"->"<<r<<endl;
			cout<<((query(l-1,r))?"yes":"no")<<endl;
		}
		else{
			int i;cin>>i;
			char ch;cin>>ch;
			// cout<<i<<" -- "<<ch<<endl;

			update(i,st[i-1],-1);
			st[i-1]=ch;
			update(i,ch);
		}
	}
}