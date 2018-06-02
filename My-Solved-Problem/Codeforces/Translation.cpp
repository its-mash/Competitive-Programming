#include <bits/stdc++.h>
using namespace std;

int main(){
	string ex,fx;
	cin>>ex>>fx;
	reverse(ex.begin(),ex.end());
	if(ex==fx)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;		
}