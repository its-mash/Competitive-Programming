#include <bits/stdc++.h>

using namespace std;

// long long gcd(long long a,long long b){
// 	if(b==0)
// 		return a;
// 	return gcd(b,a%b);
// }


int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,c;
		cin>>a>>c;
		if(c%a==0){
			cout<<((c/a >a)?c/a:c)<<endl;
		}
		else 
			cout<<"NO SOLUTION"<<endl;
	}
}