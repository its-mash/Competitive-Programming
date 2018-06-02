#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	while(cin>>n && n){
		int s=ceil(sqrt(n));		
		int m=s*s-s+1	;
		//cout<<m<<"dd"<<endl;

		if(s%2==0){
			
			if(n>m)
				cout<<s<<" "<<s*s-n+1<<endl;
			else
				cout<<n+s-m<<" "<<s<<endl;
		}
		else{
			if(n<=m)
				cout<<s<<" "<<n+s-m<<endl;
			else
				cout<<s*s-n+1<<" "<<s<<endl;
		}
	}
}