#include <bits/stdc++.h>
using namespace std;

#define ll long long 


int main(){
    freopen("in","r",stdin);
	ll t;
	cin>>t;
	while(t--) {
		
		ll c,m;
		cin>>c>>m;

		vector<vector<ll> > dn;
		
		ll count[1000001]={};

		vector<ll> ex;
		ll tm,n=1;

		cin>>tm;
		ex.push_back(tm);

		count[tm]++;
		while(--c){
			cin>>tm;
			if(count[tm]==0){
				ex.push_back(tm);
				n++;
			}
			count[tm]++;
		}
		sort(ex.begin(),ex.end());

	    vector<ll> sx(n);

	    sx[0]=ex[0]*count[ex[0]];

		for(int i=1;i<n;i++){
			sx[i]=ex[i]*count[ex[i]];
			if(sx[i-1]>sx[i])
				sx[i]=sx[i-1];
		}
		dn.push_back(sx);

		
		ll mx=-1,ii,ij;
		bool b=true;
		for(int i=1;i<n && b;i++){
			vector<ll> tm(n); 
			for(int j=i;j<n;j++){
				tm[j]=dn[i-1][j-1]+ex[j]*count[ex[j]];
				cout<<tm[j]<<"**"<<endl;
				if(tm[j]>=m && tm[j]>=mx){
					b=false;
					ii=i;
					ij=j;
					mx+=tm[j];
				}
			}
			dn.push_back(tm);
		}

		for(int i=0;i<n;i++)
			cout<<ex[i]<<" ";
		cout<<endl;
		for(int i=0;i<=ii;i++){
			for(int j=i;j<n;j++)
				cout<<dn[i][j]<<" ";
			cout<<endl;
		}
		cout<<ii<<"^^"<<ij<<endl;
		if(mx!=-1){
			while(ii!=0){
				cout<<ex[ij]<<">";
				ii--;
				ij--;
			}
		}
		else 
			cout<<"Impossible"<<endl;
	}
}