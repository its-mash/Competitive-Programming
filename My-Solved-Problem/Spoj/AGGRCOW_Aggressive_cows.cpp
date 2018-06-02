#include <bits/stdc++.h>
using namespace std;


bool isOk(int m,int st[],int n,int c){
	c--;
	int p=0;
	for(int i=1;i<n;i++){
		if(st[i]-st[p]>=m){
			// cout<<st[i]<<" "<<st[p]<<endl;
			c--;
			p=i;
		}
		if(c==0)
			return true;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--) {
	    int n,c;
	    cin>>n>>c;
	    int st[n];
	    for(int i=0;i<n;i++)
	    	cin>>st[i];
	    sort(st,st+n);
	    int l=1,r=st[n-1]-st[0];
	    while(l<r){
	    	int m=l+(r-l+1)/2;
	    	// cout<<"xx"<<m<<endl;
	    	if(isOk(m,st,n,c)){
	    		// cout<<m<<endl;
	    		l=m;
	    	}
	    	else
	    		r=m-1;
	    }
	    cout<<l<<endl;
	}
}

