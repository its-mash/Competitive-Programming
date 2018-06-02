#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	// freopen("in","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string ex[3];
		cin>>ex[0]>>ex[1]>>ex[2];
		ll m=-1;
		for(int i=0;i<n;i++){

			ll c=i*3+1,s=0;
			// cout<<"c"<<c<<endl;
			s+=(ex[0][c+1]=='*');
			s+=(ex[0][c]=='*');
			s+=(ex[0][c-1]=='*');
			s+=(ex[1][c+1]=='*');
			s+=(ex[1][c-1]=='*');
			s+=(ex[2][c+1]=='*');
			s+=(ex[2][c]=='*');
			s+=(ex[2][c-1]=='*');
			// cout<<s<<endl;
			if(s>m)
				m=s;
		}
		cout<<m*4<<endl;

	}
}