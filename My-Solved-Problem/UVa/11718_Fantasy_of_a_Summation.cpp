#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll getrk(ll n,ll k, ll m){
		
		ll rk=n%m,c=1,ck=k;
		k--;
		int ex[35],in=1;

		ex[0]=rk;


		//cout<<n<<" "<<k<<" "<<m<<" "<<rk<<endl;
		while(k!=0){
			
			if(c+c > k){
				
				//cout<<"k = "<<k<<" "<<" lg= "<<log2(k)<<" += "<<c<<endl;
				

				k-=c;

				int lg;
				ll  x=2;
				while(k!=0){
						lg=log2(k);
						rk=(rk*ex[lg])%m;
						//cout<<"k = "<<k<<" lg= "<<lg<<" += "<<pow(x,lg)<<endl;
						k-=pow(x,lg);
						
				}
				//cout<<" dd "<<rk<<endl;
				return ((ck%m)*rk)%m;
			}
			else{
				rk= (rk*rk)%m;
				ex[in++]=rk;
				c+=c;
			}
		}
		return (k+1)%m;
}

int main(){
	//freopen("in","r",stdin);

	ll t;
	cin>>t;
	for(int x=1;x<=t;x++){
		ll n,k,m,cn,tm;
		cin>>n>>k>>m;
		cn=n;

		ll rm=getrk(n,k,m),sum=0;
		//cout<<"Rm "<<rm<<endl;

		while(cn--) {
		 	cin>>tm;
		 	sum=(sum+tm%m)%m;
		}
		cout<<"Case "<<x<<": "<<(rm*sum)%m<<endl;

	}
}