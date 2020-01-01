#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
	ll n,d,m;
	cin>>d>>m>>n;
	ll ans= (n*(2*d+(n-1)*d))/2 - m;

	cout<<((ans>0)?ans:0)<<endl;

}