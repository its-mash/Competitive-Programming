#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
		ll x,y;
		cin>>x>>y;
		ll a=x;
		while(x>=y){
			a+=x/y;
			x=x/y+x%y;
		}
		cout<<a<<endl;
}