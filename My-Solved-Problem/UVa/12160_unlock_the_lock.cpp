#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,u,r,cs=1;
	while(cin>>l>>u>>r && (l || u || r)){
		int w[r],n=0;
		for(int i=0;i<r;i++){
			cin>>w[i];
		}
		int ans[10000]={};

		queue<int> bf;
		bf.push(l);
		ans[l]=1;
		while(!bf.empty()){
			if(ans[u])break;
			int l=bf.front();bf.pop();
			for(int j=0;j<r;j++){
				int v=(w[j]+l);
				v=(v>=10000)?v-10000:v;
				if(!ans[v]){
					bf.push(v);
					ans[v]=ans[l]+1;
				}
			}
		}
		cout<<"Case "<<cs++<<": ";
		if(ans[u])
			cout<<ans[u]-1<<endl;
		else
			cout<<"Permanently Locked"<<endl;
	}
}
