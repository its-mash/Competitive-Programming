#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;
	for(int cs=1;cs<=t;cs++){
		int n;cin>>n;
		int ex[n],w[n],wi[n],wd[n];

		for(int i=0;i<n;i++){
			cin>>ex[i];
		}
		for(int i=0;i<n;i++){
			cin>>w[i];
			wi[i]=w[i];
			wd[i]=w[i];
		}

		int mi=0,md=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(ex[j]<ex[i] && wi[j]+w[i]>wi[i]){
				 	wi[i]=wi[j]+w[i];
				}
				if(ex[j]>ex[i] && wd[j]+w[i]>wd[i]){
				 	wd[i]=wd[j]+w[i];
				}
			}
			mi=max(mi,wi[i]);
			md=max(md,wd[i]);
		}
		if(mi>=md)
			cout<<"Case "<<cs<<". Increasing ("<<mi<<"). Decreasing ("<<md<<")."<<endl;
		else
			cout<<"Case "<<cs<<". Decreasing ("<<md<<"). Increasing ("<<mi<<")."<<endl;
	}
}
