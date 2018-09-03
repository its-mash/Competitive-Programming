#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("in","r",stdin);
	int n;
	while(cin>>n){

		bitset<10000001> exist;
		int ex[n];
		for(int i=0;i<n;i++){
			cin>>ex[i];
			exist.set(ex[i]);
		}
		sort(ex,ex+n);
		int p;
		cin>>p;
		int l=0,r=n-1;
		while(l<r){
			int m=l+(r-l+1)/2;
			if(ex[m]*2<=p)
				l=m;
			else
				r=m-1;			
		}
		while(!exist.test(p-ex[l]))
			l--;
		// cout<<ex[l]<<" "<<p-ex[l]<<endl;
		cout<<"Peter should buy books whose prices are "<<ex[l]<<" and "<<p-ex[l]<<"."<<endl<<endl;
	}
}