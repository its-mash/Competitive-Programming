#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif

	int n,a,b;
	cin>>n>>a>>b;
	string ex;
	cin>>ex;
	vector<int> dot;
	for(int i=0;i<n;i++){
		int c=0;
		while(i<n && ex[i++]=='.')
			c++;
		if(c!=0)
			dot.push_back(c);
		i--;
	}
	if(b>a)
		swap(a,b);
	sort(dot.begin(),dot.end());
	ll ans=0;
	int i=dot.size()-1;
	// cout<<a<<" "<<b<<endl;
	while(i>=0 && (a || b)){
		int v=dot[i];
		// cout<<v<<endl;
		if((v+1)/2 < a){
			ans+=(v+1)/2;
			a-=(v+1)/2;
			
		}
		else{
			ans+=a;
			a=0;
			// cout<<ans<<endl;
		}

		if((v)/2 < b){
			ans+=(v)/2;
			b-=(v)/2;
		}
		else{
			ans+=b;
			b=0;
		}
		if(b>a)swap(a,b);
		i--;
		
	}
	cout<<ans<<endl;
}