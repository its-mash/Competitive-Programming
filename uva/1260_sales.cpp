#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ex[n],ge[n]={};
		for(int i=0;i<n;i++)scanf("%d",&ex[i]);
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(ex[j]>=ex[i])
					ge[j]++;
		cout<<accumulate(ge,ge+n,0)<<endl;
	}
}
