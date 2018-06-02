#include <bits/stdc++.h>
using namespace std;

int n,m,ex[101][101];

int lcs(int lx[],int rx[]){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0 || j==0)
				ex[i][j]=0;
			else if(lx[i-1]==rx[j-1])
				ex[i][j]=1+ex[i-1][j-1];
			else
				ex[i][j]=max(ex[i-1][j],ex[i][j-1]);
		}
	}
	return ex[n][m];
}
void print(int lx[],int rx[]){
	int i=n,j=m;
	int index=ex[n][m];
	int ans[index];
	while(i && j){
		if(lx[i-1]==rx[j-1]){
			ans[index-1]=lx[i-1];
			i--;j--;index--;
		}
		else if(ex[i-1][j]>ex[i][j-1])
			i--;
		else
			j--;
	}
	for(int i=0;i<ex[n][m];i++)
		cout<<ans[i]<<((i!=ex[n][m]-1)?" ":"");
}
int main(){
	cin>>n>>m;
	int lx[n],rx[m];
	for(int i=0;i<n;i++)
		cin>>lx[i];
	for(int i=0;i<m;i++)
		cin>>rx[i];
	lcs(lx,rx);
	print(lx,rx);
}

