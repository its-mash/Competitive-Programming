#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	int n;cin>>n;
	ld s=0;
	int ex[n];
	cin>>ex[0];
	for(int i=1;i<n;i++){
		cin>>ex[i];
		s+=ex[i]-ex[i-1];
	}
	ll av=round(s/(n-1));
	int c1=0;
	for(int i=1;i<n;i++){
		if(abs(ex[i]-ex[i-1]-av)<=4){
			if(ex[i]-ex[i-1]!=av)
				c1++;
		}
		else{
			cout<<-1<<endl;return 0;
		}
	}
	cout<<c1<<endl;
}
