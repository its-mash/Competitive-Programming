#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	multiset<int> ex;
	int n,t;
	cin>>n;
	while(n--){
		cin>>t;
		cout<<t<<endl;
		ex.insert(t);
	}
	if(ex.size()==1){
		cout<<0<<endl;
		return 0;
	}
	int l=*ex.begin(),r=*prev(ex.end()),c=0;
	while(r-l>1){
		int x=*(prev(ex.end(),2));
		int d=(l+r+1)/2;
		if(d<x)
			d=x+1;
		c+=(r-d);
		ex.erase(ex.begin());
		ex.erase(prev(ex.end()));
		ex.insert(l+(r-d));
		ex.insert(d);
		l=*ex.begin();
		r=*prev(ex.end());
		cout<<3<<endl;
	}
	cout<<c<<endl;
}
