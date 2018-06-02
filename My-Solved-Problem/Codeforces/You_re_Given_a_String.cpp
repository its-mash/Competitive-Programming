#include <bits/stdc++.h>
using namespace std;

int main(){
	string ex;
	cin>>ex;
	int a=0;
	for(int i=0;i<ex.length()-1;i++){
		for(int j=i+1;j<ex.length();j++){
			int ii=i,jj=j;
			while(ex[ii]==ex[jj]){
				ii++;jj++;
			}
			a=max(ii-i,a);
		}
	}
	cout<<a<<endl;
}