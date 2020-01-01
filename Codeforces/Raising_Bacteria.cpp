#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x;
	cin>>x;
	long long c=0;
	while(x){
		c++;
		x=x-(1<<int(log2(x)));
	}
	cout<<c<<endl;
}