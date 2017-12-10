#include <bits/stdc++.h>
using namespace std;

int ex[10000][10]={};
int did(){
	for(int k=1;k<10000;k++){
		int i=k;
		for(int j=0;j<10;j++)
			ex[k][j]=ex[k-1][j];
		if(i>999){

			ex[k][i/1000]++;
			i%=1000;
			ex[k][i/100]++;
			i%=100;
			ex[k][i/10]++;
			i%=10;
			ex[k][i]++;
		}
		else if(i>99){
			ex[k][i/100]++;
			i%=100;
			ex[k][i/10]++;
			i%=10;
			ex[k][i]++;
		}
		else if(i>9){
			ex[k][i/10]++;
			i%=10;
			ex[k][i]++;
		}
		else 
			ex[k][i]++;

	}
}
int main(){
	did();
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		cout<<ex[x][0];
		for(int i=1;i<10;i++){
			cout<<" "<<ex[x][i];
		}
		cout<<endl;
	}
	
}