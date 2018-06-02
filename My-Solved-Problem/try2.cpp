#include <bits/stdc++.h>
using namespace std;

void print(int n,string s){
	if(n==0){
		cout<<s<<endl;
		return;
	}
		
	print(n-1,"("+s+")");
	print(n-1,"()"+s);
	print(n-1,s+"()");



}

int main(){
	int n;
	while(cin>>n){
		print(n,"");
	}
}