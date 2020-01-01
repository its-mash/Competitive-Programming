#include <bits/stdc++.h>

using namespace std;

int main(){

	//freopen("in","r",stdin);

	int n;
	while(cin>>n && n){
		n++;
		int ex[n][4]={},x,y;
		while(cin>>x>>y && x && y){
			ex[x][0]++;
			ex[x][ex[x][0]]=y;
			ex[y][0]++;
			ex[y][ex[y][0]]=x;
		}

		// for(int i=1;i<n;i++)
		// 	cout<<ex[i][0]<<" "<<ex[i][1]<<" "<<ex[i][2]<<" "<<ex[i][3]<<endl;

		// cout<<endl;
		// if(n%2==0){

		// 	cout<<"NO"<<endl;
		// 	continue;
		// }

		queue<int> qu;
		qu.push(1);

		int color[n];
		fill(color,color+n,-1);
		
		color[1]=1;

		bool f=true;

		while(!qu.empty() && f){
			int nd=qu.front();qu.pop();

			for(int i=1;i<4 && f;i++){
				int e=ex[nd][i];
				if(color[e]==-1){
					color[e]=1-color[nd];	
					qu.push(e);
				}
				else if(color[e]==color[nd]){
					f=false;
				}
			}
		}
		if(f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
}