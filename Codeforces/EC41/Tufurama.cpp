#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n,fenw[200005];

void update(int i, int v=1){
	while(i<=n){
		fenw[i]+=v;
		i+=i&-i;
	}
}

ll query(int i,int j){

	ll sum=0;
	while(i){
		sum-=fenw[i];
		i-=i&-i;
	}
	while(j){
		sum+=fenw[j];
		j-=j&-j;
	}
	return sum;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	#endif
	cin.sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	int ex[n+1];

	vector<int> connectedToMe[n+1];
	for(int i=1;i<=n;i++){
		cin>>ex[i];
		if(ex[i]<=n)connectedToMe[ex[i]].push_back(i);
		update(i);
	}
	ll res=0;
	for(int i=1;i<n;i++){
		if(i<ex[i])
			res+=query(i,min(ex[i],n));
		while(connectedToMe[i].size())
		{
			update(connectedToMe[i].back(),-1);
			connectedToMe[i].pop_back();
		}
	}
	cout<<res<<endl;


}

// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("in","r",stdin);
// 	#endif
// 	cin.sync_with_stdio(false);
// 	int n;cin>>n;
// 	int ex[n+1];
// 	for(int i=1;i<=n;i++)cin>>ex[i];

// 	ll ans=0;
// 	while(n>1){
// 		int x=ex[n];
// 		for(int i=1;i<n;i++){
// 			if(ex[i]>=n && x>=i){
// 				ans++;
// 			}
// 		}
// 		n--;
// 	}
// 	cout<<ans<<endl;
// }