#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
	int n;cin>>n;
	string ex;cin>>ex;
	int c=0;
	cout<<ex<<endl;
	for(int i=1;i<n-1;i++){
		if(ex[i-1]=='x' && ex[i]=='x' && ex[i+1]=='x')
			c++;
	}
	cout<<c<<endl;
}
