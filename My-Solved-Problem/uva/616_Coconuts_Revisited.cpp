#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	ll x;
	while(cin>>x && x>=0){
		ll r=sqrt(x);
		bool ans=true;	
		//cout<<x<<endl;	
		if(x==3){
			cout<<x<<" coconuts, "<<2<<" people and 1 monkey"<<endl;
			continue;
		}
		while(r>0 && ans){

			if(x%r==1){
				ll nx=x-1-x/r;
				bool f=true;

				//cout<<"r "<<r<<endl;
				//cout<<nx<<endl;
				for(int k=r-1;k>0;k--){
					
					if(nx%r==1){

						nx=nx-1-nx/r;
						//cout<<nx<<endl;
					}
					else{
						//cout<<"fff"<<endl;
						f=false; break;
					}
					
				}
				if(f && nx%r==0){
					cout<<x<<" coconuts, "<<r<<" people and 1 monkey"<<endl;
					ans=false;
				}
			}
			r--;
		}
		if(ans)
			cout<<x<<" coconuts, no solution"<<endl;
	}
}