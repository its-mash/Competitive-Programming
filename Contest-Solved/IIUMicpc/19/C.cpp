#include <bits/stdc++.h>
using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    char ex[r][c];
    bool visited[r][c];
    memset(visited,0,sizeof(visited));
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>ex[i][j];
    int g=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(ex[i][j]=='@' && !visited[i][j]){
                char ans[r][c];
                copy(&ex[0][0],&ex[0][0]+r*c,&ans[0][0]);
                stack<pair<int,int> > tod;
                pair<int,int> node={i,j};
                tod.push(node);
                while(!tod.empty()){
                    pair<int,int> node=tod.top();
                    tod.pop();
                    ans[node.first][node.second]='1';
                    visited[node.first][node.second]=true;
                    for(int x=-1;x<2;x++){
                        for(int y=-1;y<2;y++){
                            if(x==0 && y==0)
                                continue;
                            int xx=x+node.first,yy=node.second+y;
                            if(xx>=0 && yy>=0 && xx<r && yy<c && ex[xx][yy]=='@' && !visited[xx][yy] ){
                                pair<int,int> node={xx,yy};
                                tod.push(node);
                            }

                        }
                    }
                }
                cout<<"Group "<<g++<<":"<<endl;
                for(int x=0;x<r;x++){
                    for(int y=0;y<c;y++){
                        cout<<ans[x][y];
                    }
                    cout<<endl;
                }

            }
        }
    }


}
