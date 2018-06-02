#include <bits/stdc++.h>
using namespace std;

inline bool con(string  a,string b){
	if(a.length()!=b.length())
		return false;
	int c=0;
	for(int i=0;i<a.length();i++)
		if(a[i]!=b[i])
			c++;
	return c==1;	
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie();
	int t;cin>>t;
	while(t--){
		map<string,int> sim;
		string tm;
		int c=0;
		vector<int> ex[20101];
		while(cin>>tm && tm!="*"){
			sim[tm]=c++;
		}
		for(auto it=sim.begin();it!=prev(sim.end());it++){
			for(auto jt=next(it);jt!=sim.end();jt++){
				if(con(jt->first,it->first)){
					ex[jt->second].push_back(it->second);
					ex[it->second].push_back(jt->second);	
				}	
			}
		}
		cin.ignore();
		while(getline(cin,tm) && !tm.empty()){
			istringstream is(tm);
			string a,b;
			is>>a>>b;
			int s=sim[a],d=sim[b];
			queue<pair<int,int> > bf;
			bf.push({s,0});
			bool vis[c]={};
			vis[s]=true;
			while(!bf.empty()){
				pair<int,int> v=bf.front();bf.pop();
				if(v.first==d){
					cout<<a<<" "<<b<<" "<<v.second<<endl;
				}
				for(int i=0;i<ex[v.first].size();i++){
					if(!vis[ex[v.first][i]]){
						bf.push({ex[v.first][i],v.second+1});
						vis[ex[v.first][i]]=true;
					}	
				}
			}

		}	
		if(t!=0)cout<<endl;
	}
}
