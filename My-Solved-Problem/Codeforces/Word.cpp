#include <bits/stdc++.h>
using namespace std;

int main(){
	string ex;
	cin>>ex;
	long long c=0;

	for(int i=0;i<ex.length();i++)
		if(islower(ex[i]))
			c++;
	if(c<ex.length()-c)
		transform(ex.begin(),ex.end(),ex.begin(),::toupper);
	else
		transform(ex.begin(),ex.end(),ex.begin(),::tolower);	
	cout<<ex<<endl;

}