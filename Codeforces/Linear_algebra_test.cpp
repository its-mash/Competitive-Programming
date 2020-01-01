#include <bits/stdc++.h>
using namespace std;

bool cmpl(const pair<int,int> &a,int v){
	return a.first<v;
}
bool cmpu(int v,const pair<int,int> &a){
	return v<a.first;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		pair<int,int> ex[n];
		for(int i=0;i<n;i++)
			scanf("%d %d",&ex[i].first,&ex[i].second);
		sort(ex,ex+n);
		long long ans=0;
		for(int i=0;i<n;i++){
			auto lw=lower_bound(ex,ex+n,ex[i].second,cmpl);
			auto uw=upper_bound(lw,ex+n,ex[i].second,cmpu);
//			cout<<ex[i].second<<" "<<uw-lw<<endl;
			ans+=uw-lw;
		}	
		cout<<ans<<endl;
	}
}
//int main(){
//	int t;cin>>t;
//	while(t--){
//		int n;cin>>n;
//		int f[n],s[n];
//		for(int i=0;i<n;i++)
//			scanf("%d %d",&f[i],&s[i]);
//		sort(f,f+n);
//		long long ans=0;
//		for(int i=0;i<n;i++){
//			int *lw=lower_bound(f,f+n,s[i]);
//			int *uw=upper_bound(lw,f+n,s[i]);
//			cout<<s[i]<<" "<<uw-lw<<endl;
//			ans+=uw-lw;
//		}	
//		cout<<ans<<endl;
//	}
//}
