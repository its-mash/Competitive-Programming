#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,p,q;cin>>n>>p>>q;
	string ex;cin>>ex;
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i*p+j*q==n){
				cout<<i+j<<endl;
				int k=0;
				for(int x=0;x<i;x++){
					for(int i=0;i<p;i++){
						cout<<ex[k++];
					}
					cout<<endl;
				}
				for(int x=0;x<j;x++){
					for(int i=0;i<q;i++){
						cout<<ex[k++];
					}
					cout<<endl;
				}
				return 0;
			}
		}
	}
	cout<<-1<<endl;

}
