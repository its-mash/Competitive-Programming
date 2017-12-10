#include <bits/stdc++.h>
using namespace std;

const int n=1000001;
bool prime[n];

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
	//freopen("in","r",stdin);

	genPrime();
	for(int i=1;i<n;i++)
		if(!prime[i])
			cout<<i<<" ";
	
	int x;
	while(cin>>x && x){
		int i=x-1;
		while(1){
			if(!prime[i] && !prime[x-i]){
				cout<<x<<" = "<<x-i<<" + "<<i<<endl;
				
				break;
			}
			i-=2;
		}

	}
}