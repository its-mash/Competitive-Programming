#include <bits/stdc++.h>
using namespace std;

#define ll long long

int root(int cn[][2],int x){

	while(cn[x][0]!=x){
		cn[x][0]=cn[cn[x][0]][0];
		x=cn[x][0];
	}
	return x;
}

int main(){
	int n,k;
	cin>>n>>k;
	int cn[n+1][2];
	for(int i=0;i<=n;i++){
		cn[i][0]=i;
		cn[i][1]=1;
	}
	for(int i=0;i<k;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		int rx=root(cn,x),ry=root(cn,y);
	//	if(cn[x][1]>=cn[y][1]){
			cn[ry][0]=rx;		
//			cn[rx][1]+=cn[ry][1];
	//	}
//		else{
//			cn[rx][0]=ry;		
//			cn[ry][1]+=cn[rx][1];
//		}
	}

	for(int i=1;i<=n/2;i++){
		if(root(cn,i)!=root(cn,n-i+1)){
				cout<<"No"<<endl;
				return 0;
		}	
	}
	cout<<"Yes"<<endl;
}
