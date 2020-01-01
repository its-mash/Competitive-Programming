#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a;
	cin>>n>>m;
	long long s=0;
	int ex[n];
	for(int i=0;i<n;i++){
		cin>>ex[i];
	}
	sort(ex,ex+n,greater<int>());
	int i=0;
	while(s<m){
		s+=ex[i];	
		i++;
	}
	cout<<i<<endl;
}
