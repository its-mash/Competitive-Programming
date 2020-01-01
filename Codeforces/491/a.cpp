#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll a,b,c,t,n;cin>>a>>b>>c>>n;
	t=a+b-c;
	bool f=true;
	if(c>min(a,b))
		f=false;
	if(f && n!=0 && t>=0 && n-t>0)
		cout<<n-t<<endl;
	else
		cout<<-1<<endl;
}
