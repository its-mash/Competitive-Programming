#include <bits/stdc++.h>
using namespace std;


int main(){
	//freopen("in","r",stdin);
	int tt=1,t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ex[n];
		for(int i=0;i<n;i++)
			cin>>ex[i];

		cout<<"Case "<<tt<<": "<<ex[n/2]<<endl;
		tt++;

	}
}