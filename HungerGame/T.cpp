#include <bits/stdc++.h>
using namespace std;

#define ll long long 

bool solve(int ex[],int n){
	if(n==6){
		bool b=true;
		for(int i=1;i<6;i++)
			if(ex[i]<0)
				b=false;
		return b;
	}
	bool end=false;
	for(int i=1;i<=n;i++){
		if(ex[i]>0 && ex[n-i]>0){
			ex[i]--;
			ex[n-i]--;
			// cout<<"NN: "<<n<<" i :"<<i<<" j: "<<n-i<<endl; 
			// for(int k=0;k<6;k++)
			// 	cout<<ex[k]<<" ";
			// cout<<endl;
			if(solve(ex,n+1))
				end=true;
			ex[i]++;
			ex[n-i]++;

		}
	}
	return end;
}

int main(){
	// freopen("in","r",stdin);
	ll t;
	cin>>t;
	while(t--) {
	    int ex[6]={};
	    string s;
	    cin>>s;
	    for(int i=0;i<7;i++)
	    	ex[s[i]-'A'+1]++;
	    ex[0]=100;
	    cout<<((solve(ex,1))?"YES":"NO")<<endl;
	    // cout<<endl;
	}
}