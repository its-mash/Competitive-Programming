#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int cs;cin>>cs;
	cin.ignore();
	while(cs--){
		int c;cin>>c;
		c+=1;
		int cof[c];
		for(int i=0;i<c;i++)cin>>cof[i];

		double d,k;
		cin>>d>>k;
		int n=ceil((-1+sqrt(1+8*k/d))/2);
		ll ct=0;
		for(int i=0;i<c;i++)
			ct+=cof[i]*pow(n,i);
		cout<<ct<<endl;

	}
}
