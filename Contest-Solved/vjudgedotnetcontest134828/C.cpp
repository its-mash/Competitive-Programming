#include <iostream>
#include <cstdlib>
#include <stack>
#include <cstring>
#include <queue>
#include <map>
using namespace std;


struct Node{
    int x,y;
    Node(){};
    Node(int x,int y):x(x),y(y){}
    bool operator ==(const Node &n){
        return n.x==x && n.y==y;
    }
};

int xOffset[]={-1,1,0,0};
int yOffset[]={0,0,1,-1};



int main()
{
  ios_base::sync_with_stdio(false);
  int r,c;
  cin>>r>>c;
  while(r!=0 || c!=0){
        int nbr;
        cin>>nbr;
        int ex[r][c];
        //fill_n(*ex,r*c,0);
        memset(ex,0,sizeof(ex));
        while(nbr--){
            int br,nob;
            cin>>br>>nob;
                while(nob--){
                    int cb;
                    cin>>cb;
                    ex[br][cb]=-1;
                }
        }
        bool visited[r][c];
        //fill_n(*visited,r*c,0);
        memset(visited,0,sizeof(visited));
        int sx,sy,fx,fy;
        cin>>sx>>sy>>fx>>fy;
        Node finish=Node(fx,fy);
        queue<Node> myque;

        int depth[r][c];
        depth[sx][sy]=0;
        myque.push(Node(sx,sy));
        visited[sx][sy]=1;
        while(!myque.empty()){
            Node temp=myque.front();
            myque.pop();
            if(temp==finish)
                break;
            for(int i=0;i<4;i++){
                int xmove=temp.x+xOffset[i],ymove=temp.y+yOffset[i];
                if(xmove>=0 && xmove<r && ymove>=0 && ymove<c && !visited[xmove][ymove] && ex[xmove][ymove]!=-1){
                    myque.push(Node(xmove,ymove));
                    //cout<<"Dep tm: "<<xmove<<" "<<ymove<<"  :: "<<depth[temp]<<endl;
                    depth[xmove][ymove]=depth[temp.x][temp.y]+1;
                    visited[xmove][ymove]=1;
                }
            }
      }
      cout<<depth[fx][fy]<<endl;
    cin>>r>>c;
  }
}
