#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	string name[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	// while(cin>>n){
	cin>>n;
	ll i=ceil(log2(n/5.0+1));
	// cout<<i<<endl;
	ll ind=ceil((n-5*(pow(2,i-1)-1))/pow(2,i-1));
	// cout<<ind-1<<endl;
	cout<<name[ind-1]<<endl;
	// }
}
