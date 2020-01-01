#include <bits/stdc++.h>

using namespace std;


int main(){

	//freopen("in","r",stdin); 
	long long n,t,ans=0;
	cin>>n>>t;
	while(n--){
		int x;
		cin>>x;
		if(t>0){
			ans++;
			t-=86400-x;
		}
	}
	cout<<ans<<endl;
}