#include <bits/stdc++.h>
using namespace std;

const int n=214748;
bitset<n> prime;

void genPrime(){
	
	prime[0]=prime[1]=true;

	for(int i=4;i<n;i+=2)
		prime[i]=true;
	for(int i=3;i*i<n;i+=2){
		if(!prime[i]){
			for(int j=i+i;j<n;j+=i){
				prime[j]=true;
			}
		}
	}
}

int main(){
	genPrime();
	long long int l,u;
	for(int i=1;i<10000;i++)
		if(!prime[i])
			cout<<i<<" ";
		cout<<endl;

}