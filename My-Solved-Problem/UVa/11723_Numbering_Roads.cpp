#include <bits/stdc++.h>
using namespace std;


int main(){
	//freopen("in","r",stdin);
	double r,n;
	int tt=1;
	while(cin>>r>>n && (r || n)){
		int ans=ceil((r-n)/n);
		if(n>=r)
			cout<<"Case "<<tt<<": "<<0<<endl;
		else if(ans<=26)
			cout<<"Case "<<tt<<": "<<ans<<endl;
		else
			cout<<"Case "<<tt<<": impossible"<<endl;
		tt++;

	}
}