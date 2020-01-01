#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	cin>>n;
	int ex[5]={};
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		ex[t]++;
	}
	if(ex[3]<ex[1]){
		ex[1]-=ex[3];
	}
	else
		ex[1]=0;
	if(ex[2]%2==1){
		if(ex[1]<=2)
			ex[1]=0;
		else
			ex[1]-=2;
	}
	cout<<ceil(ex[1]/4.0)+ceil(ex[2]/2.0)+ex[3]+ex[4]<<endl;
}