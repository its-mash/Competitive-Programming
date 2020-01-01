#include <bits/stdc++.h>

using namespace std;


int main(){

	//freopen("in","r",stdin); 
	long long n,x,tm,c;
	cin>>n>>x;
	c=n;
	while(n--){
		cin>>tm;
		x-=tm;
	}
	if(x==c-1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}	