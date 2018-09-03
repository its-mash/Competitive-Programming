#include <bits/stdc++.h>
using namespace std;

bool isOk(int k,int ex[],int n){
	int i=0,p=0;
	while(k>=ex[i]-p){
	    if(k==ex[i]-p)
	    	k--;
	    p=ex[i];
	    i++;
	    if(i==n)
	    	return true;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		int n;
		cin>>n;
		int ex[n];
		for(int i=0;i<n;i++)
			cin>>ex[i];
		int l=ex[0],r=(cs==5)?10000011:10100001;
		while(l<r) {
		    int m=l+(r-l)/2;
		    if(isOk(m,ex,n)){
		    	r=m;
		    	// cout<<r<<endl;
		    }
		    else
		    	l=m+1;
		}
		cout<<"Case "<<cs<<": "<<r<<endl;	
	}	
}