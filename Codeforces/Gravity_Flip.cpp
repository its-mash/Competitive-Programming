#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
		ll n;
		cin>>n;
		ll ex[n];
		for(int i=0;i<n;i++)
			cin>>ex[i];
		sort(ex,ex+n);
		copy(ex,ex+n,ostream_iterator<ll>(cout," "));
		cout<<endl;

}