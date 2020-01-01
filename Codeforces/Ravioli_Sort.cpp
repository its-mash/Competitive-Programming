#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	string ans="YES";
	while(--n){
		int t;
		cin>>t;
		if(abs(t-x)>=2){
			ans="NO";
		}
		x=t;
	}
	cout<<ans<<endl;
}