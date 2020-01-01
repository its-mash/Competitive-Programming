#include <bits/stdc++.h>

using namespace std;

int main(){
	long long x,y;
	while(cin>>x>>y){
		long long ans=x;
		while(x/y!=0){
			ans+=x/y;
			x=x/y+x%y;
		}
		cout<<ans<<endl;
	}
}