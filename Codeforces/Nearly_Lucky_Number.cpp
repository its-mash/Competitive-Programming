#include <bits/stdc++.h>

using namespace std;


#define ll long long
int main(){
	string ex;
	cin>>ex;
	ll x=0;
	for(int i=0;i<ex.length();i++)
		if(ex[i]=='4' || ex[i]=='7')
			x++;

	if(x==0){
		cout<<"NO"<<endl;
		return 0;
	}

	bool lck=true;
	while(x){
		ll t=x%10;
		if(t!=4 && t!=7)
			lck=false;
		x/=10;
	}
	if(lck)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}