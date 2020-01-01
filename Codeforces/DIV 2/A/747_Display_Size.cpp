#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sq=sqrt(n);
	while(sq){
		if(n%sq==0){
			cout<<sq<<" "<<n/sq<<endl;break;
		}
		sq--;
	}
}