#include <bits/stdc++.h>
using namespace std;

int main(){
	string ex;
	cin>>ex;
	if(ex.find('H')!=string::npos || ex.find('Q')!=string::npos || ex.find('9')!=string::npos)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
