#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n,t;
	cin>>n>>t;
	string ex;
	cin>>ex;
	while(t--){

		for(int i=ex.length()-2;i>=0;i--){
			// cout<<ex[i]<<" "<<ex[i+1]<<endl;
			if(ex[i]=='B'&& ex[i]!=ex[i+1]){
				char t=ex[i];
				ex[i]=ex[i+1];
				ex[i+1]=t;
				i--;

			}
		}
	}
	cout<<ex<<endl;
}