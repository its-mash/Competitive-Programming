#include <bits/stdc++.h>
using namespace std;

struct Nd{
	int v;
	int f;
	int c;
	int ri;
};
int lv[101],n;

inline bool bfs(vector<Nd> mp[],int s,int t){
	fill(lv,lv+n,-1);
	queue<int> bf;
	bf.push(s);
	lv[s]=0;
	while(!bf.empty()){
		int u=bf.front();bf.pop();
		for(int i=0;i<mp[u].size();i++){	
			Nd &v=mp[u][i]; 
			if(lv[v.v]<0 && v.f < v.c){
				lv[v.v]=lv[u]+1;
				bf.push(v.v);
			}
		}
	}
	return lv[t]>=0;
}

inline int sendFlow(vector<Nd> mp[],int start[],int u,int t,int f){
	if(u==t)return f;
	for(;start[u]<mp[u].size();start[u]++){
		Nd &e=mp[u][start[u]];
		if(lv[u]+1==lv[e.v] && e.f<e.c){
			int cur_f=min(f,e.c-e.f);
			int tem_f=sendFlow(mp,start,e.v,t,cur_f);
			if(tem_f>0){
				e.f+=tem_f;
				mp[e.v][e.ri].f-=tem_f;
				return tem_f;
			}
		}
	}
}

int main(){
	int cs=1;
	while(cin>>n && n){
		n++;
		int s,t,c; cin>>s>>t>>c;
		vector<Nd> mp[n];
		for(int i=0;i<c;i++){
			int u,v,c;scanf("%d %d %d",&u,&v,&c);
			mp[u].push_back(Nd{v,0,c,mp[v].size()});
			mp[v].push_back(Nd{u,0,c,mp[u].size()});

		}
		long long tl=0;
		while(bfs(mp,s,t)){ 
			int *start=new int(n);
			while(int f=sendFlow(mp,start,s,t,INT_MAX)){
				tl+=f;
			}				
		}
		cout<<"Network "<<cs++<<endl;
		cout<<"The bandwidth is "<<tl<<"."<<endl;
	}
}
