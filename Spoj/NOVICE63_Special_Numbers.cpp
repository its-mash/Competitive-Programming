#include <bits/stdc++.h>

using namespace std;

long long  ans[61]={};

long long ncr(long long n,long long r){
	if((n-r)/2 < r)
		r=n-r;
	long long ans=1;
	for(long long i=1;i<=r;i++){
		ans*=(n-r+i);
		ans/=i;
	}
	return ans;
}

long long doit(int x){
	if(x == 2)
		return 1;
	//cout<<":"<<x<<endl;
	ans[x]=ncr(x-1,x/2-1)+doit(x-2);
	ans[x+1]=ans[x];
	return ans[x];
}

int main(){
	ans[1]=1;
	ans[2]=1;
	ans[3]=1;
	doit(60);
	for(int i=0;i<=58;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	int n;
	cin>>n;
	while(n--){
		long long ex;
		cin>>ex;
		ex=log2(ex);
		cout<<ans[ex]<<endl;
	}
}