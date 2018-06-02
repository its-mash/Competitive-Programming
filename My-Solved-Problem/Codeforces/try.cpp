#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main(){

	freopen("in", "r", stdin);
	cin.sync_with_stdio(false);

	int n;
	cin>>n;
	while(n--){
		ll l,r,one=1,ans=l;
		cin>>l>>r;
		ans=l|one;
		// cout<<ans<<endl;
		while(ans<=r){
			// cout<<"dd"<<endl;
			l=ans;
			one<<=1;
			ans=l|one;
			
		}
		cout<<l<<endl;
	}
	// int x=12;
	// bitset<10> ex(x);
	// cout<<ex<<endl;
	// bitset<10> fx(~x);
	// cout<<fx<<endl;
	// bitset<10> dx(-~x);
	// cout<<dx<<endl;

}