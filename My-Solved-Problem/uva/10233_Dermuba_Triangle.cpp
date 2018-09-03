#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ll long long

int main(){
	ll a,b;
	//freopen("in","r",stdin);
	while(cin>>a>>b){

		ll n1=ceil(sqrt(a+1)),n2=ceil(sqrt(b+1));
		
		double xa=(a-(n1*n1-n1))*0.5,ya=(((a%2)!=(n1%2)) ? (n1-1)*sqrt(3)/2.0:(n1-2)*sqrt(3)/2.0 + 1.0/sqrt(3)),
		       xb=(b-(n2*n2-n2))*0.5,yb=(((b%2)!=(n2%2)) ? (n2-1)*sqrt(3)/2.0:(n2-2)*sqrt(3)/2.0 + 1.0/sqrt(3));

		//cout<<xa<<","<<ya<<" : "<<xb<<","<<yb<<endl; 
		cout<<setprecision(3)<<fixed<<sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb))<<endl;

	}
}