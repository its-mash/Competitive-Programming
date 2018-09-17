#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	int mx=20001;
	while(t--){
		int ex[mx]={};

		int n,cn,sm=0,p;cin>>p>>n;
		for(int i=0;i<n;i++){
			scanf("%d",&cn);
			sm+=cn;
			if(sm>20000)sm=20000;
			for(int j=sm;j>=cn;j--){
				if(j-cn==0 || ex[j-cn]>0){
					if(!ex[j] || ex[j-cn]+1<ex[j]){
						ex[j]=ex[j-cn]+1;
					}
				}
			}
		}
		int i=p;
    	while(!ex[i])i++;
		cout<<i<<" "<<ex[i]<<endl;
	}
}
