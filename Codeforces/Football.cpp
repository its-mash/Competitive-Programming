#include <bits/stdc++.h>
using namespace std;

#define ll long long 


int main(){
	string ex;
	cin>>ex;
	if(ex.find("0000000")!=string::npos || ex.find("1111111")!=string::npos){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
}