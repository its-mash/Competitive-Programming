#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){

	//freopen("in","r",stdin);

	ll n;
	while(cin>>n) {
	    ll l= ceil((-1+sqrt(1+4*n*2))/2),s=(l*(l+1))/2 - n;

	    if(l%2==0)
	    	cout<<"TERM "<<n<<" IS "<<l-s<<"/"<<s+1<<endl;
	 	else
	 		cout<<"TERM "<<n<<" IS "<<s+1<<"/"<<l-s<<endl;
	 	
	    
	}
}