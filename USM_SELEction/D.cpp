#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
int main()
{  
	bitset<1000000> tt;
	cout<<tt<<endl;
	cin.sync_with_stdio(false);
	// freopen("in","r",stdin);
	int n,m;
	cin>>n>>m;
	string ex=string(m,'0')+string(n-m,'1');
	
	int q;
	cin>>q;
	// cout<<"dd"<<ex<<endl;
	while(q--){
		int t;
		cin>>t;

		if(t==1){
			int x,y;
			cin>>x>>y;
			ex+=string(y,'0')+string(x-y,'1');
		}
		else if(t==2){
			int x,y;
			cin>>x>>y;
			ex=string(y,'0')+string(x-y,'1')+ex;
			// cout<<endl<<ex<<"|"<<tm<<endl;
		}
		else{
			int i;
			cin>>i;
			cout<<ex[i-1]<<endl;
		}
		// cout<<ex<<endl;
	}
}



