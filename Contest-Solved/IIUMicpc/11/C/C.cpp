#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input","r",stdin);
	int r,c;
	cin>>r>>c;
	while(r!=0 && c!=0){
		string ex[r];
		for(int i=0;i<r;i++){
			cin>>ex[i];
		}
		bool flag[r][c];
		memset(flag,0,sizeof(flag));
		int count=0;
		for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(ex[i][j]=='X' && !flag[i][j]){
                    count++;
                   // cout<<i<<" "<<j<<endl;
                    stack<pair<int,int> > stat;
                    stat.push(make_pair(i,j));
                    flag[i][j]=true;
                    while(!stat.empty()){
                        pair<int,int> tm=stat.top();
                        stat.pop();
                        //cout<<tm.first<<" tm " <<tm.second<<endl;
                        for(int x=-1;x<2;x++){
                            for(int y=-1;y<2;y++){
                                if(x==0 && y==0)
                                    continue;
                                int nx=tm.first+x,ny=tm.second+y;
                                if(nx>=0 && nx<r && ny>=0 && ny<c ){
                                    if(ex[nx][ny]=='X' &&  !flag[nx][ny]){
                                        flag[nx][ny]=true;
                                        stat.push(make_pair(nx,ny));
                                       // cout<<nx<<", "<<ny<<"pushed"<<endl;
                                    }

                                 }
                            }
                        }
                    }
                    //cout<<endl;
                }
            }
		}
		cout<<count<<endl;
		cin>>r>>c;
	}

}
