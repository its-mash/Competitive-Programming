#include <bits/stdc++.h>
using namespace std;

#define ld long double

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	cin.sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	ld ex[n][2];
	ld sq[n];
	for(int i=0;i<n;i++){
		cin>>ex[i][0]>>ex[i][1];
		sq[i]=sqrt(ex[i][0]*ex[i][0]+ex[i][1]*ex[i][1]);
	}
	int l,r;
	ld mn=-2;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int x1=ex[i][0],y1=ex[i][1],x2=ex[j][0],y2=ex[j][1];
			ld v=(x1*x2+y1*y2)/(sq[i]*sq[j]);
			if(mn<v){
				mn=v;
				l=i+1;
				r=j+1;
			}
		}
	}
	cout<<l<<" "<<r<<endl;
}