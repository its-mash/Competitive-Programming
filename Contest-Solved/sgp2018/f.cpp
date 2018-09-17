#include <bits/stdc++.h>
using namespace std;

double ths=.5;
int main(){
    int n,q;cin>>n>>q;
    int **ex=new int*[n+1];
	int cr[n+1]={};

    set<pair<int,int> > mod;
	int lm=ths*sqrt(n);

    while(q--){
        int m;scanf("%d",&m);
        if(m==1){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
			if(b>=lm){
				int i=a;
				while(i<=n){
					cr[i]+=c;
					i+=b;
				}
			}
			else{
				if(ex[a]==NULL){
					ex[a]=new int[n+1];
				}
				ex[a][b]+=c;
				mod.insert({a,b});
			}
        }
        else{
            int d;
            scanf("%d",&d);
            int ans=cr[d];
            for(auto it=mod.begin();it!=mod.end();it++){
                int a=it->first,b=it->second;   
                if(a>d)break;
                if(d%b==a)  ans+=ex[a][b];
            }
            printf("%d\n",ans);
        }
    }
}
