#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    ll n,r=0,u=0,a=0;
    cin>>n;
    string ex;
    cin>>ex;
    bool rr=false;
    if(ex[0]=='R'){
    	rr=true;
    }
    for(int i=0;i<n;i++){
    	if(ex[i]=='U')
    		u++;
    	else
   			r++;

   		if(rr && u >r){
   			a++;
   			rr=false;
   		}
   		else if (!rr && u<r){
   			a++;
   			rr=true;
   		}
    }
    cout<<a<<endl;
}