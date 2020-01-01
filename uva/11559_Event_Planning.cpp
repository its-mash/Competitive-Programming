#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

//	freopen("in","r",stdin);

	ll n,b,h,w,p;
	while(cin>>n>>b>>h>>w){
		ll m=b+1;

		while(h--){
			ll p,t;
			cin>>p;
			bool v=false;
			for(int i=0;i<w;i++){
				cin>>t;
				if(t>=n)
					v=true;
			}	
			if(v && p*n<=b)
				m=min(m,p*n);

		}
		if(m!=b+1)
			cout<<m<<endl;
		else
			cout<<"stay home"<<endl;
	}
}