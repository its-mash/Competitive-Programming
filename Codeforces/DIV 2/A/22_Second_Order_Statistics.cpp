#include <bits/stdc++.h>
using namespace std;

int main(){


	set<int>ex;
	int n;cin>>n;
	while(n--){
		int x;
		cin>>x;
		ex.insert(x);
	}
	if(ex.size()==1)
		cout<<"NO"<<endl;
	else
		cout<<*(next(ex.begin(),1))<<endl;

	// int n;
	// cin>>n;
	// int ex[n];
	// for(int i=0;i<n;i++)
	// 	cin>>ex[i];
	// sort(ex,ex+n);
	// int i=0;
	// while(i<n && ex[++i]==ex[0]);

	// if(i!=n)
	// 	cout<<ex[i]<<endl;
	// else
	// 	cout<<"NO"<<endl;
}