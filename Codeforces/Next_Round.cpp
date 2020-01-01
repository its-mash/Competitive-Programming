#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

int main(){
    // freopen("in","r",stdin);
    ll n,k,c=0;
    cin>>n>>k;
    ll ex[n+1];
    for(int i=1;i<=n;i++)
    	cin>>ex[i];
    for(int i=1;i<=n;i++)
    	if(ex[i]>=ex[k] && ex[i]!=0)
    		c++;

	cout<<c<<endl;

	
}