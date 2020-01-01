#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	long long ex[n];
	for(int i=0;i<n;i++){
		cin>>ex[i];
	}
	sort(ex,ex+n);
	if(k==n){
		cout<<ex[n-1]<<endl;
	}else if(k==0){
		cout<<((ex[0]==1)?-1:1)<<endl;
	}
	else if(ex[k]!=ex[k-1]){
		cout<<ex[k-1]<<endl;
	}
	else
		cout<<-1<<endl;
}

