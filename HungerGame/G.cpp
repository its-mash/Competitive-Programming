#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}



int main(){
	int x;
	cin>>x;
	if(isPrime(x) && x!=1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
