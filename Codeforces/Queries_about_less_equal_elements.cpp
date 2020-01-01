#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	int n,m;cin>>n>>m;
	int fa[n];
	for(int i=0;i<n;i++){
		cin>>fa[i];
	}
	vector<pair<int,int> > sa(m);
	for(int i=0;i<m;i++){
		int t;
		cin>>t;
		sa[i]={t,i};
	}
	sort(fa,fa+n);
	sort(sa.begin(),sa.end());
	int j=0;
	set<pair<int,int> > st;
	for(int i=0;i<m;i++){
		while(j<n && fa[j]<=sa[i].first){
			j++;
		}
		st.insert({sa[i].second,j});
	}
	for(auto i : st){
		cout<<i.second<<" ";
	}
	cout<<endl;
}
