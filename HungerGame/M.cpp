#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	// freopen("in","r",stdin);
	// freopen("out","w",stdout);
	ll n;
	cin>>n;
	int ex[n][2];

	for(int i=0;i<n;i++)
		cin>>ex[i][0]>>ex[i][1];

	ll d=ex[0][0],m=ex[0][1],s=0;

	for(int i=1;i<n;i++){
		if(ex[i][1]<m){
			s+=d*m;
			m=ex[i][1];
			d=0;
		}
		d+=ex[i][0];
		
	}
	s+=d*m;
	cout<<s<<endl;
}	