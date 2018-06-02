#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("in","r",stdin);

	long long n,m,c;
	while(cin>>n>>m>>c && (n!=0 || m!=0 || c!=0)){
		if(c==1){
			cout<<(((n-6)/2)*((m-6)/2) + ((n-7)/2)*((m-7)/2))<<endl;
		}
		else{
			cout<<(((n-7)/2)*((m-6)/2) + ((n-6)/2)*((m-7)/2))<<endl;
		}
	}
}