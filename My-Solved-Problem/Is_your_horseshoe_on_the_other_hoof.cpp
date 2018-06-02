#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	set<int> ex;
	ll t;
	int n=4;
	while(n--) {
		cin>>t;
		ex.insert(t);
	}
	cout<<4-ex.size()<<endl;
}