#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int ex[n],s=0;
	for(int i=0;i<n;i++){
		cin>>ex[i];
		s+=ex[i];
	}
	int nd=ceil(n*4.5);
	sort(ex,ex+n);
	int i=0;
	while(s<nd){
		s+=5-ex[i];
		i++;
	}
	cout<<i<<endl;
}
