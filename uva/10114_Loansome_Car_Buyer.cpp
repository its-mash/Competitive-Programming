#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ll long long

int main(){
	//freopen("in","r",stdin);

	ll m,nd;
	ld d, l;

	while(cin>>m>>d>>l>>nd && m>=0){
		//cout<<m<<d<<l<<nd<<endl;

		ld ex[m+1]={};
		while(nd--){
			ll cm;
			ld p;
			cin>>cm>>p;
			for(int i=cm;i<=m;i++)
				ex[i]=p;
		}
		ld value= l+d-((l+d)*ex[0]);
		//cout<<value;
		if(value>l){
			cout<<"0 months"<<endl;
		}
		else{
			ld kisti=l/m;
			for(int i=1;i<=m;i++){
				l-=kisti;
				value-=((value)*ex[i]);
				if(value>l){
					cout<<i<<" "<<((i==1)? "month":"months")<<endl;
					break;
				}
			}
		}

	}
}