#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("in","r",stdin);
	//freopen("out","w",stdout);
	long long n;
	while(cin>>n && n!=0) {
		bool even=true;
		long long size=n,ans=1,c=0;
		while(size!=1){
			
			if(even){
				ans+=pow(2,c);
			}
			c++;
			bool cp=even;
			even=(even==(size%2==0));
			//cout<<ans<<"-- "<<cp<<" "<<size<<" "<<endl;
			size=size/2+((size%2==1 && !cp)? 1:0);
			//cout<<ans<<" "<<even<<" "<<size<<" "<<endl;

		}
		cout<<ans<<endl;

	}
}