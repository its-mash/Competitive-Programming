#include <bits/stdc++.h>
using namespace std;

#define ll long long
int getS(ll x){
	int cn=0;
	while(x){
		if(x & 1){
			x--;
		}else
			x>>=1;
		cn++;
	}
	return cn-1;
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n,q;scanf("%d %d",&n,&q);

		int ex[n+1];
		ex[0]=0;
		ll tm;
		for(int i=1;i<=n;i++){
			scanf("%Ld", &tm);
			ex[i]=getS(tm)+ex[i-1];
			
		}
		while(q--){
			int l,r;
			scanf("%d %d",&l,&r);
			printf("%d\n",ex[r]-ex[l-1]);
		}
		
	}
}
