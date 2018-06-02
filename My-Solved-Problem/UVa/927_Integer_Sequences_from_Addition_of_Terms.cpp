#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
int main(){
	// freopen("in","r",stdin);
	int t;
	cin>>t;
	while(t--) {
	    int p;
	    cin>>p;
	    // cout<<p<<endl;
	    ll ex[p+1];
	    for(int i=0;i<=p;i++){
	    	cin>>ex[i];
	    }

	    ld d,k;
	    cin>>d>>k;
	    ll n=ceil((-1+sqrt(1+8*k/d))/2.0),ans=0,cn=n;
	    // cout<<n<<endl;
	    ans+=ex[0];
	    for(int i=1;i<=p;i++){
	    	ans+=ex[i]*n;
	    	n*=cn;
	    }
	    cout<<ans<<endl;
	}
}