#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	//freopen("in","r",stdin);
	//freopen("out","w",stdout);
	ll n;
	cin>>n;
	while(n--){
		string ex;
		cin>>ex;
		ll x=count(ex.begin(),ex.end(),'F');
		if(x==0 || x==3 || x==4 || x==6 || x==10 ||x==7)
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
}