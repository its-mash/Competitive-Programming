#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d",&n);
	int ex[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ex[i]);
	}
	map<int,int> dp;
	int m=ex[0];
	for(int i=0;i<n;i++){
			dp[ex[i]]=dp[ex[i]-1]+1;
			if(dp[m]<dp[ex[i]])
				m=ex[i];		
	}
//	for(auto it:dp){
//		cout<<it.first<<" "<<it.second.i<<" "<<it.second.s<<" " <<it.second.r<<endl;
//	}
	cout<<dp[m]<<endl;
	vector<int> ans;
	for(int i=n-1;i>=0;i--){
		if(ex[i]==m)
		{
			ans.push_back(i+1);
			m-=1;
		}
	}
	copy(ans.rbegin(),ans.rend(),ostream_iterator<int>(cout," "));
}
