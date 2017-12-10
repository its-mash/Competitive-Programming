#include <bits/stdc++.h>

using namespace std;
const int n=60001; 
int ex[n];

void solve()
{
	for(int i=1;i<n;i++){
		for(int j=i+i;j<n;j+=i)
			ex[j]+=i;
	}
}
int main(){
	int n;
	solve();
	cout<<"PERFECTION OUTPUT"<<endl;
	while(cin>>n && n){
		cout<<setw(5)<<n<<"  "<<((ex[n]==n)?"PERFECT":((ex[n]>n)? "ABUNDANT":  "DEFICIENT"))<<endl;
	}
	cout<<"END OF OUTPUT"<<endl;
	
}