#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	while(cin>>t){
	for(int i=1;i<=t;i++){
		for(int j=t;j>i;j--){
			if(i%j!=0)
				cout<<setprecision(2)<<fixed<<i<<"/"<<j<<"("<<i*1.0/j<<")"<<" ";
		}
	}
	cout<<endl;
}
}