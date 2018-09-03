#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main(){
	int n;cin>>n;
	int ex[n];
	for(int i=0;i<n;i++){
		cin>>ex[i];
	}
	int cp=INT_MAX,cm=INT_MAX;
	for(int i=0;i<n;i++){
		int p=ex[i]%n;
		int m=(i==p)?ex[i]:ex[i]+((i<p)?i+n-p:i-p);
//		cout<<m<<endl;

		if(m<cm)
		{
			cp=i+1;cm=m;
		}
	}
	cout<<cp<<endl;
}
