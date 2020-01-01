#include <bits/stdc++.h>
using namespace std;
inline bool con(string a,string b){
	int f[10]={},s[10]={};
	for(int i=0;i<20;i++)
	{
		f[a[i]-'0']++;
		s[b[i]-'0']++;
	}
	int cm=0;
	for(int i=0;i<10;i++)
		cm+=min(f[i],s[i]);
	return cm==17;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,s,e;cin>>n>>s>>e;
		string st[n];
		for(int i=0;i<n;i++){
			cin>>st[i];
		}	
		vector<int> ex[n];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(con(st[i],st[j])){
					ex[i].push_back(j);
					ex[j].push_back(i);
				}
			}
		}
		
//		for(int i=0;i<n;i++){
//			cout<<i<<"->"<<endl;
//			for(int j=0;j<ex[i].size();j++)
//				cout<<ex[i][j]<<" "<<endl;
//			cout<<endl;
//		}	
		s--;e--;
		queue<pair<int,int> > stc;
		stc.push({s,0});
		bool vis[n]={};
		vis[s]=true;
		int cn=0,ans=-1;
		while(!stc.empty()){
			pair<int,int> c=stc.front();stc.pop();
			if(c.first==e){
				ans=c.second;
				break;
			}
			for(int i=0;i<ex[c.first].size();i++){
				if(!vis[ex[c.first][i]]){
					stc.push({ex[c.first][i],c.second+1});
					vis[ex[c.first][i]]=true;
				}
			}
		}
		cout<<ans<<endl;
	}
}
