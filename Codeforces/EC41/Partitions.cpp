#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=5;
const int size=200001;
int fact[size],rfact[size];

inline int add(int x,int y){
	x+=y;
	if(x>=mod)	x-=mod;
	return x;
}

inline int sub(int x,int y){
	x-=y;
	if(x<0) x+=mod;
	return x;
}
inline int mul(int x, int y){
	return 1LL*x*y;
}
// inline int mul2(int a, int b) {
// 	return int((a * 1ll * b) % mod);
// }
inline int bin_pow(int x,int y){
	if(y==0)return 1;
	return (y & 1)? mul(x,bin_pow(x,y-1)):bin_pow(mul(x,x),y/2);
}

void precompute(){
	fact[0]=rfact[0]=1;
	for(int i=1;i<size;i++){
		fact[i]=mul(fact[i-1],i);
	}
	rfact[size-1]=bin_pow(fact[size-1],mod-2);
	for(int i=size-1;i>0;i--){
		rfact[i-1]=mul(rfact[i],i);
	}
	// for(int i=0;i<size;i++)
	// 	cout<<fact[i]<<" ";
	// cout<<endl;
	// for(int i=0;i<20;i++)
	// 	cout<<rfact[i]<<" ";
	// cout<<endl;

}
inline int ncr(int n,int r){
	if(r<0 || r>n)return 0;
	// cout<<r<<endl;
	return mul(mul(fact[n],rfact[n-r]),rfact[r]);
}
int stirling(int n,int k){
	int res=0;
	for(int j=k;j>=0;j--){
		int val=mul(ncr(k,j),bin_pow(j,n));
		// cout<<"val:"<<ncr(k,j)<<endl;
		if(k-j & 1)
			res=sub(res,val);
		else
			res=add(res,val);
	}
	return mul(res,rfact[k]);
}

// inline int binPow(int a, int k) {
// 	int ans = 1;
// 	while(k > 0) {
// 		if(k & 1) ans = mul2(ans, a);
// 		a = mul2(a, a);
// 		k >>= 1;
// 	}
// 	return ans;
// }

int main(){
	cout<<bin_pow(4,mod-2);
	cin.sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	precompute();
	int n,k;cin>>n>>k;
	ll swi=0;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		swi=add(swi,t);
	} 
	// cout<<stirling(n,k)<<endl;
	cout<<mul(swi,add(stirling(n,k),mul(n-1,stirling(n-1,k))))<<endl;
	
	
}