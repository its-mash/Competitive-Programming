#include <bits/stdc++.h>
using namespace std;

void print(string s,int n,int h){
	if(n==0){

		
		if(h==0)
			cout<<s<<endl;
		return;
	}
	print(s+'0',n-1,h);
	print(s+'1',n-1,h-1);
}

int main(){
	int n,h;
	while(cin>>n>>h){
		print("",n,h);
	}
}