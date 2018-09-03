#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	n++;
	int ex[n][n]={};
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			cin>>ex[i][j];
			ex[i][j]+=ex[i-1][j];
			ex[i][j]+=ex[i][j-1];
			ex[i][j]-=ex[i-1][j-1];
		}
	}
	int m=INT_MIN;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int ii=i;ii<n;ii++){
				for(int jj=j;jj<n;jj++){
					int s=ex[ii][jj];
					s-=ex[i-1][jj];
					s-=ex[ii][j-1];
					s+=ex[i-1][j-1];
					if(s>m)m=s;
				}
			}
		}
	}
	cout<<m<<endl;
}
