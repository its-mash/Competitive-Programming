#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("in","r",stdin);
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(((n-1)*n)%(2*n)==0)
			cout<<((n-1)*n)/(n*2)<<endl;
		else
			cout<<((n-1)*n)/2<<"/"<<n<<endl;
	}
}