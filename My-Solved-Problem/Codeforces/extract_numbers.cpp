#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	string ex,a="",b="";
	cin>>ex;
	ex+=";";
	int j=0;
	bool fsta=true,fstb=true;
	for(int i=0;i<ex.length();i++){
		if(ex[i]==',' || ex[i]==';'){
			string tm=ex.substr(j,i-j);
			j=i+1;
			if(tm.length()>0 && tm.find_first_not_of("0123456789")==string::npos && (tm[0]!='0' || tm.length()==1)){
				a+=((fsta)?"":",")+tm;	
				fsta=false;
			}
			else{
				b+=((fstb)?"":",")+tm;
				fstb=false;
			}
		}
	}
	if(!fsta)
		cout<<"\""<<a<<"\""<<endl;
	else
		cout<<"-"<<endl;
	if(!fstb)
		cout<<"\""<<b<<"\""<<endl;
	else
		cout<<"-"<<endl;
}
