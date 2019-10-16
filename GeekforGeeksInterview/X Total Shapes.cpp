#include <bits/stdc++.h>
using namespace std;
int r,c;
const int m=50;
bool ex[m][m],vis[m][m];
void dfs(int ii,int jj){
   for(int i=-1;i<2;i++){
       for(int j=-1;j<2;j++){
           if(abs(i)!=abs(j)){
                int x=i+ii,y=jj+j;
                if(x>=0 && x<r && y>=0 && y<c && !vis[x][y] && ex[x][y]){
                    vis[x][y]=true;
                    dfs(x,y);
                }
           }
       }
   } 
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>r>>c;
        char ch;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>ch;
                if(ch=='X')ex[i][j]=true;
                else ex[i][j]=0;
                vis[i][j]=false;
            }
            // if(i!=r-1)cin>>ch;
        }
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         cout<<ex[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               if(!vis[i][j] && ex[i][j]){
                   ans++;
                   dfs(i,j);
                    // ans++;
                    // stack<pair<int,int> > st;
                    // st.push({i,j});
                    // vis[i][j]=true;
                    // while(!st.empty()) {
                    //     pair<int,int > pt=st.top();
                    //     st.pop();
                    //     for(int ii=-1;ii<2;ii++){
                    //         for(int jj=-1;jj<2;jj++){
                    //             if(abs(ii)!=abs(jj)){
                    //                 int ni=ii+pt.first,nj=jj+pt.second;
                    //                 if(ni>=0 && ni<r && nj>=0 && nj<c && !vis[ni][nj] && ex[ni][nj]){
                    //                     vis[ni][nj]=true;
                    //                     st.push({ni,nj});
                    //                 }
                    //             }
                    //         }
                    //     }

                    // }
               } 
            }
        }
        cout<<ans<<endl;
    }
}