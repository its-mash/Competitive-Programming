#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,h,ans=0,p,one=1;
	cin>>h>>n;
	bool l=true;
	while(h!=0){
		ll p=one<<(h-one);
		// cout<<ans<<" l: "<<l<<" h: "<<h<<" n: "<<n<<endl;
		if(l && p<n){
			ans+=(p<<1)-1;
			l=1;
			
		}
		else if(!l && n<=p){
			ans+=(p<<1)-1;
			l=0;
		}
		else
			l=!l;
		if(p<n)
			n-=p;
		h--;
		ans++;
		 // cout<<endl;
		
	}
	cout<<ans<<endl;
}