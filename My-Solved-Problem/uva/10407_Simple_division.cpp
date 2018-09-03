#include <bits/stdc++.h>

using namespace std;

long long gcd(long long x,long long y){
	if(y==0)
		return x;
	return gcd(y,x%y);
}

int main(){
	long long x;
	while(cin>>x && abs(x)){
		long long ex[1001],n=1,minn=abs(x);
		ex[0]=x;
		while(cin>>x && abs(x)){
			ex[n++]=x;
			minn=min(minn,abs(x));
		}

		int ans=0;
		for(int r=0;r<=minn;r++){
			int gc=abs(ex[0]-r),i;
			
			for(i=1;i<n && gc>ans;i++){
				gc=gcd(gc,ex[i]-r);
			}
			if(i==n)
				ans=max(gc,ans);
		}
		cout<<ans<<endl;
	}
}