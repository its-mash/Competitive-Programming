#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll ex[30001]={};
	int cn[]={1,5,10,25,50};
	ex[0]=1;

	for(int i=0;i<5;i++){
		for(int j=cn[i];j<30001;j++){
			ex[j]+=ex[j-cn[i]];
		}
	}
	int n;
	while(cin>>n){
		if(ex[n]>1)
			cout<<"There are "<<ex[n]<<" ways to produce "<<n<<" cents change."<<endl;
		else
			cout<<"There is only "<<ex[n]<<" way to produce "<<n<<" cents change."<<endl;

	}

}
