#include <bits/stdc++.h>
using namespace std;
struct R{
	int b,e,w;
};
inline bool cmp(const R &a,const R &b){
	return a.w<b.w;
}

inline int root(int x,int cn[]){
	while(x!=cn[x])
		x=cn[x];
	return x;
}
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		int n,r;cin>>n>>r;

		int cor[n][2],m=0,cn[n];

		R rt[500500];

		for(int i=0;i<n;i++){
			cn[i]=i;
			scanf("%d %d",&cor[i][0],&cor[i][1]);
			for(int j=0;j<i;j++){
				rt[m].b=j;
				rt[m].e=i;	
				rt[m].w=(cor[i][0]-cor[j][0])*(cor[i][0]-cor[j][0])+(cor[i][1]-cor[j][1])*(cor[i][1]-cor[j][1]);
				m++;
			}
		}
		sort(rt,rt+m,cmp);

		int st=1;
		long double rd=0,tr=0;
		for(int i=0;i<m;i++){
			int br=root(rt[i].b,cn),er=root(rt[i].e,cn);
//			cout<<rt[i].b<<" "<<rt[i].e<<" "<<rt[i].w<<endl;
			if(br!=er){
				if(rt[i].w<=r*r){
					rd+=sqrt(rt[i].w);
				}else{
					tr+=sqrt(rt[i].w);
					st++;
				}
				cn[er]=cn[br];
			}
		}
		cout<<"Case #"<<i+1<<": "<<st<<" "<<round(rd)<<" "<<round(tr)<<endl;
	}
}
