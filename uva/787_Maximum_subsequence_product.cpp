#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	while(1){
		bool f=true;
		ll lzm=1,tm,msf=INT_MIN,mt=1;
		while(cin>>tm && tm!=-999999){
			f=false;
			mt*=tm;
			if(mt==0){
				msf=max(msf,mt);
				mt=1;
				lzm=1;
			}
			else if(mt<0){
				msf=max(msf,mt/lzm);
			}
			else
				msf=max(msf,mt);
			if(lzm>0 && tm!=0){
				lzm*=tm;
			}
		}
		if(f)break;
		cout<<msf<<endl;
	}
}
