#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int ex[n+1],t;
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		ex[t]=i;	
	}
	long long s=0;
	for(int i=2;i<=n;i++){
		s+=abs(ex[i]-ex[i-1]);
	}
	printf("%lld\n",s);
}
