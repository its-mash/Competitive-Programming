#include <bits/stdc++.h>

using namespace std;

int main(){
	int tt;
	cin>>tt;
	for(int t=0;t<tt;t++){
		long double d,r,b;
		cin>>d>>r>>b;
		if(b>r && r!=0){
			cout<<"Case "<<t+1<<": "<<setprecision(3)<<fixed<<(d/sqrt(b*b-r*r)-d/b)<<endl;
		}
		else{
			cout<<"Case "<<t+1<<": "<<"can't determine"<<endl;
		}
	}
}