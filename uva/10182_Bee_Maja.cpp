#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll x;
	while(cin>>x) {
		ll r,l,b,t,lv=ceil((-3+sqrt(9+12*(x-1)))/6.0),rw,cl;
		//cout<<lv<<endl;
		r=1+6*(lv*(lv+1)/2);
		t=r-2*(lv+1)+2;
		l=r-3*(lv+1)+3;
		b=r-5*(lv+1)+5;
		
	    //cout<<"r: "<<r<<"t: "<<t<<"l: "<<l<<"b: "<<b<<endl;

	    if(abs(t-x)<abs(b-x)){
	    	rw=((t<x)? min(x-t,lv):max(x-t,-1*(lv)));
	    }
	    else
	    	rw=((b<x)? max(b-x,-1*(lv)) : min(b-x,lv));

	    if(x>=l){
	    	cl=max(x-r,max(l-x,-lv));
	    }
	    else{
	    	cl=min(l-x,min(x-r+6*lv,lv));
	    }
	    cout<<rw<<" "<<cl<<endl;
	}

}