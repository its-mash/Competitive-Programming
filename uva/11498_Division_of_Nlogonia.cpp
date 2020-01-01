#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("in","r",stdin);
	int t;
	while(cin>>t && t){
		long long  m,n;
		cin>>m>>n;
		long long  x,y;
		while(t--){
			
			cin>>x>>y;
			if(x==m || y==n)
				cout<<"divisa"<<endl;
			else if(y>n){
				if(x<m)
					cout<<"NO"<<endl;
				else if(x>m)
					cout<<"NE"<<endl;

			}
			else{
				if(x<m)
					cout<<"SO"<<endl;
				else if(x>m)
					cout<<"SE"<<endl;
	
			}

		}
	}
}