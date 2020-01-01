#include <bits/stdc++.h>

using namespace std;


int main(){

	//freopen("in","r",stdin); 


	int n;
	//freopen("out","w",stdout);
	cin>>n;


	int a=-1,o=-1,xr=-1;
	bool aa=false,oo=false,s=false;
	//cout<<a<<endl;
	while(n--){
		char x;
		int y;
		cin>>x>>y;
		if(x=='|'){
			if(oo)
				o=o|y;
			else
			{
				oo=true;
				o=y;
			}
		}
		else if(x=='&'){

			if(aa)
				a=a&y;
			else
			{
				aa=true;
				a=y;
			}
		}
		else{
			if(s)
				xr=xr^y;
			else
			{
				s=true;
				xr=y;
			}
		} 
	}
	int cc=(a!=-1) + (o!=-1) + (xr> 0);
	cout<<cc<<endl;
	if(a!=-1)
		cout<<"& "<<a<<endl;
	if(o!=-1)
		cout<<"| "<<o<<endl;
	if(xr>0)
		cout<<"^ "<<xr<<endl;


}