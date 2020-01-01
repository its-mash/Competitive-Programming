#include <bits/stdc++.h>
using namespace std;
bool isPrime(unsigned int l){
	if(l<=1) return false;
	if(l<=3) return true;
	if(l%2==0 || l%3==0) return false;
	for(unsigned int i=5;i*i<=l;i+=6){
		if(l%i==0 || l%(i+2)==0)return false;
	}
	return true;
}
int main(){
	unsigned int l,u;
	while(cin>>l>>u){
		unsigned int c1=0,c2=0,c=UINT_MAX,f1=0,f2=0,f=0,lp=0;
		for(;l<=u;l++){
			if(isPrime(l)){
				if(lp){
					if(l-lp<c){
						c1=lp;c2=l;c=l-lp;
					}
					if(l-lp>f){
						f1=lp;f2=l;f=l-lp;
					}
				}
				lp=l;
			}
		}
		if(c2==0){
			cout<<"There are no adjacent primes."<<endl;
		}
		else
		{
			cout<<c1<<","<<c2<<" are closest, "<<f1<<","<<f2<<" are most distant."<<endl;
		}
		
	}
}