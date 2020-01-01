#include <bits/stdc++.h>
using namespace std;

int main(){
	int m=30001;
	int ex[m]={},coin[]={1,5,10,25,50};
	bool cc[51];
	cc[1]=true;
	cc[5]=true;
	cc[10]=true;
	cc[25]=true;
	cc[50]=true;

	ex[0]=1;
	for(int i=1;i<m;i++){
		for(int c=0;c<5;c++){
			if(coin[c]<=i && i-coin[c]){
				ex[i]+=ex[i-coin[c]];

			}
		}
	}
	for(int i=1;i<51;i++)
		cout<<i<<"->"<<ex[i]<<endl;	
	int n;
	while(cin>>n){

	}
}
