#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,minn=10001;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	vector<int> ans;
	for(int i=0;i<m-n;i++){
		// cout<<i<<endl;
		vector<int> p;
		int j=0,c=0;
		while(j<n){
			if(s[j]!=t[j+i]){
				c++;
				p.push_back(j+1);
			}
			j++;
		}
		if(c<minn){
			// cout<<c<<endl;
			minn=c;
			ans=p;
		}
	}
	cout<<minn<<endl;
	for(int i=0;i<minn;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}