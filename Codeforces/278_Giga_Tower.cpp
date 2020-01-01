#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll x;
	// while(cin>>x) {
	cin>>x;
	for(int j=1;j<=16;j++){
		ll n=abs(x+j);
		
		bool f=false;
		while(n) {
			// cout<<n<<endl;
		    if(n%10==8)
		    	f=true;
		    n/=10;
		}
		if(f){
			cout<<j<<endl;
			break;
		}
	}
	// }

		
}
