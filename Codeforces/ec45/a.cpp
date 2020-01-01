#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	ll bc=(m-n%m)*a,dc=(n%m)*b;
	cout<<min(bc,dc)<<endl;	
}
