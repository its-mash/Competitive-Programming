#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t;cin>>n;
	pair<int,int> ex[n];
	for(int i=0;i<n;i++){
		cin>>t;
		ex[i].first=t;
		ex[i].second=i+1;
	}
	sort(ex,ex+n);
	if(n>2){
		cout<<1<<endl;
		cout<<ex[0].second<<endl;
	}else{
		if(n>1){
			if(ex[0].first!=ex[1].first){
				cout<<1<<endl;
				cout<<1<<endl;
			}else
				cout<<-1<<endl;
		}
		else
			cout<<-1<<endl;
	}

}
