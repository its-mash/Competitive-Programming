#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		long long a;
		cin>>a;
		double pii=acos(-1);
		double r=cbrt((48.0*a)/(129*pii));
		cout<<floor((9*r)/2.0)<<endl;
	}
}