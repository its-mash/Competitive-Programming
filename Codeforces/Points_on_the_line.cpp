#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

	freopen("in","r",stdin);
	ll 	n,d;
	cin>>n>>d;
	ll ex[n];
	for(int i=0;i<n;i++)
		cin>>ex[i];
	sort(ex,ex+n);
	ll b=0,e=n-1;
	ll c=0;
	while(b<e){
		// cout<<e<<" "<<b<<endl;
		if(ex[e]-ex[b]>d){
			// cout<<e<<" "<<b<<endl;
			if(e-b==1){
				c++;
				break;
			}
			if(ex[e-1]-ex[b]>d && ex[e]-ex[b+1]>d){
				c+=2;
				b++;
				e--;
			}
			else if(ex[e-1]-ex[b]>d)
			{
				c++;
				b++;
			}
			else if(ex[e]-ex[b+1]>d){
				c++;
				e--;
			}
			else
				break;
		}
		else
			break;
	}
	cout<<c<<endl;

}